/*
 * p3icli.h -- common symbols, types, externs (in OO context)
 *
 */

#ifndef P3ICLI_H
#define P3ICLI_H

#include <afxdisp.h>

#include "msppt12.h"
#include "msotlb.h"
#include "msoffice14.h"
#include "cdefs.h"


/* --------------------------- macros ----------------------------- */

/* --------------------------- types ------------------------------ */

// wrapper class to access PowerPoint Automation interface
class ppt_application
{
private:
    bool          app_set;  // T -> pptapp is initialized
    CLSID         clsid;    // ppt class id
    bool          pasted_slide_state;
                            // T -> at least one slide was pasted from a
                               // src presentation to a dst presentation;
    _Application  pptapp;   // when initialized, this Automation class wrapper
                               // provides programmable access to PPT.
    double        pptvrsn;  // ppt version #

    unsigned long wait_after_cb_cmd;
                            // number of msec to wait after issuing a PPT
                            // 2010 (or later) Command Bar command.
    unsigned long wait_at_pgm_exit;
                            // number of msec to wait at exit() if -X or -T
                            // specified on p3icli command line.
    bool          _wdws_xplr_end_task;
                            // T -> If current OS is Win10 or later, close
                               // all instances of Windows Explorer running
                               // on the desktop.
    bool          _wdws_xplr_ignore;
                           // T -> If current OS is Win10 or later, make no
                              // effort to "end task" visible instances of
                              // Windows Explorer or warn (in the log)
                              // about their presence.

    void          reset_state(void);

    void          detach_instance(void) { reset_state(); }

    ppt_application(const ppt_application &rhs);  // no copy constructor
    ppt_application & operator=(const ppt_application &rhs);
                                                  // and no assignment operator

    friend void delete_default_startup_slide(void);

    bool kill_all_instances_actual(BOOL save_presentations, bool report_error);
                               // reset_state(); # kill current app state
                               //
                               // for each running instance of PPT
                               //   close each presentation, either saving
                               //      or discarding changes based on boolean
                               //      param passed to this method.
                               // end
                               //
                               // Returns:  T -> no errors detected.
                               //           F -> otherwise

    bool start_instance_actual(P3ICLI_START_STATE wdwstate, bool report_error);
                               //  if (app_set)
                               //    release pptapp.
                               //  fi
                               //  call CoCreateInstance() to either create
                               //    a new instance or attach to a running
                               //    instance of PPT.
                               //  if (failure)
                               //    record error
                               //  fi
                               //
                               // Note that WRT Office 2000, PPT is not a
                               // multiple instance server, so it's not
                               // possible to use CoCreateInstance() to
                               // create multiple instances of PPT.  Got
                               // That?
                               //
                               // Returns:  T -> no errors detected.
                               //           F -> otherwise

public:
    ppt_application(CLSID ppt_clsid);
    ~ppt_application();
    _Application & app()          { return (pptapp);  }
    double pptversion()           { return (pptvrsn); }
    void delete_all_slides();     // in the active presentation...
    bool app_state_valid()        { return (app_set); }

    bool pasted_slide()           { return (pasted_slide_state); }
    void set_pasted_slide()       { pasted_slide_state = true; }

    unsigned long get_wait_at_pgm_exit()
                                  { return (wait_at_pgm_exit); }
    void          set_wait_at_pgm_exit(unsigned long wait)
                                  { wait_at_pgm_exit = wait; }

    unsigned long get_wait_after_cb_cmd()
                                  { return (wait_after_cb_cmd); }
    void          set_wait_after_cb_cmd(unsigned long wait)
                                  { wait_after_cb_cmd = wait; }

    bool          wdws_xplr_end_task()
                                  { return (_wdws_xplr_end_task); }
    void          set_wdws_xplr_end_task(bool new_state)
                                  { _wdws_xplr_end_task = new_state; }

    bool          wdws_xplr_ignore()
                                  { return (_wdws_xplr_ignore); }
    void          set_wdws_xplr_ignore(bool new_state)
                                  { _wdws_xplr_ignore = new_state; }

    bool start_instance(P3ICLI_START_STATE wdwstate = P3ICLI_START_NORMAL);
                            // invokes start_instance_actual() in a
                               // backoff retry loop...i.e., does not give
                               // give up with the first reported PPT error.
                               //
                               // Returns:  T -> no errors detected.
                               //           F -> otherwise

    void kill_all_instances(BOOL save_presentations);
                            // invokes kill_instance_actual() in a
                               // backoff retry loop...i.e., does not give
                               // give up with the first reported PPT error.

    bool must_have_app_connected(void);
                            // reports an error if an instance of PPT is
                                // not attached to p3icli.
                                //
                                // Returns:  T -> PPT attached, else
                                //           F    and err msg.
};

// simple class that records whether or not an unused (orphan) template
// slide is active in the current PPT presentation.  class is also used
// to tidy up orphan slide templates (i.e., virgin template slides that
// haven't been modified by P3I) or duplicate a template.
class tmplt_control
{
private:
    enum tmplt_state_enum { NO_TMPLT, GOT_TMPLT };

    tmplt_state_enum state;

    tmplt_control(const tmplt_control &rhs);  // no copy constructor
    tmplt_control & operator=(const tmplt_control &rhs);
                                              // and no assignment operator

public:
    tmplt_control()          { state = NO_TMPLT; }
    ~tmplt_control()         { delete_orphan_tmplt(); }

    void added_tmplt()       { state = GOT_TMPLT; }
    void delete_orphan_tmplt();
    bool duplicate_tmplt(bool go_next_slide);
    void ppt_killed()        { state = NO_TMPLT; }
    bool got_tmplt()         { return (state == GOT_TMPLT); }

    bool tmplt_active();     // same as got_tmplt(), except an _error_ is
                                // reported if !GOT_TMPLT .
};

/* --------------------------- externs ---------------------------- */

const bool                   P3ICLI_CAP_SHAPE = false;
const bool                   P3ICLI_PIC_SHAPE = true;

extern ppt_application       *ppt;    // instantiated PowerPoint Interface
extern tmplt_control         *tcontrol;

extern void                  delete_default_startup_slide(void);
extern bool                  running_under_task_scheduler(void);
extern void                  trace(const char *fn, const char *msg, bool abort);

#endif // ifndef P3ICLI_H
