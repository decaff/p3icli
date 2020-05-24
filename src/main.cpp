/*
 * p3icli.cpp -- main module of the PowerPoint Picture Insert Command Line
 *               Interface application.
 */

#include "p3icli.h"       // this comes first or get a lot of bizarre errors

#include <ole2.h>
#include <objbase.h>
#include <errno.h>
#include <string.h>
#include <io.h>
#include <limits.h>

#include "progver.h"
#include "cdefs.h"
#include "err.h"
#include "semantics.h"
#include "winutils.h"
#include "purgepics.h"
#include "geom.h"

extern "C" {
char *progname;
}

static bool            ole_initialized;
static CLSID           ppt_clsid;     // powerpoint class id

static bool            kill_PPT_at_exit          = false;
static bool            force_pic_purge           = false;
static bool            start_single_PPT_instance = false;

static bool            wait_exit_set   = false, wait_async_set   = false;
static unsigned long   wait_exit_msecs = 0,     wait_async_msecs = 0;

static bool            wdws_xplr_end_task     = false;
static bool            wdws_xplr_end_task_set = false;

static bool            wdws_xplr_ignore       = true;
static bool            wdws_xplr_ignore_set   = false;

// Don't [let the user] be stupid.  - S. Twain
const  unsigned long   WAIT_OPTION_MAX_VAL = 16000;    // msecs

// Couple WAIT env var names
const char*            WAIT_ASYNC_ENV_VAR  = "P3ICLI_ASYNC_WAIT";
const char*            WAIT_EXIT_ENV_VAR   = "P3ICLI_EXIT_WAIT";

// Couple Windows Explorer env var names
const char*            WDWS_XPLR_END_TASK_ENV_VAR = "P3ICLI_WDWS_XPLR_END_TASK";
const char*            WDWS_XPLR_IGNORE_ENV_VAR   = "P3ICLI_WDWS_XPLR_IGNORE";

static void            cleanup(void);
static void            usage(int rc);

ppt_application        *ppt;
tmplt_control          *tcontrol;
error_reports          *err;
semantics_state        *semstate;
purge_pics             *purgepics;
geom                   *geom_slide;

/* ------------------------------------------------------------------- */

extern "C" {

void
emit_env_var_names(FILE *fp)
{
    fputs(WAIT_ASYNC_ENV_VAR, fp);
    fputs("\n", fp);
    fputs(WAIT_EXIT_ENV_VAR, fp);
    fputs("\n", fp);
    fputs(WDWS_XPLR_END_TASK_ENV_VAR, fp);
    fputs("          (Win10 or later, only)\n",fp);
    fputs(WDWS_XPLR_IGNORE_ENV_VAR, fp);
    fputs("            (Win10 or later, only)\n",fp);
}

}   // end extern "C"

/* ------------------------------------------------------------------- */

static unsigned int
parse_debug_level(const char *cmdline_level_str)
{
    unsigned long user_dbg_level = 0;
    int           valid;

    if (*cmdline_level_str)
    {
        user_dbg_level = atoul(cmdline_level_str, 10, &valid);
        if ((! valid) || user_dbg_level > UINT_MAX)
        {
            fprintf(stderr,
            "\"%s\" : invalid debug level [must be 0 to max unsigned int]\n",
                    cmdline_level_str);
            exit(1);
        }
    }
    return ((unsigned int) user_dbg_level);
}

// format of 'w' option is:  -W{a|x}:<uint>
//
// cmdline_wait_str points at first char following '-W'
static void
parse_wait_vals(const char *cmdline_wait_str)
{
    if (! *cmdline_wait_str)
        usage(1);
    char option = *cmdline_wait_str++;
    if (! (option == 'a' || option == 'x'))
        usage(1);
    if (! *cmdline_wait_str)
        usage(1);
    if (*cmdline_wait_str++ != ':')
        usage(1);

    int           valid;
    unsigned long wait_msecs = atoul(cmdline_wait_str, 10, &valid);
    if ((! valid) || wait_msecs > WAIT_OPTION_MAX_VAL)
    {
        fprintf(stderr,
                "\"%s\" : invalid wait time [must be 0 to %lu]\n",
                cmdline_wait_str,
                WAIT_OPTION_MAX_VAL);
        exit(1);
    }
    if (option == 'a')
    {
        wait_async_set   = true;
        wait_async_msecs = wait_msecs;
    }
    else
    {
        wait_exit_set   = true;
        wait_exit_msecs = wait_msecs;
    }
}

