/*
 * insert_slide.cpp -- Implements these commands:
 *
 *                     insert slide <uint> from template <filename>
 *                     insert slide <qstring> from template <filename>
 *
 * The code in this module formerly lived in semantics.cpp, but it grew, and
 * grew, and grew.  Time for its own home.
 */

#include "p3icli.h"
#include "err.h"
#include "semantics.h"
#include "tempname.h"
#include "geom.h"
#include "rootpath.h"

const int MAX_PASTE_LIMIT = 4;

static bool insert_named_tmplt_slide(
                                  P3ICLI_CMD_DATA *,
                                  const char *src_tmplt_path,
                                  Presentations &
                                    );
static bool insert_numeric_tmplt_slide_cpy_src_fmt(
                                                long slide_idx,
                                                const char *src_tmplt_path,
                                                _Presentation &dstpres,
                                                Slides &dstslides
                                                  );
static bool insert_numeric_tmplt_slide_via_copy_paste(
                                                long slide_idx,
                                                const char *src_tmplt_path,
                                                _Presentation &dstpres,
                                                Slides &dstslides
                                                     );
static void pause_for_failed_slide_paste(void);

// ------------------------- helper functions ---------------------------

// Given a string, find same in a comment object in the currently active
// slide.  If found, delete the comment.
//
// Preconditions:  comment_string argument has been trimmed.
//
static void
strip_slide_comment(CString &comment_string)
{
    long i;

    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Comments cmts(range.GetComments());
    long cmt_count = cmts.GetCount();
    for (i = 1; i <= cmt_count; i++)
    {
        Comment cmt(cmts.Item(i));
        CString txtcmt = cmt.GetText();
        txtcmt.TrimLeft();
        txtcmt.TrimRight();
        if (txtcmt.CompareNoCase(comment_string) == 0)
        {
            cmt.Delete();
            break;
        }
    }
}

// Assume "copy src fmt on" and that the user connected to a running
// instance of PPT that is comprised solely of a single default slide.
// Call this the "destination" presentation.  Now assume the user's script
// begins with an "insert slide N from template" command. In this scenario,
// open()ing the copy source template file will _not_ create a new "source"
// presentation.  Instead, PPT will helpfully delete the original
// destination presentation and simply work from a _single_ "merged"
// presentation (which is both source and destination).  Ughmo.
//
// This merger causes all kinds of problems when trying to copy a slide
// from a source template to the current destination presentation.  The
// workaround below is based on observed PPT behavior, as follows:
//
//    When PPT notices that any "edit" has been made to the default
//    presentation, it no longer considers said presentation eligible
//    for deletion.
//
// Deleting all presentation slides constitutes a major edit :-) .
static bool
dst_presentation_disappeared(_Presentation &dst_pres, Slides &dst_slides)
{
    bool disappeared = false;

    try
    {
        // this will fail if the destination presentation has been
        // effectively nuked during a dst/src "merger".

        Slides s(dst_pres.GetSlides());
        long n = s.GetCount();
    }
    catch(...)
    {
        err->debug("lost destination presentation...recovering");
        ppt->delete_all_slides();

        // If all slides in a presentation are deleted, PPT won't merge the
        // dst presentation with a new one when the Open(filename) method
        // is invoked.  Reload affected object variables.

        dst_pres   = ppt->app().GetActivePresentation();
        dst_slides = dst_pres.GetSlides();
        err->debug("destination presentation reset");
        disappeared = true;
    }
    return (disappeared);
}

static bool
insert_slide_idx_oor(long slide_idx, Slides &slides)
{
    char msg[256];
    bool rc = false;

    long slidecnt = slides.GetCount();
    if (slide_idx == 0 || slide_idx > slidecnt)
    {
        // naughty naughty

        if (slidecnt == 0)
        {
            _snprintf(msg,
                      sizeof(msg),
                      "template has 0 slides, nothing to insert");
        }
        else
        {
            _snprintf(msg,
                      sizeof(msg),
                      "slide %ld out-of-range, valid range is 1 to %ld",
                      slide_idx,
                      slidecnt);
        }
        err->err(msg);
        rc = true;
    }
    return (rc);
}

