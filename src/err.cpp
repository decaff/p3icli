/*
 * err.cpp -- handle error reporting here
 *
 */

#include <windows.h>
#include <string.h>

#include "err.h"
#include "cdefs.h"

using namespace std;

#define NUM_ERR_FMT  "%-4ld\n"

/* ----------------------------------------------------------------- */

/*
 * FUNCTION
 *   fmt_win32_error(unsigned long errcode, char **buf, size_t buflen)
 *
 *   errcode - win32 error code for which message applies.  If errcode is
 *             0, GetLastError() will be invoked to obtain the error code.
 *
 *   buf     - indirect pointer to buf to receive formatted message.  If *buf
 *             is NULL, the buffer is allocated on behalf of the client and
 *             must be free'd using LocalFree().
 *
 *   buflen  - length of buffer (specify 0 if *buf is NULL).
 *
 * DESCRIPTION
 *   Format system error reported by Win32 API.  Adapted from the vile 
 *   editor distro, originally written by Clark Morgan.
 *
 * RETURNS
 *   *buf
 */

char *
fmt_win32_error(unsigned long errcode, char **buf, size_t buflen)
{
    int flags = FORMAT_MESSAGE_FROM_SYSTEM;

    if (! *buf)
        flags |= FORMAT_MESSAGE_ALLOCATE_BUFFER;
    FormatMessage(flags,
                  NULL,
                  errcode == 0 ? GetLastError() : errcode,
                  MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), /* dflt language */
                  (*buf) ? *buf : (LPTSTR) buf,
                  buflen,
                  NULL);
    if (*buf)
    {
        // these error messages tend to be terminated with CR/LF.  Why?

        char   *beg, *end;
        size_t len;

        beg = *buf;
        len = strlen(beg);
        if (len > 0)
        {
            end = beg + len - 1;
            while (end > beg)
            {
                if (isspace(*end))
                    *end-- = '\0';
                else
                    break;
            }
        }
    }
    return (*buf);
}

void
report_win32_error(unsigned long errcode, const char *api_name)
{
    string fullmsg(api_name);
    char   *w32errbuf = NULL;

    fullmsg += "(): ";
    fmt_win32_error(errcode, &w32errbuf, 0);
    fullmsg += w32errbuf;
    err->err(fullmsg.c_str());
    LocalFree(w32errbuf);
}

/* ----------------------------------------------------------------- */
error_reports::error_reports(FILE *fd)
{
    logfd      = fd;
    nerrors    = curr_debug_level = 0;
    add_lineno = debug_enabled_state = false;
    write_error_count();   // put initial "0" error count in log file
    
}

error_reports::~error_reports()
{
    if (logfd)
    {
        (void) fclose(logfd);
        logfd = NULL;
    }
}

void
error_reports::write_error_count(void)
{
    if (logfd)
    {
        rewind(logfd);
        fprintf(logfd, NUM_ERR_FMT, nerrors);
        fflush(logfd);
        fseek(logfd, 0L, SEEK_END);
    }
}

// useful for debug text or infomational data...
void
error_reports::raw_msg(const char *msg)
{
    fputs(msg, (logfd) ? logfd : stdout);
}

void
error_reports::debug(const char *msg, unsigned int client_rqrd_dbg_lvl)
{
    if (debug_enabled_state && (curr_debug_level >= client_rqrd_dbg_lvl))
        msg_out(msg, IS_DEBUG, IS_PGM, 0);
}

void
error_reports::info(const char *msg, bool log_file_msg_only)
{
    if (log_file_msg_only && (! logfd))
    {
        // some informational messages should not appear on stderr

        return;
    }
    msg_out(msg, IS_INFO, IS_PGM, 0);
}

void
error_reports::warn(const char *msg, int syserrno)
{
    msg_out(msg, IS_WARNING, IS_PGM, syserrno);
}

void
error_reports::set_script_file(const char *filename)
{
    curr_script = filename;
    lineno      = 1;    // new script -> reset line counter
}

void
error_reports::err(const char *msg, err_src_enum src, int syserrno)
{
    msg_out(msg, IS_ERROR, src, syserrno);
}

/*
 * Error/Informational/Warning Messages are of this format:
 *
 * <prgname>|PPT:[ [<scriptname>(]line <lineno>[)]:] {error|warning|info}: \
 *                                                  msg txt [: (syserr txt]
 *
 * It's just a small matter or software.
 */
void
error_reports::msg_out(const char    *msg,
                       msg_type_enum type,
                       err_src_enum  src,
                       int           syserrno)
{
    bool add_filename;
    char buf[FILENAME_MAX * 2 + 128], *typestr;
    int  n = 0, bufsz = sizeof(buf);
    FILE *outfd;

    n = _snprintf(buf, bufsz, "%s: ", (src == IS_PGM) ? progname : "PPT");
    add_filename = (add_lineno && curr_script.length());
    if (add_lineno && ! add_filename)
    {
        // reading commands from pipe, so line numbers matter

        n += _snprintf(buf + n , bufsz - n, "line %ld: ", lineno);
    }
    else if (add_filename)
    {
        // reading commands from file, so line numbers & filename matter

        n += _snprintf(buf + n , 
                       bufsz - n,
                       "%s(line %ld): ", 
                       curr_script.c_str(),
                       lineno);
    }
    if (type == IS_ERROR)
    {
        nerrors++;
        typestr = "error";
    }
    else if (type == IS_WARNING)
        typestr = "warning";
    else if (type == IS_INFO)
        typestr = "info";
    else
        typestr = "debug";
    n += _snprintf(buf + n , max(0, bufsz - n), "%s: %s", typestr, msg);
    if (syserrno != 0)
        _snprintf(buf + n, max(0, bufsz - n), ": %s", strerror(syserrno));

    outfd = (logfd) ? logfd : stderr;

    if (type == IS_ERROR)
        write_error_count();

    fputs(buf, outfd);
    fputc('\n', outfd);
    fflush(outfd);
    if (nerrors >= P3ICLI_MAX_SCRIPT_ERRS && add_lineno)
    {
        if (type == IS_ERROR)
        {
            // That's enough for user to fix, at the moment

            fprintf(outfd,
                    "%s: warning: giving up, too many errors....\n",
                    progname);
            fflush(outfd);
            exit(nerrors);
        }
        // Otherwise, _don't_ bail during cleanup() while reporting a
        // warning or informational message.  You know...like during a
        // messed up task scheduler run where trace data is being recorded
        // in the log file.
    }
}