static void
wait_option_housekeeping()
{
    if (wait_exit_set)
        ppt->set_wait_at_pgm_exit(wait_exit_msecs);
    if (wait_async_set)
        ppt->set_wait_after_cb_cmd(wait_async_msecs);
    if (err->debug_enabled() == true)
    {
        char msg[256];

        _snprintf(msg,
                  sizeof(msg),
                  "config: wait after async cmd: %lu",
                  ppt->get_wait_after_cb_cmd());
        err->debug(msg);
        _snprintf(msg,
                  sizeof(msg),
                  "config: wait at exit: %lu",
                  ppt->get_wait_at_pgm_exit());
        err->debug(msg);
    }
}

static void
windows_explorer_housekeeping()
{
    if (! IsWdws10AndLater())
        return;

    if (wdws_xplr_end_task_set)
        ppt->set_wdws_xplr_end_task(wdws_xplr_end_task);
    if (wdws_xplr_ignore_set)
        ppt->set_wdws_xplr_ignore(wdws_xplr_ignore);
    if (err->debug_enabled() == true)
    {
        char msg[256];

        _snprintf(msg,
                  sizeof(msg),
                  "config: End task wdws eXplr: %s",
                  ppt->wdws_xplr_end_task() ? "true" : "false");
        err->debug(msg, 1);
        _snprintf(msg,
                  sizeof(msg),
                  "config: Ignore wdws eXplr: %s",
                  ppt->wdws_xplr_ignore() ? "true" : "false");
        err->debug(msg, 1);
    }
}

static void
collect_env_var_options()
{
    if (grab_numeric_val_from_env_var(WAIT_EXIT_ENV_VAR,
                                      0,
                                      WAIT_OPTION_MAX_VAL,
                                      &wait_exit_msecs))
    {
        wait_exit_set = true;
    }
    if (grab_numeric_val_from_env_var(WAIT_ASYNC_ENV_VAR,
                                      0,
                                      WAIT_OPTION_MAX_VAL,
                                      &wait_async_msecs))
    {
        wait_async_set = true;
    }
    if (IsWdws10AndLater())
    {
        int bval;

        if (grab_bool_val_from_env_var(WDWS_XPLR_END_TASK_ENV_VAR, &bval))
        {
            wdws_xplr_end_task_set = true;
            wdws_xplr_end_task     = (bval == TRUE);   // kill devStudio wrng
        }
        if (grab_bool_val_from_env_var(WDWS_XPLR_IGNORE_ENV_VAR, &bval))
        {
            wdws_xplr_ignore_set = true;
            wdws_xplr_ignore     = (bval == TRUE);   // kill devStudio wrng
        }
    }
}

static bool
force_PPT_close_at_exit(void)
{
    return (start_single_PPT_instance || kill_PPT_at_exit);
}

static void
kill_PPT_then_cleanup(void)
{
    static int      num_times_called = 0;
    P3ICLI_CMD_DATA cmd;

    // When the p3icli err handler detects that too many errors have
    // occurred while running a script, it will exit(), which, under
    // certain circumstances, calls kill_PPT_then_cleanup().  So far, so
    // good.
    //
    // But this "too many errors" trigger from the err handler may also
    // happen as p3icli explicitly exit()s at the end of script processing.
    //
    // Upshot: kill_PPT_then_cleanup() has the potential to be called
    // multiple times (or even recursively) while the program is exiting.
    // Let's not do that.
    if (num_times_called++ == 0)
    {
        add_log_timestamp("all script(s) completed...killing ppt");
        cmd.long_val = false;     // kill ppt DISCARD
        try
        {
            (void) kill_ppt(&cmd);
            add_log_timestamp("ppt killed");
        }
        catch (...)
        {
            // kill_ppt() could throw if p3icli=>PPT comm chain is scrogged.
            // Nothing we can do here...hopefully, kill_ppt() reported a
            // useful error in the log file.
        }
    }
    cleanup();   // die
}