// During major stress tests, it has been observed that PPT will,
// on very infrequent[*] occasions, throw an exception while pasting
// slides that retain source formatting.
//
// There appear to be two sources of instability:
//
// 1) PPT encounters non-slide data on the clipboard.  Often, no error is
//    is reported by PPT (empty err msg).
//
// 2) Windows File Explorer is running at the same time as P3ICLI.  This
//    issue can be avoided via the -Ex command line switch.
//
// In either case, don't give up so easily.
//
// [*] Sadly, if PPT (usually 2013, 2016, or 2019) crashes and pops up a
// "we're sorry we've become unstable" message box when stress-tested, no
// forward progress occurs until the message box is dismissed.
static void
copy_src_fmt_copy_paste_retries(_Slide &srcslide)
{
    int max_tries = MAX_PASTE_LIMIT;
    for (int i = 0; i <= max_tries; i++)
    {
        bool abort_on_failure = (i >= max_tries);
        try
        {
            srcslide.Copy();
        }
        catch (...)
        {
            trace("insert_numeric_tmplt_slide_cpy_src_fmt",
                  "srcslide.Copy()",
                  abort_on_failure);
            pause_for_failed_slide_paste();
            continue;
        }
        _CommandBars cb;
        try
        {
            cb = ppt->app().GetCommandBars();
        }
        catch (...)
        {
            trace("insert_numeric_tmplt_slide_cpy_src_fmt",
                  "ppt->app().GetCommandBars()",
                  abort_on_failure);
            pause_for_failed_slide_paste();
            continue;
        }
        try
        {
            cb.ExecuteMso("PasteSourceFormatting");
            ppt->set_pasted_slide();
        }
        catch (...)
        {
            trace("insert_numeric_tmplt_slide_cpy_src_fmt",
                  "cb.ExecuteMso(PasteSourceFormatting)",
                  abort_on_failure);
            pause_for_failed_slide_paste();
            continue;
        }

        // ----- Slide is pasted w/ src formatting...Whee ------

        // Based on behavior observed on a very fast PC (SSD
        // storage, quad core Skylake processor, lots of RAM) with
        // PPT 2016 installed, it appears that ExecuteMso() is not
        // synchronous.  I.E., after a PasteSourceFormatting
        // command is issued and a new COM command immediately
        // follows, there's a narrow window wherein PPT exhibits
        // unstable behavior, including (but not limited to):
        //
        // - popping up a "we're sorry we're unstable" msg box
        //   (i.e., PPT crashes)
        //
        // - returning any of these errors:
        //         RPC server not available
        //         Server reported an exception
        //         Caller rejected the callee
        //
        // If the assumption that ExecuteMso() is async is true,
        // then p3icli must wait "awhile".  The wait interval is
        // user-settable.

        Sleep((DWORD) ppt->get_wait_after_cb_cmd());
        try
        {
            cb.ReleaseFocus();
        }
        catch (...)
        {
            // Sigh...trace this hiccup and carry on. This is not
            // going to end well.

            trace("insert_numeric_tmplt_slide_cpy_src_fmt",
                  "cb.ReleaseFocus()",
                  false);
        }
        break;   // paste and cleanup are complete
    }
}

