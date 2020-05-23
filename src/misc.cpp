/*
 * misc.cpp -- collection of unrelated routines
 *
 */

#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <windows.h>

#include "cdefs.h"
#include "err.h"

#define REG_SW_LOCN_KEY  \
                    "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths"

/* --------------------------------------------------------------------- */

extern "C" {

// access to error reporting for lex and yacc
void
syntax_error(const char *msg, int syserrno)
{
    err->err(msg, IS_PGM, syserrno);
}

void
warning_msg(const char *msg, int syserrno)
{
    err->warn(msg, syserrno);
}

/* based on code from vile editor ... */
char *
mklower(char *s)
{
    char *sp;

    for (sp = s; *sp; sp++)
    {
        if (isupper(*sp))
        *sp = (char) tolower(*sp);
    }
    return (s);
}

char *
trim(char *str)
{
    char   *end;
    size_t len;

    // trim leading whitespace first
    while (isspace(*str))
        str++;
    if ((len = strlen(str)) == 0)
        return (str);

    // trim trailing whitespace next
    end  = str + len - 1;
    while (isspace(*end) && end > str)
        *end-- = '\0';;
    return (str);
}

// malloc or die (with error msg)
void *
xmalloc(size_t nbytes)
{
    void *p;

    if ((p = malloc(nbytes)) == NULL)
    {
        err->err("malloc() failed...giving up", IS_PGM, errno);
        exit(err->num_errors());
    }
    return (p);
}

// dup string or die (with error msg)
char *
xstrdup(const char *src)
{
    char *dst = (char *) xmalloc(strlen(src) + 1);

    strcpy(dst, src);
    return (dst);
}

// from vile, originally contributed by Clark Morgan
unsigned long
atoul(const char *str, int base, int *valid)
{
    char          *remainder;
    unsigned long rslt = 0;

    *valid = FALSE;

    while (*str && isspace(*str))
        str++;
    if (! *str || *str == '+' || *str == '-')
        return (rslt);   // bogus...signed int or no integer data

    errno = 0;
    rslt  = strtoul(str, &remainder, base);
    if (! (errno == EDOM || errno == EINVAL || errno == ERANGE))
    {
        while (*remainder && isspace(*remainder))
            remainder++;
        if (! *remainder)
            *valid = TRUE;    // yea
    }
    return (rslt);
}

static const char FILE_PREFIX[]  = "file://";
static const char HTTP_PREFIX[]  = "http://";
static const char HTTPS_PREFIX[] = "https://";

static bool
is_web_based_file(const char *fname)
{
    if (fname[0] == 'h' || fname[0] == 'H')
    {
        size_t len = strlen(fname);
        if (len >= sizeof(HTTP_PREFIX))
        {
            if (fname[4] == 's' || fname[4] == 'S')
            {
                if (len >= sizeof(HTTPS_PREFIX))
                {
                    return (_strnicmp(HTTPS_PREFIX,
                                      fname,
                                      sizeof(HTTPS_PREFIX) - 1) == 0);
                }
            }
            else
            {
                return (_strnicmp(HTTP_PREFIX,
                                  fname,
                                  sizeof(HTTP_PREFIX) - 1) == 0);
            }
        }
    }
    else if (fname[0] == 'f' || fname[0] == 'F')
    {
        return ((strlen(fname) >= sizeof(FILE_PREFIX)) &&
                (_strnicmp(FILE_PREFIX, fname, sizeof(FILE_PREFIX)-1) == 0));
    }
    return (false);
}

int
is_a_file(const char *fname, P3ICLI_FILE_STATUS action)
{
    char   buf[FILENAME_MAX + 128];
    int    rc = TRUE;
    struct _stat statbuf;

    // Pesky users can specify file names that include (I kid you not)
    // these prefixes:
    //
    //            http://   https://   file://
    //
    // What's more, PPT will do the right thing, assuming the user has READ
    // access. stat() cannot grok the validity of such files, so ignore them.
    if (is_web_based_file(fname))
        return (rc);

    if (_stat(fname, &statbuf) < 0)
    {
        _snprintf(buf, sizeof(buf), "stat(\"%s\") failed", fname);
        if (action == P3ICLI_IF_NOT_FILE_WARN)
        {
            // Don't abort...let client or PPT take a crack at file

            err->warn(buf, errno);
        }
        else
            err->err(buf, IS_PGM, errno);
        rc = FALSE;

    }
    else if (! (statbuf.st_mode & _S_IFREG))
    {
        _snprintf(buf, sizeof(buf), "\"%s\" is not a regular file", fname);
        if (action == P3ICLI_IF_NOT_FILE_WARN)
        {
            // Don't abort...let client or PPT take a crack at file

            err->warn(buf, errno);
        }
        else
            err->err(buf, IS_PGM, errno);
        rc = FALSE;
    }
    return (rc);
}


//
// Write a (debugging?) string to the log, preceded with a timestamp.
// If there is no log, the message will be discarded.
//
// This logging feature will primarily be used to help diagnose problems
// experienced by those individuals using P3ICLI under the Windows task
// scheduler.  It's also used in conjunction with the -X switch, assuming
// the user specifies a log file on the command line.
//
void
add_log_timestamp(const char *msg)
{
    char         *logmsg;
    long         logmsg_sz;
    SYSTEMTIME   st;

    logmsg_sz = strlen(msg) + 128;
    logmsg    = (char *) xmalloc(logmsg_sz);
    GetLocalTime(&st);
    _snprintf(logmsg,
              logmsg_sz,
              "[%02d/%02d %02d:%02d:%02d.%03ld] : %s",
              st.wMonth,
              st.wDay,
              st.wHour,
              st.wMinute,
              st.wSecond,
              st.wMilliseconds,
              msg);
    err->info(logmsg, true);  // no log file, no message.
    (void) free(logmsg);
}

// start a single instance of PPT and wait "wt_time" milliseconds
// returns true if all is well, else false
int
start_ppt_instance_and_wait(unsigned long wt_time)
{
    char                msg[700], key[512],
                        path[1024], *pdynamic_cmd, *exe;
    HKEY                hkey;
    int                 ok;
    DWORD               pathsize;
    PROCESS_INFORMATION pi;
    BOOL                rc;
    int                 regrc;
    STARTUPINFO         si;

    ok = FALSE;

    /* try to exec cmd as is ... */
    exe = "POWERPNT.EXE";
    memset(&si, 0, sizeof(si));
    si.cb          = sizeof(si);
    si.wShowWindow = SW_SHOWNORMAL;
    si.dwFlags     = STARTF_USESHOWWINDOW;
    add_log_timestamp("try to start PPT via PATH env var");
    rc = CreateProcess(NULL, exe, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
    if (rc)
    {
        (void) CloseHandle(pi.hProcess);
        (void) CloseHandle(pi.hThread);
        add_log_timestamp("PPT started via PATH env var...now sleeping");
        Sleep(wt_time);
        add_log_timestamp("Sleep complete, command line wait Time complete");
        return (TRUE);
    }

    add_log_timestamp("PPT start via PATH env var failed (not an error)");

    /* sigh -- look for cmd's path in registry */
    _snprintf(key, sizeof(key), "%s\\%s", REG_SW_LOCN_KEY, exe);

    /* now registry sludge */
    regrc = RegOpenKeyEx(HKEY_LOCAL_MACHINE, key, 0, KEY_QUERY_VALUE, &hkey);
    if (regrc != ERROR_SUCCESS)
    {
        _snprintf(msg, sizeof(msg), "RegOpenKeyEx(\"%s\") failed", key);
        err->err(msg);
        return (ok);
    }
    pathsize = sizeof(path);
    regrc    = RegQueryValueEx(hkey,
                               NULL,
                               NULL,
                               NULL,
                               (LPBYTE) path,
                               &pathsize);
    if (regrc != ERROR_SUCCESS)
    {
        report_win32_error(regrc, "RegQueryValueEx");
        (void) RegCloseKey(hkey);
        return (ok);
    }
    (void) RegCloseKey(hkey);

    pathsize     = strlen(path) + 32;   // be conservative, very conservative
    pdynamic_cmd = (char *) xmalloc(pathsize);
    if (strchr(path, ' ') != NULL)
        _snprintf(pdynamic_cmd, pathsize, "\"%s\"", path);
    else
        _snprintf(pdynamic_cmd, pathsize, "%s", path);

    /* try again to create process */
    add_log_timestamp("try to start PPT via registry-extracted path");
    rc = CreateProcess(NULL,
                       pdynamic_cmd,
                       NULL,
                       NULL,
                       FALSE,
                       0,
                       NULL,
                       NULL,
                       &si,
                       &pi);
    if (rc)
    {
        (void) CloseHandle(pi.hProcess);
        (void) CloseHandle(pi.hThread);
        ok = TRUE;
    }
    else
    {
        _snprintf(msg, sizeof(msg), "CreateProcess(%s) failed", pdynamic_cmd);
        err->err(msg);
    }
    (void) free(pdynamic_cmd);
    if (ok)
    {
        add_log_timestamp("PPT started via registry path...now sleeping");
        Sleep(wt_time);
        add_log_timestamp("Sleep complete, command line wait Time complete");
    }
    return (ok);
}

void
binary_backoff_wait(unsigned long *wait_msecs, const char* debug_tag)
{
    char               msg[256];
    const unsigned int RQRD_DEBUG_LVL = 5;

    _snprintf(msg,
              sizeof(msg),
              "%s: sleeping for %lu msecs",
              debug_tag,
              (DWORD) *wait_msecs);
    err->debug(msg, RQRD_DEBUG_LVL);
    Sleep((DWORD) *wait_msecs);
    *wait_msecs *= 2;
}

// Possible function return values:
//     F -- no value specified via env var
//     T -- valid rslt returned by reference
int
grab_numeric_val_from_env_var(const char*   varname,
                              unsigned long minvalue,
                              unsigned long maxvalue,
                              unsigned long *rslt)
{
    char *opt = getenv(varname);
    int  rc   = FALSE;

    if (! opt)
        return (rc);

    char *cp = opt;
    while (isspace(*cp))
        cp++;
    if (! *cp)
    {
        // blank string or empty string...don't care

        return (rc);
    }

    int valid;
    unsigned long tmp = atoul(opt, 10, &valid);
    if (! valid)
    {
        fprintf(stderr,
                "%s: Error: Env Var %s: not a valid unsigned integer\n",
                progname,
                varname);
        exit(1);
    }
    if (! (tmp >= minvalue && tmp <= maxvalue))
    {
        fprintf(stderr,
                "%s: Error: Env Var %s: valid range is %lu to %lu\n",
                progname,
                varname,
                minvalue,
                maxvalue);
        exit(1);
    }
    *rslt = tmp;
    return (TRUE);
}

// Possible function return values:
//     F -- no value specified via env var
//     T -- valid rslt returned by reference
//
// Valid boolean values are (case insensitive):  {t,f,true,false}
int
grab_bool_val_from_env_var(const char* varname, int *rslt)
{
    char *opt = getenv(varname);
    int rc    = FALSE;

    if (! opt)
        return (rc);

    char *cp = trim(opt);
    if (! *cp)
    {
        // blank string or empty string...don't care

        return (rc);
    }

    char *var_value = mklower(cp);
    rc = TRUE;
    if (! var_value[1])
    {
        // single char value

        if (var_value[0] == 'f')
        {
            *rslt = FALSE;
            return (rc);
        }
        else if (var_value[0] == 't')
        {
            *rslt = TRUE;
            return (rc);
        }
    }
    else if (strcmp(var_value, "false") == 0)
    {
       *rslt = FALSE;
       return (rc);
    }
    else if (strcmp(var_value, "true") == 0)
    {
       *rslt = TRUE;
       return (rc);
    }

    // bad env var value
    fprintf(stderr,
            "%s: Error: Env Var %s: value must be one of {t,f,true,false}\n",
            progname,
            varname);
    exit(1);
}

}   // extern "C"