// When p3icli is started with the -T commandline switch, it launches
// a copy of powerpoint and then later attaches to same for script
// processing.  This sequence of events causes the resultant presentation
// to include the user's default slide (added to every presentation when
// PPT initially starts).  The default slide is of course, devoid of data
// and annoying.  Fix that by nuking all slides in the presentation right
// after p3icli initializes.
//
// Note that p3icli nicely handles the situation where it adds slides to an
// empty presentation.
void
delete_default_startup_slide()
{
    bool error_free = false;
    char errbuf[256];

    // handle all errors as non-fatal events...keep going.
    try
    {
        if (ppt->start_instance())    // attach to or start PPT
        {
            Presentations allpres(ppt->app().GetPresentations());
            if (allpres.GetCount() == 1)
            {
                _Presentation pres(ppt->app().GetActivePresentation());
                Slides slides(pres.GetSlides());
                if (slides.GetCount() == 1)
                {
                    // assume that -T connected to the only instance of PPT
                    // available and that said instance only contains one
                    // slide.  Given those assumptions, we assume that that
                    // slide is empty.  Nuke it.

                    add_log_timestamp("stripping blank slide");
                    ppt->delete_all_slides();
                    add_log_timestamp("blank slide deleted");
                }
            }

            // Detach from running instance so that scripting can begin
            // from a known, clean state.
            ppt->detach_instance();
        }
        error_free = true;
    }
    catch (COleDispatchException *de)
    {
        de->GetErrorMessage(errbuf, sizeof(errbuf));
    }
    catch (COleException *e)
    {
        e->GetErrorMessage(errbuf, sizeof(errbuf));
    }
    catch (...)
    {
#define UNK_EXC "last chance exception"
        strncpy(errbuf, UNK_EXC, sizeof(UNK_EXC));
#undef UNK_EXC
    }
    if (! error_free)
    {
        char logmsg[sizeof(errbuf) + 256];

        _snprintf(logmsg,
                  sizeof(logmsg),
                  "delete_default_startup_slide: err (nonfatal): %s",
                  errbuf);
        add_log_timestamp(logmsg);
    }
}

bool
running_under_task_scheduler(void)
{
    return (start_single_PPT_instance);
}

static FILE *
init_log(const char *logfile)
{
    FILE *logfd;

    if ((logfd = fopen(logfile, "w")) == NULL)
    {
        fprintf(stderr,
                "%s: unable to open log file \"%s\": %s\n",
                progname,
                logfile,
                strerror(errno));
        exit(1);
    }
    return (logfd);
}

// only look up ppt class ID once, ever
static void
init_ppt_clsid(void)
{
    HRESULT hr = CLSIDFromProgID(L"PowerPoint.APPLICATION", &ppt_clsid);
    if (! SUCCEEDED(hr))
    {
        report_win32_error(hr, "CLSIDFromProgID");
        exit(err->num_errors());
    }
}

static void
usage(int rc)
{
    fprintf(stderr,
"usage: %s [-hvDEFISX] [-W{a|x}:msec] [-T msec] [-V vrsnfile] [-l logfile] [scriptfile...]\n",
            progname);
    fputs(
"\nwhere:\n\n"
"  -h            print this help message\n"
"  -v            print version and exit\n"
"  -D[n]         enable internal debug msgs at optional level \"n\" (integer)\n"
"  -Ex           send 'End task' msg to windows eXplorer on Win10 host\n"
"  -F            dif cmd: Force image file deletion if number of errors > 0\n"
"  -Ix           Ignore windows eXplorer on Win10 host\n"
"  -S            dump accepted syntax on stdout and exit\n"
"  -X            execute \"kill ppt discard\" after all scripts are processed.\n"
"                Note that -T implies -X .\n"
"  -T msec       assumes p3icli is running under the Task scheduler, which\n"
"                implies that before any script file(s) are processed:\n\n"
"                   1) a single instance of PowerPoint is started, and\n"
"                   2) that (new) PPT instance is allowed msec of time to\n"
"                      cleanly initialize\n\n"
"  -Wa:msec      Wait msec of time after sending Asynchronous PPT command\n"
"  -Wx:msec      Wait msec of time at eXit when -X switch specified\n"
"  -V vrsnfile   write version in vrsnfile and exit\n"
"  -l logfile    record errors in logfile instead of stderr\n"
"\n"
"  scriptfile    one or more file of commands to be executed.  If not\n"
"                specified, commands are read from stdin.\n\n"
"The file \"p3icli_help.html\", included with this program's distribution,\n"
"provides further information, including valid script syntax.\n\n"
"Example Usage (process one script, error(s) listed on stderr):\n"
"    p3icli my_script.txt\n\n"
"Example Usage (process two scripts, error(s) listed in log file):\n"
"    p3icli -l c:\\temp\\p3icli_log.txt script1.txt script2.txt\n",
           stderr);
    exit (rc);
}