// Thru much trial and error during the release testing of P3ICLI's ill-fated
// v2.7 (which was eventually scrapped), it was finally determined that
// if two presentations are running under task scheduler, it's NOT possible
// to switch focus between the two of them using the Activate() method.
// Nothing happens when Activate() is applied to the non-active
// presentation.  So, the only way to change "focus" is to close one of the
// presentations.
//
// Q: What does this mean in the grand scheme of things?
//
// A: In the task scheduler environment, P3ICLI only makes one attempt to
//    paste a slide with source formatting.  If that paste fails because some
//    other app slipped non-slide data on the clipboard, no retry is
//    attempted.  A retry loop could be attempted in which a failed paste
//    is followed by re-opening the source presentation and trying again,
//    but that's a lot of work just to support the task scheduler feature.
//    If failed pastes become a task scheduler issue, the retry might be
//    necessary.
static void
paste_with_src_fmt_under_task_scheduler(_Presentation &srcpres,
                                        _Slide        &srcslide,
                                        _Presentation &dstpres)
{
    srcslide.Copy();
    srcpres.Close();
    _Application runningApp(dstpres.GetApplication());
    runningApp.Activate();

    // dst presentation is now the active presentation
    // make sure that ppt is focused on last slide in this presentation
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Slides dstslides(dstpres.GetSlides());
    long nSlides = dstslides.GetCount();
    if (nSlides > 0)
    {
        View view(wdw.GetView());
        view.GotoSlide(nSlides);
    }

    // whee... paste slide with source formatting!!!!
    _CommandBars cb(ppt->app().GetCommandBars());
    try
    {
        cb.ExecuteMso("PasteSourceFormatting");
        ppt->set_pasted_slide();

        // See remarks in insert_numeric_tmplt_slide_cpy_src_fmt() for an
        // explanation of the following statement.
        Sleep((DWORD) ppt->get_wait_after_cb_cmd());
    }
    catch (...)
    {
        trace("paste_with_src_fmt_under_task_scheduler",
              "cb.ExecuteMso(PasteSourceFormatting)",
              true);
    }
    try
    {
        cb.ReleaseFocus();
    }
    catch (...)
    {
        // Sigh...trace this hiccup and carry on. This is not
        // going to end well.

        trace("paste_with_src_fmt_under_task_scheduler",
              "cb.ReleaseFocus()",
              false);
    }
}

// Paste a single source slide into a destination presentation while
// ensuring that the paste is not prematurely aborted due to some
// other app sliding foreign data onto the clipboard.
//
// Returns: dispatch pointer to a SlideRange representing the pasted slide.
//
static LPDISPATCH
paste_src_slide(_Slide &srcslide, Slides &dstslides)
{
    LPDISPATCH lpd  = NULL;
    long nDstSlides = dstslides.GetCount();
    int max_tries   = MAX_PASTE_LIMIT;
    for (int i = 0; i <= max_tries; i++)
    {
        bool abort_on_failure = (i >= max_tries);
        try
        {
            srcslide.Copy();
        }
        catch (...)
        {
            trace("paste_src_slide", "srcslide.Copy()", abort_on_failure);
            pause_for_failed_slide_paste();
            continue;
        }
        try
        {
            lpd = dstslides.Paste(nDstSlides + 1);
            ppt->set_pasted_slide();
            break;    // success;
        }
        catch (...)
        {
            trace("paste_src_slide",
                  "dstSlides.Paste(nDstDlides + 1)",
                  abort_on_failure);
            pause_for_failed_slide_paste();
        }
    }
    return (lpd);
}

// Does pause_for_failed_slide_paste() actually help?  I have no idea.
// PPT 2016 is certainly not very stable when non-slide data is slipped on
// the clipboard by some other process during a copy/paste sequence.
//
// Of all of the versions of PowerPoint I've had the pleasure (?) of using,
// PowerPoint 2016 has been, hands down, the biggest MS Office PITA I've
// yet encountered.  But at least PPT 2016 definitively demonstrated that the
// Command Bar COM interface is almost certainly async. If not async, then
// it's just tragic.
//
// Can't wait for PPT 2019.  Not.
static void
pause_for_failed_slide_paste(void)
{
    Sleep(max((DWORD) ppt->get_wait_after_cb_cmd(), 500));
}

