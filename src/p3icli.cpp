/*
 * p3icli.cpp -- implements these major P3ICLI classes:
 *
 *                        ppt_application
 *                        tmplt_control
 *
 * =======================================================================
 *   Disclaimer Disclaimer Disclaimer Disclaimer Disclaimer Disclaimer
 * =======================================================================
 * Some statements in this module leak returned PPT COM dispatch pointers.
 * Many of the leaks originated at program inception (2009). Circa late
 * 2016, the author closed _all_ of the leaks.  Sadly, as a reward for
 * that act of diligent coding, operation of p3icli under the Windows task
 * scheduler completely imploded on a Windows 10 host running PowerPoint
 * 2016.
 *
 *                       Consequently, the leaks remain.
 *
 * CAVEAT EMPTOR and all that.
 * =======================================================================
 */

#include "p3icli.h"       // this comes first or get a lot of bizarre errors

#include <ole2.h>
#include <objbase.h>
#include <string.h>
#include <io.h>

#include "cdefs.h"
#include "err.h"
#include "semantics.h"

// next two constants are extracted from the PPT 9.0 type library
const  int             PPT_NORMAL_VIEW = 9;    // 3-pane PPT "normal" view
const  int             PPT_SLIDE_VIEW  = 1;    // wdw focus is in "slide pane"

const  int             PPT_CONNECT_ATTEMPT_LIMIT = 7;  // -> 32 + 64 + 128 +
                                                       //    256 + 512 + 1024
                                                       //    2016 msec wait max
const  int             PPT_KILL_ATTEMPT_LIMIT    = 7;  // -> ditto

const  char*           CONNECT_WAIT_TAG      = "start ppt instance";
const  char*           KILL_WAIT_TAG         = "kill ppt instances";

/* -------------------------------- misc c++ --------------------------- */

void
trace(const char *fn_name, const char *msg, bool abort)
{
    char buf[512];

    _snprintf(buf, sizeof(buf), "%s: %s", fn_name, msg);
    err->info(buf);
    if (abort)
    {
        // Assume we arrived here due to an exception that can't be repaired
        // and that the caller has given up.

        throw;
    }
}

/* ------------------- class ppt_application methods  ---------------- */

void
ppt_application::reset_state(void)
{
    if (app_set)
    {
        pptapp.ReleaseDispatch();
        app_set = false;
        pptvrsn = 0.0;

        // In the case where a new PPT instance is immediately started
        // after killing/detaching the old instance, it would be prudent to
        // give PPT a chance to execute at least some of its cleanup code.
        Sleep(20);
    }
}

ppt_application::ppt_application(CLSID ppt_clsid)
{
    clsid   = ppt_clsid;
    app_set = pasted_slide_state = false;
    pptvrsn = 0.0;

    wait_at_pgm_exit  = 256;    // msec
    wait_after_cb_cmd = 80;     // msec

    _wdws_xplr_end_task = false;
    _wdws_xplr_ignore   = false;
}

ppt_application::~ppt_application()
{
    reset_state();
    pasted_slide_state = false;
}

// start_instance_actual() does all the ACTUAL work of either:
//
// a) connecting with a running instance of PPT, or
// b) starting a new instance from scratch.
//
// The parameter "report_error" specifies whether or not an error condition
// is reported or ignored.
//
// Returns:
//     T => error encountered
//     F => no error encountered
bool
ppt_application::start_instance_actual(P3ICLI_START_STATE wdwstate,
                                       bool               report_error)
{
    HRESULT       hr;
    LPDISPATCH    pdisp = NULL;
    LPUNKNOWN     punk  = NULL;

    bool err_detected = false;

    hr = CoCreateInstance(clsid,
                          NULL,
                          CLSCTX_LOCAL_SERVER,
                          IID_IUnknown,
                          (void **) &punk);
    if (FAILED(hr))
    {
        err_detected = true;
        if (report_error)
            report_win32_error(hr, "CoCreateInstance");
        return (err_detected);
    }
    hr = punk->QueryInterface(IID_IDispatch, (void **) &pdisp);
    punk->Release();
    if (FAILED(hr))
    {
        err_detected = true;
        if (report_error)
            report_win32_error(hr, "QueryInterface");
        return (err_detected);
    }

    pptapp.AttachDispatch(pdisp, TRUE);
    pptvrsn = atof((LPCTSTR) pptapp.GetVersion());
    if (! semstate->wdwstate_established())
    {
        // either NORMAL or MINIMIZED wdw desired

        pptapp.SetWindowState(wdwstate);
        pptapp.SetVisible(true);
    }
    long i;

    // Many P3ICLI commands die spectactularly if the currently
    // connected PPT instance is running a slide show.  Kill the
    // shows now.
    SlideShowWindows sshow_wdws(ppt->app().GetSlideShowWindows());
    long nSshow_wdws = sshow_wdws.GetCount();
    for (i = 1; i <= nSshow_wdws; i++)
    {
        // can't use "i" as index to Item() because each call to
        // Exit() reduces the valid index range.

        SlideShowWindow sshow_wdw(sshow_wdws.Item(1));
        SlideShowView view(sshow_wdw.GetView());
        view.Exit();
    }

    // Much of P3ICLI's semantics assumes a _single_ slide
    // selection in the SLIDE PANE.  But P3ICLI could be
    // interfacing with an existing presentation in which the pesky
    // user manually made multiple slide selections or might have
    // selected a slide in the outline pane or PPT might not be in
    // "Normal" view.  In all of those situations, lots of P3ICLI
    // commands blow sky high due to PPT slide selection errors.
    // To workaround this issue, force the desired initial state.
    Presentations allpres(ppt->app().GetPresentations());
    if (allpres.GetCount() != 0)
    {
        // at least one active presentation, now force it into
        // normal view

        DocumentWindow wdw(ppt->app().GetActiveWindow());
        wdw.SetViewType(PPT_NORMAL_VIEW);

        // make PPT's slide pane the active pane
        Panes panes(wdw.GetPanes());
        long nPanes = panes.GetCount();
        for (i = 1; i <= nPanes; i++)
        {
            Pane pane(panes.Item(i));
            if (pane.GetViewType() == PPT_SLIDE_VIEW)
            {
                pane.Activate();
                break;
            }
        }
    }
    app_set = true; // whee ... PPT instance is connected & stable!
    return (err_detected);
}

