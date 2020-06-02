/*
 * envvars.h -- declarations for envvars.cpp
 */

#ifndef _ENVVARS_H
#define _ENVVARS_H

// Don't [let the user] be stupid.  - S. Twain
const  unsigned long   WAIT_OPTION_MAX_VAL = 16000;    // msecs

const  unsigned int    INIT_FILE_DBG_LVL   = 4;

class env_vars
{
private:
    bool _wait_async_set;             // T if msecs value is valid
    bool _wait_exit_set;              // T if msecs value is valid

    unsigned long _wait_async_msecs;  // equivalent of -Wa:<num>
    unsigned long _wait_exit_msecs;   // equivalent of -Wx:<num>

    bool _wdws_xplr_end_task_set;     // T if _wdws_explr_end_task is valid
    bool _wdws_xplr_ignore_set;       // T if _wdws_explr_ignore is valid

    bool _wdws_xplr_end_task;         // equivalent of -Ex
    bool _wdws_xplr_ignore;           // equivalent of -Ix

    const char *_init_file_path;      // NULL if none found

    env_vars(const env_vars &rhs);             // no copy constructor
    env_vars & operator=(const env_vars &rhs); // and no assignment operator

public:
    env_vars();
    ~env_vars();

    void       collect_env_var_options(void);

    const char *lookup_init_file_path(void);

    bool wait_async_set()            { return (_wait_async_set); }
    bool wait_exit_set()             { return (_wait_exit_set); }

    unsigned long wait_async_msecs() { return (_wait_async_msecs); }
    unsigned long wait_exit_msecs()  { return (_wait_exit_msecs); }

    void wait_async_msecs_upd(unsigned long val);
    void wait_exit_msecs_upd(unsigned long val);
                                      // update ==> set or change

    bool wdws_xplr_end_task_set()    { return (_wdws_xplr_end_task_set); }
    bool wdws_xplr_ignore_set()      { return (_wdws_xplr_ignore_set); }

    bool wdws_xplr_end_task()        { return (_wdws_xplr_end_task); }
    bool wdws_xplr_ignore()          { return (_wdws_xplr_ignore); }

    void wdws_xplr_end_task_upd(bool val);
    void wdws_xplr_ignore_upd(bool val);
                                      // update ==> set or change
};

/* --------------------------- externs ---------------------------- */

extern env_vars *envvars;

#endif  // ifndef _ENVVARS_H