// ---------------- various flavors of "insert slide" -------------------

// Returns true if desired slide inserted...otherwise:
//
// a) InsertFromFile() throws an exception, or
// a) Some other PPT method (e.g., GotoSlide()) throws an exception, or
// c) insert_slide_idx_oor() returns an error up the call chain and this
//    function returns false.
//
static bool
insert_numeric_tmplt_slide(long slide_idx, const char *tmplt_path)
{
    _Presentation pres(ppt->app().GetActivePresentation());
    Slides slides(pres.GetSlides());
    if (semstate->cpy_src_fmt())
    {
        // user wants src slide contents & background copied to destination.

        if (! insert_numeric_tmplt_slide_cpy_src_fmt(slide_idx,
                                                     tmplt_path,
                                                     pres,
                                                     slides))
        {
            return (false);
        }
    }
    else
    {
        // No source formatting required.

        if (! semstate->third_party_fix())
        {
            // Let PPT do all the work

            long after_idx = slides.GetCount();
            slides.InsertFromFile(tmplt_path,
                                  after_idx,
                                  slide_idx,
                                  slide_idx);
        }
        else
        {
            // A notorious 3rd party security product won't tolerate
            // directly copying a slide from one presentation to another.
            // So workaround the problem using copy and paste.

            if (! insert_numeric_tmplt_slide_via_copy_paste(slide_idx,
                                                            tmplt_path,
                                                            pres,
                                                            slides))
            {
                return (false);
            }
        }
    }

    // Now, adjust active slide...
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    View view(wdw.GetView());

    // very subtle issue here:  the last slide in the currrent presentation
    // may not be (after_idx + 1) .  PowerPoint is free to renumber slides
    // (and this has actually been observed with PPT 2003).  So goto the
    // last slide in the collection via a refreshed count.
    //
    // Note that it has been observed (at least with PPT 2013) that during
    // stress testing (lots of banging on the clipboard while P3ICLI is
    // running), the previously created "slides" obj may no longer be
    // associated with the active presentation.  So reload it.
    pres   = ppt->app().GetActivePresentation();
    slides = pres.GetSlides();
    long nSlides = slides.GetCount();
    if (nSlides > 0)
    {
        view.GotoSlide(nSlides);
    }
    return (true);
}

// returns true if found desired slide
static bool
insert_named_tmplt_slide(P3ICLI_CMD_DATA *cmd,
                         const char      *tmplt_path,
                         Presentations   &allpres)
{
    char buf[528];
    long i, j, slide_count, cmt_count;

    _Presentation pres(allpres.Open(tmplt_path, true, true, false));
    CString target_name(cmd->u2.slidename);
    target_name.TrimLeft();
    target_name.TrimRight();
    Slides slides(pres.GetSlides());
    slide_count = slides.GetCount();
    for (i = 1; i <= slide_count; i++)
    {
        COleVariant slide_varindex(i);

        _Slide slide(slides.Item(slide_varindex));
        Comments cmts(slide.GetComments());
        cmt_count = cmts.GetCount();
        for (j = 1; j <= cmt_count; j++)
        {
            Comment cmt(cmts.Item(j));
            CString txtcmt = cmt.GetText();
            txtcmt.TrimLeft();
            txtcmt.TrimRight();
            if (txtcmt.CompareNoCase(target_name) == 0)
            {
                cmd->long_val = i; // index of slide with matching
                                   // comment string
                pres.Close();
                (void) insert_numeric_tmplt_slide(cmd->long_val, tmplt_path);
                strip_slide_comment(target_name);
                return (true);
            }
        }
    }

    // we get to here if the user-specifed, named slide was not found
    pres.Close();
    _snprintf(buf,
              sizeof(buf),
              "Named slide \"%s\" not found in \"%s\"",
              cmd->u2.slidename,
              tmplt_path);
    err->err(buf, IS_PGM, 0);
    return (false);
}