// With the advent PowerPoint 2016 and fast desktops/laptops configured
// with copious RAM, SSD storage, and 6th gen Skylake processors,
// various test cases have demonstrated that it's not possible to tear
// down one PowerPoint session and then immediately start another
// (e.g., SAVE AS command immediately followed by INSERT SLIDE).
// Reason:  the previous instance of PPT is not usable, but p3icli
// naively attempts to connect with it as it exits.  And then all sorts
// of fun errors ensue, such as:
//
//        The Server Disconnected
//        RPC Server Not Available
//        The Server Threw an Exception
//
// So, be flexible when starting a new PPT instance...don't give up
// right away.
bool
ppt_application::start_instance(P3ICLI_START_STATE wdwstate)
{
    bool          err_detected = false;
    unsigned long j, wait_interval;

    // detach current PPT instance, if any, and reset internal App state
    detach_instance();

    for (wait_interval = 32, j = 1; j <= PPT_CONNECT_ATTEMPT_LIMIT; j++)
    {
        bool ok_to_wait   = (j < PPT_CONNECT_ATTEMPT_LIMIT);
        bool report_error = (! ok_to_wait);

        try
        {
            err_detected = start_instance_actual(wdwstate, report_error);
            if (err_detected)
            {
                if (ok_to_wait)
                {
                    binary_backoff_wait(&wait_interval, CONNECT_WAIT_TAG);
                    continue;
                }
            }

            // Either max wait interval reached, or success.  In either
            // case, that's all folks.
            break;
        }
        catch (...)
        {
            if (ok_to_wait)
                binary_backoff_wait(&wait_interval, CONNECT_WAIT_TAG);
            else
                throw;
        }
    }

    return (app_set);
}

// kill_all_instances_actual() does all the ACTUAL work of killing all
// running PPT instances.  The parameter "report_error" specifies whether
// or not an error condition is reported or ignored.
//
// Returns:
//     T => error encountered
//     F => no error encountered
bool
ppt_application::kill_all_instances_actual(BOOL save_data, bool report_error)
{
    HRESULT       hr;
    LPDISPATCH    pdisp = NULL;
    LPUNKNOWN     punk  = NULL;

    bool          err_detected = false;

    // Kill all instances on the host.
    hr = CoCreateInstance(clsid,
                          NULL,
                          CLSCTX_LOCAL_SERVER,
                          IID_IUnknown,
                          (void **) &punk);
    if (FAILED(hr))
    {
        err_detected = true;
        if (report_error)
            report_win32_error(hr, "CoCreateInstance");
        return (err_detected);

    }
    hr = punk->QueryInterface(IID_IDispatch, (void **) &pdisp);
    punk->Release();
    if (FAILED(hr))
    {
        err_detected = true;
        if (report_error)
            report_win32_error(hr, "QueryInterface");
        return (err_detected);
    }

    long i, firstpres = 1, count;

    _Application app;
    app.AttachDispatch(pdisp, TRUE);
    Presentations presentations(app.GetPresentations());
    count = presentations.GetCount();
    COleVariant varindex(firstpres);

    for (i = 1; i <= count; i++)
    {
        // can't use "count" as Item() index because the count limit
        // changes as presentations are deleted!

        _Presentation a_pres(presentations.Item(varindex));
        if (! save_data)
            a_pres.Close();
        else
            a_pres.Save();
    }
    app.Quit();             // kiss this PPT instance goodbye
    return (err_detected);  // success ... no issues during kill operation
}