static void
cleanup(void)
{
    static int num_times_called = 0;

    // When the p3icli err handler detects that too many errors have
    // occurred while running a script, it will exit(), which eventually
    // calls cleanup().  So far, so good.
    //
    // But this "too many errors" trigger from the err handler may also
    // happen as p3icli explicitly exit()s at the end of script processing.
    //
    // Upshot: cleanup() has the potential to be called multiple times (or
    // even recursively) while the program is exiting.  Let's not do that.
    if (num_times_called++ > 0)
    {
        if (err)
        {
            add_log_timestamp(
                "urecoverable error during cleanup, aborting p3icli..."
                             );

            // we definitely want the log file flushed and closed.
            delete err;
            err = NULL;
        }
        abort();   // brutal
    }

    // Save away a setting before the ppt object is reaped.
    unsigned long lingering_exit_wait;
    lingering_exit_wait = (ppt) ? ppt->get_wait_at_pgm_exit() : 0;

    // NB -- order matters here, a great deal!

    if (force_PPT_close_at_exit())
    {
        add_log_timestamp("freeing acquired resources...");
    }

    // Worry about this Win10/PowerPoint 2016 issue:
    //
    //     Suppose a P3ICLI script starts PPT, pastes at least one slide
    //     (via an "insert slide" command), and does not kill that PPT
    //     instance before it exits.  In this scenario, the PPT instance
    //     becomes an orphan process (only visible in task manager) when PPT
    //     is manually closed by the user.
    //
    // Workaround that makes the PPT instance properly die is to clear the
    // clipboard.
    try
    {
        if (ppt && ppt->pasted_slide())
        {
            if (OpenClipboard(GetConsoleWindow()))
            {
                EmptyClipboard();
                CloseClipboard();
                err->debug("emptied clipboard");
            }
        }
    }
    catch (...)
    {
        // do not care
    }

    try
    {
        if (tcontrol)
        {
            // kills current presentation's ophan template, if any

            delete tcontrol;
            tcontrol = NULL;
        }
    }
    catch (...)  // will throw if PPT session is dead (i.e., closed by user)
    {
    }
    try          // ditto
    {
        if (ppt)
        {
            delete ppt;
            ppt = NULL;
        }
    }
    catch (...)
    {
    }
    if (semstate)
    {
        delete semstate;
        semstate = NULL;
    }
    if (geom_slide)
    {
        delete geom_slide;
        geom_slide = NULL;
    }
    if (ole_initialized)
        CoUninitialize();

    if (purgepics)
    {
        // maybe whack all unprotected pics/graphics files refereneced
        // in a pic<uint> command.

        if ((err->num_errors() == 0) || force_pic_purge)
            purgepics->exec();
        delete purgepics;
        purgepics = NULL;
    }

    if (force_PPT_close_at_exit())
    {
        char msg[256];

        add_log_timestamp("exiting p3icli...");

        // Suppose a user invokes p3icli for the sole purpose of killing all
        // running instances of PPT and then turns around and starts a new
        // script session, as demonstrated with this Unix shell idiom:
        //
        //     $ p3icli -X << END_SCRIPT
        //       halt
        //     END_SCRIPT
        //     $ p3icli -l mylog.txt myscript.txt
        //
        // On a very fast PC running PPT 2016, the 2nd invocation of p3icli
        // will bomb with random PPT connection errors.  Apparently, the
        // 2nd invocation attempts to connect with the exiting, transitory
        // instance of PPT created via the -X switch.  And it all goes bad.
        //
        // In truth, I don't think this scenario occurs except in a test
        // env.  The simplest workaround is to just sleep for an arbitrary
        // time period and let the transitory instance of PPT (created by
        // the -X switch) exit.  The time period utilized below is
        // user-configurable.  Yep, this is a racy hack.

        // Be paranoid...very paranoid.  Don't sleep forever during exit.
        lingering_exit_wait = min(lingering_exit_wait, WAIT_OPTION_MAX_VAL);
        _snprintf(msg,
                  sizeof(msg),
                  "exit: sleeping for %lu msecs",
                  (DWORD) lingering_exit_wait);
        err->debug(msg);
        Sleep((DWORD) lingering_exit_wait);
    }

    if (err)
    {
        delete err;    // at a minimum, fcloses(logfd)
        err = NULL;
    }
}