// insert slide w/o copying source formatting, but resort to use of the
// clipboard to effect the presentation update (slower and much more
// complex).
//
// Returns:   false => slide oor
//            true  => success
//
// Note that this routine could also throw an exception, which will be
// caught and handled with an appropriate error.
static bool
insert_numeric_tmplt_slide_via_copy_paste(long            slide_idx,
                                          const char      *src_tmplt,
                                          _Presentation   &dstpres,
                                          Slides          &dstslides)
{
    // open (src) presentation containing src slide and paste it
    // into the currently active (dst) presentation.
    Presentations allpres(ppt->app().GetPresentations());
    _Presentation srcpres(allpres.Open(src_tmplt, TRUE, FALSE, FALSE));
    if (dst_presentation_disappeared(dstpres, dstslides))
    {
        // Due to an interesting PPT "optimization", it was necessary to
        // effectively "reset" the destination presentation and reload the
        // dstpres and dstslides object variables.  Commentary included
        // with dst_presentation_disappeared() gives more details.
        //
        // So, once more, open the src presentation.  This time, we should
        // be operating with distinct source and destination presentations.

        srcpres = allpres.Open(src_tmplt, TRUE, FALSE, FALSE);
    }
    Slides srcslides(srcpres.GetSlides());

    if (insert_slide_idx_oor(slide_idx, srcslides))
    {
        // User specified an invalid slide number, which must be trapped
        // so that an exception doesn't cause P3ICLI to "leak" a newly
        // opened presentation.

        srcpres.Close();
        return (false);
    }

    COleVariant var_slide_idx(slide_idx);
    _Slide srcslide(srcslides.Item(var_slide_idx));

    // It's possible for some other app to place non-slide data on the
    // clipboard during a copy/paste operation.  Don't give up easily.
    (void) paste_src_slide(srcslide, dstslides); // LEAK, see disclaimer
    srcpres.Close();
    return (true);
}