// See the comments above for ::start_instance().  Same idea applies:
//
// Be flexible when killing PPT...don't give up right away.
void
ppt_application::kill_all_instances(BOOL save_data)
{
    bool          err_detected = false;
    unsigned long j, wait_interval;

    // By defn, no duplicate template active in just a bit.
    tcontrol->ppt_killed();

    for (wait_interval = 32, j = 1; j <= PPT_KILL_ATTEMPT_LIMIT; j++)
    {
        bool ok_to_wait   = (j < PPT_KILL_ATTEMPT_LIMIT);
        bool report_error = (! ok_to_wait);

        try
        {
            err_detected = kill_all_instances_actual(save_data, report_error);
            if (err_detected)
            {
                if (ok_to_wait)
                {
                    binary_backoff_wait(&wait_interval, KILL_WAIT_TAG);
                    continue;
                }
            }

            // Either max wait interval reached, or success.  In either
            // case, that's all folks.
            break;
        }
        catch (...)
        {
            if (ok_to_wait)
                binary_backoff_wait(&wait_interval, KILL_WAIT_TAG);
            else
                throw;
        }
    }

    reset_state();     // record "shutdown" state
    if (! err_detected)
    {
        // on an underpowered Pentium Pro running Office 9, it's not possible
        // to run back-to-back "kill ppt discard" commands without receving
        // runtime OLE errors (e.g., "Can't create server", etc.).
        //
        // so wait a bit and let PPT cleanup

        Sleep(400);
    }
}

// Delete all slides in the Active presentation
void
ppt_application::delete_all_slides(void)
{
    long i, n, slide_idx = 1;

    _Presentation currPres(pptapp.GetActivePresentation());
    Slides currPresSlides(currPres.GetSlides());
    COleVariant var_slide_idx(slide_idx);
    n = currPresSlides.GetCount();
    for (i = 1; i <= n; i++)
    {
        _Slide junk(currPresSlides.Item(var_slide_idx));
        junk.Delete();
    }
}

bool
ppt_application::must_have_app_connected(void)
{
    if (! app_state_valid())
    {
        err->err(
   "internal state indicates no PPT automation connection, no action taken"
                );
        return (false);
    }
    else
        return (true);
}

/* ------------------- class tmplt_control methods  ---------------- */

void
tmplt_control::delete_orphan_tmplt(void)
{
    Selection      sel;
    DocumentWindow wdw;

    if (state == NO_TMPLT)
        return;

    // Whether this routine works or not, we want P3ICLI to know that
    // no template exists in the current presentation.
    state = NO_TMPLT;

    try
    {
        wdw.AttachDispatch(ppt->app().GetActiveWindow());
        sel.AttachDispatch(wdw.GetSelection());
    }
    catch (...)
    {
        // assume the pesky user has (externally) closed the current PPT
        // session.  Nothing to delete, or complain about.

        return;
    }
    SlideRange cur_range(sel.GetSlideRange());
    View tmplt_view(wdw.GetView());
    tmplt_view.GotoSlide(cur_range.GetSlideIndex() + 1);
    SlideRange tmplt_range(sel.GetSlideRange());
    tmplt_range.Delete();
}

bool
tmplt_control::tmplt_active()
{
    bool rc = true;

    if (state == NO_TMPLT)
    {
        err->err(
                "internal state indicates no existing template, no action taken"
                );
        rc = false;
    }
    return (rc);
}

bool
tmplt_control::duplicate_tmplt(bool go_next_slide)
{
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange cur_range;
    try
    {
        cur_range = sel.GetSlideRange();
    }
    catch (...)
    {
        // If a script error has managed to create a completely empty
        // presentation (this occurs with one of the slide_oor scripts),
        // there is no SlideRange() object and the code in the try block
        // raises an exception.  Before rethrowing the exception, make sure
        // P3ICLI knows that no template exists.

        state = NO_TMPLT;
        throw;
    }
    if (go_next_slide)
    {
        // unmodified template is next slide...

        long slide_idx = cur_range.GetSlideIndex();
        View view(wdw.GetView());
        view.GotoSlide(slide_idx + 1);
        SlideRange new_range(sel.GetSlideRange());
        (void) new_range.Duplicate();  // LEAK -- see disclaimer
    }
    else
    {
        (void) cur_range.Duplicate();  // LEAK -- see disclaimer
    }
    return (true);
}

