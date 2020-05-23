/*
 * err.h -- all facets of error handling
 *
 */

#ifndef _ERR_H
#define _ERR_H

#include <stdio.h>
#include <stddef.h>
#include <string>

/* --------------------------- macros ----------------------------- */

/* --------------------------- types ------------------------------ */

enum err_src_enum { IS_PPT, IS_PGM };

// It turns out that error reporting is messy enough to warrant an object
// that tracks all of the different info that should be reported/recorded.
class error_reports
{
private:
    bool add_lineno;          // T -> input stream is not a tty, so add line
                                 // numbers to generated messages.

    unsigned int curr_debug_level;
                              // Allows client to control verbosity of debug
                                 // output.
    bool debug_enabled_state;
    FILE *logfd;
    int  nerrors;             // #errors in the input script.

    std::string curr_script;  // name of script file currently being 
                                 // processed, <empty> if reading from stdin.

    enum msg_type_enum { IS_ERROR, IS_WARNING, IS_INFO, IS_DEBUG };

    void msg_out(
                 const char    *msg, 
                 msg_type_enum type,
                 err_src_enum  src,
                 int           syserrno
                );

    void write_error_count(void);

    error_reports(const error_reports &rhs);  // no copy constructor
    error_reports & operator=(const error_reports &rhs);
                                              // and no assignment operator

public:
    error_reports(FILE *fd);
    ~error_reports();

    void lineno_valid(bool input_not_tty)    { add_lineno = input_not_tty; }

    void debug(const char *msg, unsigned int client_rqrd_dbg_lvl = 0);
                              // write a message to either stderr or the
                              // log file (if specified).  The message is
                              // prepended with a short tag identifying its
                              // purpose.

    void raw_msg(const char *preformatted_msg);
                              // write a preformatted message to either
                              // stdout or the log file (if specified).
                              // The preformatted message is not
                              // interpreted in any way.  This method is
                              // useful for dumping informational data to
                              // stdout or the log file, as appropriate.

    void info(const char *msg, bool log_file_msg_only = false);
                              // report informational message.  Message is
                              // suppressed when "log_file_msg_only" is
                              // true and there is no log file.

    void warn(const char *, int syserrno = 0);
                              // report warning

    void err(const char *, err_src_enum src = IS_PGM, int syserrno = 0);
                              // report error message, specifying if err is
                                 // from PowerPoint or not and an optional
                                 // system errno.

    int num_errors(void)     { return nerrors; }
                             // how many errors recorded so far?

    void set_script_file(const char *name);

    unsigned int get_debug_level(void)             { return(curr_debug_level);}
    void         set_debug_level(unsigned int lvl) { curr_debug_level = lvl;  }

    bool         debug_enabled(void)            { return(debug_enabled_state);}
    void         set_debug_enabled(bool state)  { debug_enabled_state = state;}
};

/* --------------------------- externs ---------------------------- */

extern error_reports *err;  // one and only object instance.

extern char  *fmt_win32_error(unsigned long errcode, char **buf, size_t buflen);
extern void  report_win32_error(unsigned long errcode, const char *api_name);

#endif  // ifndef _ERR_H