// same effect as insert_numeric_tmplt_slide(), plus the source slide's
// background formatting is copied as well.  Note that in older PPT
// versions, no Automation support is provided for copying the background
// formatting, which makes the equivalent implementation NONTRIVIAL.
//
// Returns:
//       true  -- all is well
//       false -- slide oor
//
// Note that any PPT issues will throw an exception.
//
static bool
insert_numeric_tmplt_slide_cpy_src_fmt(
                            long slide_idx,
                            const char *src_tmplt_path,
                            _Presentation & dstpres,  // dst presentation
                            Slides & dstslides        // dst slides collctn
                                      )
{
    char msg[256];

    // Part 1 : open (src) presentation containing src slide and paste it
    //          into the currently active (dst) presentation.
    Presentations allpres(ppt->app().GetPresentations());
    _Presentation srcpres(allpres.Open(src_tmplt_path, TRUE, FALSE, FALSE));
    if (dst_presentation_disappeared(dstpres, dstslides))
    {
        // Due to an interesting PPT "optimization", it was necessary to
        // effectively "reset" the destination presentation and reload the
        // dstpres and dstslides object variables.  Commentary included
        // with dst_presentation_disappeared() gives more details.
        //
        // So, once more, open the src presentation.  This time, we should
        // be operating with distinct source and destination presentations.

        srcpres = allpres.Open(src_tmplt_path, TRUE, FALSE, FALSE);
    }
    Slides srcslides(srcpres.GetSlides());

    if (insert_slide_idx_oor(slide_idx, srcslides))
    {
        // User specified an invalid slide number, which must be trapped
        // so that an exception doesn't cause P3ICLI to "leak" a newly
        // opened presentation.

        srcpres.Close();
        return (false);
    }

    bool rc = true;

    COleVariant var_slide_idx(slide_idx);
    _Slide srcslide(srcslides.Item(var_slide_idx));

    // ---------------- Office 2010 and later functionality --------------
    // -------------------------------------------------------------------
    // As it turns out, Office 2010 FINALLY exposes a way to automate
    // pasting a slide and retaining its source formatting....  Yeah!
    if (ppt->pptversion() > 12.99)
    {
        if (running_under_task_scheduler())
        {
            paste_with_src_fmt_under_task_scheduler(srcpres, srcslide, dstpres);
            return (rc);
        }

        // Right now, the Source Presentation is the active presentation.
        // Before we paste, need to switch "focus" to the Destination
        // presentation.  Not so easy to do.  This code seems to work, even
        // when the Destination presentation has no slides.  Yowsa'.
        DocumentWindows dstWdws(dstpres.GetWindows());
        DocumentWindow dstWdw(dstWdws.Item(1));
        dstWdw.Activate();

        Slides dstslides(dstpres.GetSlides());
        long nSlides = dstslides.GetCount();
        if (nSlides > 0)
        {
            View view(dstWdw.GetView());
            view.GotoSlide(nSlides);
        }
        copy_src_fmt_copy_paste_retries(srcslide);
        srcpres.Close();
        return (rc);
    }
    // ------------- end Office 2010 and later functionality --------------

    // Else begin a long, hard slog.............

    SlideRange dstrng(paste_src_slide(srcslide, dstslides));

    // Part 2 : copy as much src slide formatting as possible to
    //          the dst slide (too bad Powerpoint doesn't expose this
    //          feature via Automation).
    dstrng.SetFollowMasterBackground(FALSE);

    dstrng.SetDesign(srcslide.GetDesign());
    dstrng.SetColorScheme(srcslide.GetColorScheme());
    ShapeRange dstbkgnd(dstrng.GetBackground());
    FillFormat dstfill(dstbkgnd.GetFill());
    ShapeRange srcbkgnd(srcslide.GetBackground());
    FillFormat srcfill(srcbkgnd.GetFill());
    ColorFormat srcForeColor(srcfill.GetForeColor());
    ColorFormat srcBackColor(srcfill.GetBackColor());
    MsoFillType filltype = static_cast<MsoFillType>(srcfill.GetType());

    if (ppt->pptversion() >= 12.0)
    {
        // ---------- code specific to office 2007 (and later)

        long dstbkgnd_style = dstrng.GetBackgroundStyle();
        long srcbkgnd_style = srcslide.GetBackgroundStyle();
        if (srcbkgnd_style != dstbkgnd_style)
        {
            // a crucial formatting detail in the Office 2007 env

            dstrng.SetBackgroundStyle(srcbkgnd_style);
        }

        // in an Office 2007 env, there's nothing more to do, actually...

        srcpres.Close();  // dst presentation is now the active presentation
        return (rc);

        // ---------- end code specific to office 2007 (and later)
    }

    if (filltype == msoFillGradient)
    {
        MsoGradientColorType colortype;
        MsoGradientStyle     gradstyle;

        colortype = static_cast<MsoGradientColorType>(srcfill.GetGradientColorType());
        gradstyle = static_cast<MsoGradientStyle>(srcfill.GetGradientStyle());
        long gradvariant = srcfill.GetGradientVariant();
        if (colortype == msoGradientOneColor)
        {
            float graddegree = srcfill.GetGradientDegree();
            dstfill.SetForeColor(srcForeColor);
            dstfill.OneColorGradient(gradstyle, gradvariant, graddegree);
        }
        else if (colortype == msoGradientTwoColors)
        {
            if (ppt->pptversion() < 12.0)
            {
                // easy to understand why this code exists...

                dstfill.SetForeColor(srcForeColor);
                dstfill.SetBackColor(srcBackColor);
                dstfill.TwoColorGradient(gradstyle, gradvariant);
            }
            else
            {
#if 0
                // --------------------------------------------------------
                // I think the use of BackgroundStyle above makes this
                // block of code moot...but let's keep this around for
                // awhile just in case another aberrant test case pops up.
                // --------------------------------------------------------

                // office 2007 glitch workaround

                if (srcForeColor.GetRgb()!= srcBackColor.GetRgb())
                {
                    // if rendering a slide created with an earlier vrsn
                    // of PPT, sometimes the gradient is not set up
                    // correctly.  Office 2007 bug.

                    dstfill.SetForeColor(srcForeColor);
                    dstfill.SetBackColor(srcBackColor);
                    dstfill.TwoColorGradient(gradstyle, gradvariant);
                }
                // else...bkgnd fill should be set correctly
#endif
            }
        }
        else if (colortype == msoGradientPresetColors)
        {
            MsoPresetGradientType presetgrad;
            presetgrad = static_cast<MsoPresetGradientType>(srcfill.GetPresetGradientType());
            dstfill.PresetGradient(gradstyle, gradvariant, presetgrad);
        }
        else
        {
            // unsupported gradient type -- What to do depends on what
            // version of PPT is in use.
            //
            // If this is a version of PPT before office 2007, we don't
            // know what to do here, so bark.

            if (ppt->pptversion() < 12.0)
            {
                _snprintf(msg,
                          sizeof(msg),
"Background Fill Gradient Color type %d unsupported, source slide fill attributes not copied",
                          colortype);
                err->warn(msg, 0);
            }
            else
            {
                // ??
            }
        }
    }
    else if (filltype == msoFillSolid)
    {
        dstfill.Solid();
        dstfill.SetBackColor(srcBackColor);
        dstfill.SetForeColor(srcForeColor);
    }
    else if (filltype == msoFillPatterned)
    {
        dstfill.SetForeColor(srcForeColor);
        dstfill.SetBackColor(srcBackColor);
        MsoPatternType pattype;
        pattype = static_cast<MsoPatternType>(srcfill.GetPattern());
        if (pattype != msoPatternMixed)
        {
            // Powerpoint dies when fed a Mixed Pattern type

            dstfill.Patterned(srcfill.GetPattern());
        }
    }
    else if (filltype == msoFillTextured)
    {
        MsoTextureType textype;

        textype = static_cast<MsoTextureType>(srcfill.GetTextureType());
        if (textype == msoTextureUserDefined)
        {
            // Good old Powerpoint provides _no_ automation support for
            // extracting a user-defined texture into a file that can
            // then be jammed back into the destination slide.  User loses.

            err->warn(
"No PPT Automation support for user-defined textures, source slide fill attributes not copied",
                      0);
        }
        else if (textype == msoTexturePreset)
        {
            dstfill.PresetTextured(srcfill.GetPresetTexture());
        }
        else
        {
            // unsupported texture type -- What to do depends on what
            // version of PPT is in use.
            //
            // If this is a version of PPT before office 2007, we don't
            // know what to do here, so bark.

            if (ppt->pptversion() < 12.0)
            {
                _snprintf(msg,
                          sizeof(msg),
"Background Fill Texture type %d unsupported, source slide fill attributes not copied",
                          textype);
                err->warn(msg, 0);
            }
            // else in an office 2007 (or later) env, this block is unreachable.
        }
    }
    else if (filltype == msoFillPicture)
    {
        // ppt doesn't provide an automation interface for snagging a
        // picture.  use brute force.

        char  *path = (char *) xmalloc(FILENAME_MAX + 1);

        tempname picfile(progname);
        _snprintf(path, FILENAME_MAX + 1, "%s.jpg", picfile.fname());
        picfile.register_tempfile(path, true);
        srcslide.Export(path, "JPG", 0, 0);
        dstfill.UserPicture(path);
    }
    else
    {
        // unsupported fill type -- emit warning in log message

        _snprintf(msg,
                  sizeof(msg),
"Background Fill type %d unsupported, source slide fill attributes not copied",
                  filltype);
        err->warn(msg, 0);
    }

    // don't use out-of-range transparency values....
    float src_transparency = srcfill.GetTransparency();
    if (src_transparency >= 0.00 && src_transparency <= 100.00)
        dstfill.SetTransparency(src_transparency);

    srcpres.Close();  // dst presentation is now the active presentation
    return (rc);
}