int
main(int argc, char **argv)
{
    char          *cp, *slash, msg[FILENAME_MAX + 128], *logfile = NULL;
    unsigned int  debug_level  = 0;
    bool          enable_debug = false;
    HRESULT       hr;
    FILE          *logfd = NULL;
    unsigned long PPT_task_sched_wait_time;


    slash = strrchr(argv[0], '\\');
    if (! slash)
        progname = argv[0];
    else
        progname = slash + 1;
    mklower(progname);
    if ((cp = strstr(progname, ".exe")) != NULL)
        *cp = '\0';  // strip progname suffix

    collect_env_var_options();

    // primitive cmd line parsing (getopt not available in MS land)
    argv++;
    while (--argc > 0)
    {
        if (**argv == '-')
        {
            char *option = argv[0] + 1;

            // first handle switches that concatenate arguments, e.g. -D1

            if (*option == 'D')
            {
                // '-D' switch can take an optional, appended unsigned
                // integer level.  Format:   -D<uint>
                //
                // Example:  -D3

                enable_debug = true;
                debug_level  = parse_debug_level(option + 1);
                argv++;
                continue;
            }
            else if (*option == 'W')
            {
                // '-W' switch can take optional, appended arguments.
                // Format:   -Wa:<uint>   or    -Wx:<uint>
                //
                // Example:  -Wa:384     -Wx:200

                parse_wait_vals(option + 1);
                argv++;
                continue;
            }
            else if (*option == 'E')
            {
                if (! (option[1] == 'x' && option[2] == '\0'))
                    usage(1);
                wdws_xplr_end_task_set = wdws_xplr_end_task = true;
                argv++;
                continue;
            }
            else if (*option == 'I')
            {
                if (! (option[1] == 'x' && option[2] == '\0'))
                    usage(1);
                wdws_xplr_ignore_set = wdws_xplr_ignore = true;
                argv++;
                continue;
            }

            // Now deal with switches that don't concatenate args.

            if (option[1])
                usage(1);
            switch (*option)
            {
                case 'h':        // help
                case '?':
                    usage(0);
                    break;
                case 'l':        // open a logfile
                    if (argc - 2 >= 0)
                    {
                        logfile = argv[1];
                        argc--;
                        argv++;
                    }
                    else
                        usage(1);
                    break;
                case 'v':
                    printf("%s %s\n", progname, PROG_VRSN);
                    exit(0);
                    break;
                case 'X':
                    kill_PPT_at_exit = true;
                    break;
                case 'F':
                    force_pic_purge = true;
                    break;
                case 'S':
                    emit_accepted_syntax();
                    exit(0);
                    break;
                case 'V':
                    if (argc - 2 >= 0)
                    {
                        FILE *vrsn_fp;
                        char *vrsnfile;

                        vrsnfile = argv[1];
                        if ((vrsn_fp = fopen(vrsnfile, "w")) == NULL)
                        {
                            fprintf(stderr,
                                    "Unable to open \"%s\" for output: %s\n",
                                    vrsnfile,
                                    strerror(errno));
                            exit(1);
                        }
                        else
                        {
                            fputs(PROG_VRSN, vrsn_fp);
                            fputc('\n', vrsn_fp);
                            fclose(vrsn_fp);
                            exit(0);
                        }
                    }
                    else
                        usage(1);
                    break;
                case 'T':
                    if (argc - 2 >= 0)
                    {
                        int valid;

                        argc--;    // skip past -T cmdline argument
                        argv++;
                        PPT_task_sched_wait_time = atoul(*argv, 10, &valid);
                        if (! valid)
                        {
                            fprintf(stderr,
                                    "\"%s\" is not a valid unsigned integer\n",
                                    *argv);
                            exit(1);
                        }
                        start_single_PPT_instance = true;
                    }
                    else
                        usage(1);
                    break;
                default:
                    usage(1);
                    break;
            }
            argv++;
        }
        else
            break;   // remainder of cmdline must be a single script filename
    }

    if (logfile)
        logfd = init_log(logfile);

    // time to get error system running
    err = new error_reports(logfd);
    if (! err)
    {
        fputs("heap exhausted...giving up", stderr);
        return (1);
    }
    err->set_debug_enabled(enable_debug);
    err->set_debug_level(debug_level);

    // error system running...fairly safe to register cleanup handler
    if (force_PPT_close_at_exit())
        atexit(kill_PPT_then_cleanup);
    else
        atexit(cleanup);

    if (start_single_PPT_instance)
    {
        if (! start_ppt_instance_and_wait(PPT_task_sched_wait_time))
            return (1);
    }

    if (start_single_PPT_instance)
    {
        add_log_timestamp("initializing COM");
    }

    hr = CoInitialize(NULL); // Fire up COM.
    if (FAILED(hr))
    {
        report_win32_error(hr, "CoInitialize");
        return (1);
    }
    ole_initialized = true;
    init_ppt_clsid();

    ppt        = new ppt_application(ppt_clsid);
    tcontrol   = new tmplt_control;
    semstate   = new semantics_state;
    purgepics  = new purge_pics;
    geom_slide = new geom;
    if (! (ppt && tcontrol && semstate && purgepics && geom_slide))
    {
        err->err("heap exhausted...giving up");
        return (1);
    }

    wait_option_housekeeping();
    windows_explorer_housekeeping();

    if (start_single_PPT_instance)
    {
        add_log_timestamp("COM initialization complete");
        delete_default_startup_slide();
        add_log_timestamp("parsing script(s)");
    }

    // if debug level > 5, test integrity of flex token table.
    if ((err->debug_enabled() == true) && (err->get_debug_level() > 5))
    {
        if (! lexer_configured_correctly())
        {
            // Someone's been naughty in lex.l

            err->err(
            "internal error: lexical analyzer incorrectly configured...aborting"
                    );
            return (1);
        }
        else
            err->debug("flex configured correctly", 1);
    }

    if (argc == 0)
    {
        yyin = stdin;      // read script from stdin
        err->lineno_valid(! _isatty(_fileno(yyin)));
        stdin_prompt();   // emit prompt if reading from stdin
        yyparse();        // parse input stream
    }
    else
    {
        int nfiles = argc;
        do
        {
            char *scriptfile = *argv++;
            if ((yyin = fopen(scriptfile, "r")) == NULL)
            {
                _snprintf(msg,
                          sizeof(msg),
                          "unable to open \"%s\"",
                          scriptfile);
                err->err(msg, IS_PGM, errno);
                if (logfd)
                {
                    // error goes to logfile.  Also echo fatal condition in
                    // user's face.

                    fprintf(stderr,
                            "%s: %s: %s\n",
                            progname,
                            msg,
                            strerror(errno));
                }
                goto common_exit_point;
            }
            err->lineno_valid(! _isatty(_fileno(yyin)));
            if (nfiles > 1)
                err->set_script_file(scriptfile);
            // else don't bother cluttering error messages with the script
            // filename because the user only specified one script on
            // the command line.

            stdin_prompt();   // emit prompt if reading from stdin (yes this
                              // is possible, consider "con:").
            yyparse();        // parse input stream
            (void) fclose(yyin);
            reset_lex_input_state();
            err->lineno_valid(false);
            err->set_script_file("");
        }
        while (--argc > 0);
    }

common_exit_point:

    return (err->num_errors());
}
