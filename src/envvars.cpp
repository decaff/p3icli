/*
 * envvars.cpp -- process all of the env vars referenced by p3icli
 */

#include <string.h>
#include <ctype.h>
#include <sys/stat.h>

#include "cdefs.h"
#include "envvars.h"
#include "err.h"
#include "winutils.h"

// Couple of WAIT env var names
static const char*  WAIT_ASYNC_ENV_VAR  = "P3ICLI_ASYNC_WAIT";
static const char*  WAIT_EXIT_ENV_VAR   = "P3ICLI_EXIT_WAIT";

// Couple of Windows Explorer env var names
static const char*  WDWS_XPLR_END_TASK_ENV_VAR = "P3ICLI_WDWS_XPLR_END_TASK";
static const char*  WDWS_XPLR_IGNORE_ENV_VAR   = "P3ICLI_WDWS_XPLR_IGNORE";

/* ------------------------ helpers ---------------------------------- */

// Possible function return values:
//     F -- no value specified via env var
//     T -- valid rslt returned by reference
//
// Since this routine is invoked at program startup (only), it calls
// exit(1) for invalid data.
static bool
grab_numeric_val_from_env_var(const char*   varname,
                              unsigned long minvalue,
                              unsigned long maxvalue,
                              unsigned long *rslt)
{
    char *opt = getenv(varname);
    bool rc   = false;

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
    return (true);
}

// Possible function return values:
//     F -- no value specified via env var
//     T -- valid rslt returned by reference
//
// Valid boolean values are (case sensitive):  {t,f,true,false}
//
// Since this routine is invoked at program startup (only), it calls
// exit(1) for invalid data.
static bool
grab_bool_val_from_env_var(const char* varname, bool *rslt)
{
    char *opt = getenv(varname);
    bool rc   = false;

    if (! opt)
        return (rc);

    char *cp = trim(opt);
    if (! *cp)
    {
        // blank string or empty string...don't care

        return (rc);
    }

    char *var_value = mklower(cp);
    rc = true;
    if (! var_value[1])
    {
        // single char value

        if (var_value[0] == 'f')
        {
            *rslt = false;
            return (rc);
        }
        else if (var_value[0] == 't')
        {
            *rslt = true;
            return (rc);
        }
    }
    else if (strcmp(var_value, "false") == 0)
    {
       *rslt = false;
       return (rc);
    }
    else if (strcmp(var_value, "true") == 0)
    {
       *rslt = true;
       return (rc);
    }

    // bad env var value
    fprintf(stderr,
            "%s: Error: Env Var %s: value must be one of {t,f,true,false}\n",
            progname,
            varname);
    exit(1);
}

/* ------------------------ env_vars Class --------------------------- */

env_vars::env_vars()
{
    _wait_exit_set   = _wait_async_set   = false;
    _wait_exit_msecs = _wait_async_msecs = 0;

    _wdws_xplr_end_task = _wdws_xplr_end_task_set = false;

    _wdws_xplr_ignore     = true;
    _wdws_xplr_ignore_set = false;

    _init_file_path = NULL;
}

env_vars::~env_vars()
{
    if (_init_file_path)
    {
        (void) free((void *) _init_file_path);
        _init_file_path = NULL;
    }
}

void
env_vars::collect_env_var_options()
{
    unsigned long ulval;
    if (grab_numeric_val_from_env_var(WAIT_EXIT_ENV_VAR,
                                      0,
                                      WAIT_OPTION_MAX_VAL,
                                      &ulval))
    {
        _wait_exit_msecs = ulval;
        _wait_exit_set   = true;
    }
    if (grab_numeric_val_from_env_var(WAIT_ASYNC_ENV_VAR,
                                      0,
                                      WAIT_OPTION_MAX_VAL,
                                      &ulval))
    {
        _wait_async_msecs = ulval;
        _wait_async_set   = true;
    }
    if (IsWdws10AndLater())
    {
        bool bval;

        if (grab_bool_val_from_env_var(WDWS_XPLR_END_TASK_ENV_VAR, &bval))
        {
            _wdws_xplr_end_task_set = true;
            _wdws_xplr_end_task     = bval;
        }
        if (grab_bool_val_from_env_var(WDWS_XPLR_IGNORE_ENV_VAR, &bval))
        {
            _wdws_xplr_ignore_set = true;
            _wdws_xplr_ignore     = bval;
        }
    }
}

// We search for an init file in this order (first found, first used):
//
//     #1   $HOME/.p3iclirc
//     #2   $HOME/_p3iclirc
//     #3   $USERPROFILE/p3icli_init.txt
//
// Returns NULL if no init file found
const char *
env_vars::lookup_init_file_path()
{
    const char *LEAF1  = ".p3iclirc";
    const char *LEAF2  = "_p3iclirc";
    const char *LEAF3  = "p3icli_init.txt";

    char         *delim, buf[FILENAME_MAX + 256];
    size_t       len;
    struct _stat statbuf;

    char *phome = getenv("HOME");
    if (phome)
    {
        len = strlen(phome);
        if (len)
        {
            // #1

            if (len == 1 && phome[0] == '\\')
                delim = "";
            else
                delim = ((len > 1) && phome[len - 1] == '\\') ? "" : "\\";
            _snprintf(buf, sizeof(buf), "%s%s%s", phome, delim, LEAF1);
            if (_stat(buf, &statbuf) == 0)
            {
                if (statbuf.st_mode & _S_IFREG)
                {
                    _init_file_path = xstrdup(buf);
                    return (_init_file_path);
                }
            }

            // #2
            _snprintf(buf, sizeof(buf), "%s%s%s", phome, delim, LEAF2);
            if (_stat(buf, &statbuf) == 0)
            {
                if (statbuf.st_mode & _S_IFREG)
                {
                    _init_file_path = xstrdup(buf);
                    return (_init_file_path);
                }
            }
        }
    }

    // #3
    char *pprofile = getenv("USERPROFILE");
    if (pprofile)
    {
        len = strlen(pprofile);
        if (len)
        {
            if (len == 1 && pprofile[0] == '\\')
                delim = "";
            else
                delim = ((len > 1) && pprofile[len - 1] == '\\') ? "" : "\\";
            _snprintf(buf, sizeof(buf), "%s%s%s", pprofile, delim, LEAF3);
            if (_stat(buf, &statbuf) == 0)
            {
                if (statbuf.st_mode & _S_IFREG)
                {
                    _init_file_path = xstrdup(buf);
                    return (_init_file_path);
                }
            }
        }
    }
    err->debug("no init file noted", INIT_FILE_DBG_LVL);
    return (NULL);
}

void
env_vars::wait_async_msecs_upd(unsigned long val)
{
    _wait_async_set   = true;
    _wait_async_msecs = val;
}

void
env_vars::wait_exit_msecs_upd(unsigned long val)
{
    _wait_exit_set   = true;
    _wait_exit_msecs = val;
}

void
env_vars::wdws_xplr_end_task_upd(bool val)
{
    _wdws_xplr_end_task_set = true;
    _wdws_xplr_end_task     = val;
}

void
env_vars::wdws_xplr_ignore_upd(bool val)
{
    _wdws_xplr_ignore_set = true;
    _wdws_xplr_ignore     = val;
}

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