// -------------------- Declare entry point for parser ------------------

extern "C" {

int
insert_tmplt_slide(P3ICLI_CMD_DATA *cmd)
{
    const char *full_path;
    bool        slide_inserted = false;

    // kill unmodified copy of existing template, if any
    tcontrol->delete_orphan_tmplt();

    full_path = rootpath->expand_tmplts_path(cmd->u1.filename);
    (void) is_a_file(full_path, P3ICLI_IF_NOT_FILE_WARN);
    if (ppt->start_instance())    // attach to or start PPT
    {
        Presentations allpres(ppt->app().GetPresentations());
        if (allpres.GetCount() == 0)
        {
            // no active presentation, add an empty one.  Next statement
            // LEAKs a dispatch pointer, see Disclaimer.

            (void) allpres.Add(-1 /* WithWindow => msotrue */);
            if (ppt->pptversion() >= 12.99)
            {
                // Must deal with brain damage first seen in Office 2010
                // (aka PPT 14).  When a new presentation is created using
                // the Add method, a faux slide is created with a button
                // that states, "Click to add slide" (or something like
                // that).  But this is not really a slide and its display
                // properties cause insert_numeric_tmplt_slide_cpy_src_fmt()
                // to crap out.  Sigh.  Geez, M$, stop messing around with
                // your COM interfaces!!!

                _Presentation newPres(ppt->app().GetActivePresentation());
                Slides newPresSlides(newPres.GetSlides());

                // Assume that PPT is displaying its faux "click me" slide.
                // Force PPT to add a slide.
                long slide_idx = 1;
                COleVariant var_slide_idx(slide_idx);
                long blank_slide_style = 1;    // Blank slide style??
                COleVariant var_blank_slide_style(blank_slide_style);
                _Master mstr(newPres.GetSlideMaster());
                CustomLayouts layout(mstr.GetCustomLayouts());

                // next statement LEAKs a dispatch pointer, see Disclaimer.
                (void) newPresSlides.AddSlide(
                                       slide_idx,
                                       layout.Item(var_blank_slide_style)
                                             );
                // Okay...the faux click me slide is gone, but in its
                // place we've just added a garbage slide that will
                // show up in the user's final presentation.  Kill it
                // and any other slide artifact that might show up in
                // future versions of Office.  A completely empty
                // presentation is required by insert_numeric_tmplt_slide()
                // and insert_named_tmplt_slide().
                ppt->delete_all_slides();
            }
        }

        Slide_Geom geom_choice = geom_slide->geom_slide_style();
        if (geom_choice != GEOM_DFLT)
        {
            if (geom_choice == GEOM_4_3)
                geom_slide->make_slide_4_3_aspect_ratio();
            else if(geom_choice == GEOM_16_9)
                geom_slide->make_slide_16_9_aspect_ratio();
            else if(geom_choice == GEOM_A4)
                geom_slide->make_slide_a4_geom();
            else    // custom geometry (i.e., user-specified dims)
                geom_slide->make_slide_cust_geom();
        }

        long slide_idx = cmd->long_val;
        if (cmd->tag == P3ICLI_NUMERIC_SLIDE)
            slide_inserted = insert_numeric_tmplt_slide(slide_idx, full_path);
        else
            slide_inserted = insert_named_tmplt_slide(cmd, full_path, allpres);
    }
    if (slide_inserted)
    {
        // logic behind next two lines of code is described in the
        // function open_tmplt(), in file semantics.cpp .

        tcontrol->added_tmplt();
        (void) tcontrol->duplicate_tmplt(false);
    }
    return (P3ICLI_CONTINUE);
}

}   // end extern C
