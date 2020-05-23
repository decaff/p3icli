/*
 * MODULE
 *    semantics.cpp - execute most semantics of p3icli's grammar .
 *                    Additional semantics are located in geom.cpp,
 *                    semantics_misc.cpp, custom_properties.cpp, and
 *                    purgepics.cpp .
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

#include <ctype.h>
#include <limits.h>
#include <errno.h>

#include "cdefs.h"
#include "p3icli.h"
#include "err.h"
#include "semantics.h"
#include "tempname.h"
#include "autowrap.h"
#include "geom.h"
#include "purgepics.h"

const int  CAPREFLEN  = sizeof(P3ICLI_CAPREF) - 1;
const int  MSOCOMMENT = 4;              // identifies msoComment shape
const int  PICREFLEN  = sizeof(P3ICLI_PICREF) - 1;

const int  MAX_PASTE_LIMIT = 4;

static void       err_capref_not_text_shape(long);
static void       err_shaperef(CString &, bool);
static bool       is_modified_shaperef(const char *, bool);
static bool       is_pptx_suffix(const char* fname);
static void       insert_numeric_tmplt_slide_cpy_src_fmt(
                                                P3ICLI_CMD_DATA *,
                                                _Presentation &,
                                                Slides &
                                                        );

static void       insert_numeric_tmplt_slide_via_copy_paste(
                                                P3ICLI_CMD_DATA *,
                                                _Presentation &,
                                                Slides &
                                                           );
static bool       insert_slide_idx_oor(long, Slides &);
static void       kill_ppt_delete_orphan_tmplt(void);
static bool       dst_presentation_disappeared(_Presentation &, Slides &);
static bool       shapetag_looks_like_capref(CString &shapetag, bool flagjunk);
static bool       shapetag_looks_like_picref(CString &shapetag, bool flagjunk);
static void       paste_with_src_fmt_under_task_scheduler(
                                                _Presentation &srcpres,
                                                _Slide        &srcslide,
                                                _Presentation &dstpres
                                                         );
static void       set_text_frame_string(const char *, TextFrame &);
static LPDISPATCH paste_src_slide(_Slide &srcslide, Slides &dstslides);
static void       pause_for_failed_slide_paste(void);

extern "C" {

/* --------------------------------------------------------------------- */

// Failed Automation calls generate exceptions--catch or croak
int
exec_semantics(P3ICLI_CMD_DATA *cmd)
{
    char buf[256];
    int  rc;

    try
    {
        rc = cmd->fn(cmd);
    }
    catch (COleDispatchException *de)
    {
        rc = P3ICLI_CONTINUE;        // never give up, never surrender :-)
        de->GetErrorMessage(buf, sizeof(buf));
        err->err(buf, IS_PPT, 0);
    }
    catch (COleException *e)
    {
        rc = P3ICLI_CONTINUE;
        e->GetErrorMessage(buf, sizeof(buf));
        err->err(buf, IS_PPT, 0);
    }
    catch (...)
    {
        rc = P3ICLI_CONTINUE;
        err->err("unhandled Automation exception");
    }
    return (rc);
}

// Starts an instance of PowerPoint, if not already running.
//
// Note that it appears that the PowerPoint included in Office 2000 is
// installed as a single instance server, so Automation can't be used to
// create a new instance of PPT if one is already running.
int
start_ppt(P3ICLI_CMD_DATA *cmd)
{
    (void) ppt->start_instance((P3ICLI_START_STATE) cmd->long_val);
    semstate->wdwstate_set(true);
    return (P3ICLI_CONTINUE);
}

// Kills all running instances of PowerPoint, saving or discarding
// presentation changes based on user desires.
int
kill_ppt(P3ICLI_CMD_DATA *cmd)
{
    kill_ppt_delete_orphan_tmplt();
    ppt->kill_all_instances(cmd->long_val);
    semstate->wdwstate_set(false);
    return (P3ICLI_CONTINUE);
}

// see also insert_tmplt_slide() for similar functionality
int
open_tmplt(P3ICLI_CMD_DATA *cmd)
{
    (void) is_a_file(cmd->u1.filename, P3ICLI_IF_NOT_FILE_WARN);
    if (ppt->start_instance())    // attach to or start PPT
    {
        /*
         * Assume the following PPT presentation state:
         *
         * Current PPT Presentation
         *   [ Current, possibly   ]   <----- selected slide
         *   [ modified slide.     ]
         *   [                     ]
         *   [ call this slide A   ]
         *
         *   [ Unmodified template ]
         *   [ slide generated by  ]
         *   [ previous open/insert]
         *   [ cmd (orphan tmplt). ]
         *   [                     ]
         *   [ call this slide B   ]
         *
         * Algorithm:
         *
         *   delete slide B (it's an orphan)
         *   open specified template as a NEW presentation
         *   dup template like so:
         *
         * Old PPT Presentation
         *   [ Current, possibly   ]
         *   [ modified slide.     ]
         *   [                     ]
         *   [ call this slide A   ]
         *
         *
         * New PPT Presentation
         *   [ Unmodified template ]  <------- newly selected slide
         *   [ slide generated by  ]
         *   [ current insert cmd. ]
         *   [                     ]
         *   [ call this slide C   ]
         *
         *   [ Duplicated template ]
         *   [ slide generated by  ]
         *   [ current insert cmd  ]
         *   [ (orphan tmplt).     ]
         *   [                     ]
         *   [ call this slide D   ]
         *
         */

        tcontrol->delete_orphan_tmplt();

        Presentations pres(ppt->app().GetPresentations());
        (void) pres.Open(cmd->u1.filename, true, true, true);  // LEAK

        tcontrol->added_tmplt();
        (void) tcontrol->duplicate_tmplt(false);
    }
    return (P3ICLI_CONTINUE);
}

int
duplicate_tmplt(P3ICLI_CMD_DATA *cmd)
{
    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);

    (void) tcontrol->duplicate_tmplt(true);
    return (P3ICLI_CONTINUE);
}

int
set_title(P3ICLI_CMD_DATA *cmd)
{
    long i, shape_count;

    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();
    for (i = 1; i <= shape_count; i++)
    {
        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        if (shapetag_looks_like_title(shape.GetAlternativeText()))
        {
            if (! shape.GetHasTextFrame())
            {
                err->err(
                       "template title shape has no text frame, cannot change"
                        );
                return (P3ICLI_CONTINUE);
            }
            else
            {
                TextFrame txtframe(shape.GetTextFrame());
                set_text_frame_string(cmd->u1.title, txtframe);
                shape.SetAlternativeText(P3ICLI_TITLE_MODIFIED);
                break;
            }
        }
    }
    if (i > shape_count)
        err->err("template title shape not found, title not added");
    return (P3ICLI_CONTINUE);
}

int
set_caption(P3ICLI_CMD_DATA *cmd)
{
    long         i, shape_count;
    bool         is_protected_capref;

    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    is_protected_capref = (strcmp(cmd->u1.caption, P3ICLI_PROTECTED) == 0);
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();

    // looking for template shapes labeled like so:  cap1, cap2, cap3, etc.
    for (i = 1; i <= shape_count; i++)
    {
        bool modified_cap;
        long capnum;
        int  pure_num;

        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        CString shapetag = shape.GetAlternativeText();
        if (! shapetag_looks_like_capref(shapetag, true))
            continue;
        capnum = extract_shaperef_num(shapetag,
                                      true,
                                      P3ICLI_CAP_SHAPE,
                                      &pure_num,
                                      &modified_cap);
        if (capnum > 0 && (capnum == cmd->long_val))
        {
            char new_tag_txt[64];

            // create an alternative text "tag" that indicates that
            // this shape has been "modified"
            _snprintf(new_tag_txt,
                      sizeof(new_tag_txt),
                      "%s%ld%s",
                      P3ICLI_CAPREF,
                      capnum,
                      P3ICLI_CAP_MODSTR);
            if (! is_protected_capref)
            {
                // matched template capref with script cmd.  Not
                // quite done yet.  This shape better have a text
                // frame.  If it doesn't, that's an error.

                if (! shape.GetHasTextFrame())
                    err_capref_not_text_shape(cmd->long_val);
                else
                {
                    TextFrame txtframe(shape.GetTextFrame());
                    set_text_frame_string(cmd->u1.caption, txtframe);
                    shape.SetAlternativeText(new_tag_txt);
                }
            }
            else
            {
                // user doesn't want to set caption value, but does
                // want to mark this capref as "modified" so that
                // it's not zapped by the clean command.

                shape.SetAlternativeText(new_tag_txt);
            }
            break;  // found shape user specified
        }
        else if (!
                  ((capnum > 0 && capnum <= P3ICLI_MAX_CAP)
                                    &&
                  (pure_num || modified_cap))
                )
        {
            // cap<digit><something> label is bogus -- tell user

            err_shaperef(shapetag, P3ICLI_CAP_SHAPE);
        }
        // else, keep looking
    }
    if (i > shape_count)
        err_no_such_shaperef(cmd->long_val, P3ICLI_CAP_SHAPE);
    return (P3ICLI_CONTINUE);
}

int
insert_pic(P3ICLI_CMD_DATA *cmd)
{
    long i, shape_count;
    bool is_protected_picref;

    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    is_protected_picref = (strcmp(cmd->u1.filename, P3ICLI_PROTECTED) == 0);
    if (! is_protected_picref)
        (void) is_a_file(cmd->u1.filename, P3ICLI_IF_NOT_FILE_WARN);
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();

    // looking for template shapes labeled like so:  pic1, pic2, pic3, etc.
    for (i = 1; i <= shape_count; i++)
    {
        bool modified_pic;
        long picnum;
        int  pure_num;

        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        CString shapetag = shape.GetAlternativeText();
        if (! shapetag_looks_like_picref(shapetag, true))
            continue;
        picnum = extract_shaperef_num(shapetag,
                                      true,
                                      P3ICLI_PIC_SHAPE,
                                      &pure_num,
                                      &modified_pic);
        if (picnum > 0 && (picnum == cmd->long_val))
        {
            char new_tag_txt[64];

            // create an alternative text "tag" that indicates that
            // this shape has been "modified"
            _snprintf(new_tag_txt,
                      sizeof(new_tag_txt),
                      "%s%ld%s",
                      P3ICLI_PICREF,
                      picnum,
                      P3ICLI_PIC_MODSTR);
            if (! is_protected_picref)
            {
                // matched template picref with script cmd, save away
                // this shape's dimensions and rotation.

                float width, height, top, left, rotation;

                height = shape.GetHeight();
                left   = shape.GetLeft();
                top    = shape.GetTop();
                width  = shape.GetWidth();

                if (ppt->pptversion() >= 10.0)
                    rotation = shape.GetRotation();
                else
                    rotation = 0.0;
                shape.Delete();  // bye bye
                Shape newshape(shapes.AddPicture(cmd->u1.filename,
                                                 FALSE,
                                                 TRUE,
                                                 left,
                                                 top,
                                                 width,
                                                 height));

                // PPT copied image into pic shape. Does user want to queue
                // image file for removal at program exit?
                if (semstate->rmv_image_files())
                    purgepics->rmv_later(cmd->u1.filename);

                if (rotation != 0.0 && ppt->pptversion() >= 10.0)
                {
                    // Feature requested by Georgia Morgan:
                    //
                    //   Remember templates shape's rotation and
                    //   apply it to the newly inserted picture.
                    //
                    // PPT 9.0 (aka Office 2000) does not support
                    // picture rotation and will throw an exception.

                    newshape.SetRotation(rotation);
                }

                // mark new shape as "modified" just in case user's
                // script refers to the same object multiple times
                // before moving on to the next slide.
                newshape.SetAlternativeText(new_tag_txt);
            }
            else
            {
                // user doesn't want to load a picture/graphic into
                // this shape's slide location, but does want to
                // mark this picref as "modified" so that it's not
                // zapped by the clean command.

                shape.SetAlternativeText(new_tag_txt);
            }
            break;  // found shape user specified
        }
        else if (!
                  ((picnum > 0 && picnum <= P3ICLI_MAX_PIC)
                                    &&
                  (pure_num || modified_pic))
                )
        {
            // pic<digit><something> tag (in shape's alternative text) is bogus
            //
            // As a courtesy to the user, bark.

            err_shaperef(shapetag, P3ICLI_PIC_SHAPE);
        }
        // else, keep looking
    }
    if (i > shape_count)
        err_no_such_shaperef(cmd->long_val, P3ICLI_PIC_SHAPE);
    return (P3ICLI_CONTINUE);
}

// remove unused title, pic, and/or cap(tion) shapes from current slide
// If user chooses to "clean slide", then it's implied that all unused
// shapes known to p3icli should be nuked.
int
tidy_tmplt(P3ICLI_CMD_DATA *cmd)
{
    int  deleted_shape;
    long i, clean_slide, delete_title, clean_caps, clean_pics, shape_count;

    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    delete_title = clean_slide = (cmd->long_val == P3ICLI_CLEAN_SLIDE);
    if (! clean_slide)
    {
        clean_pics = (cmd->long_val == P3ICLI_CLEAN_PICS);
        clean_caps = (cmd->long_val == P3ICLI_CLEAN_CAPS);
    }
    else
    {
        clean_pics = clean_caps = clean_slide;
    }
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());

    // looking for unmodified pic<digit>, cap<digit> and/or title shapes.
    do
    {
        shape_count   = shapes.GetCount();
        deleted_shape = FALSE;
        for (i = 1; i <= shape_count; i++)
        {
            COleVariant varindex(i);
            Shape shape(shapes.Item(varindex));
            CString str = shape.GetAlternativeText();
            if (delete_title && str == P3ICLI_TITLE)
            {
                shape.Delete();
                deleted_shape = TRUE;

                // can't continue loop because Shapes() collection
                // has changed (e.g., shape_count now invalid).
                break;
            }
            else if (str.GetLength() > 3)
            {
                if (clean_pics && str.Left(3) == P3ICLI_PICREF)
                {
                    if (isdigit(str[3]))
                    {
                        unsigned long picnum;
                        int           valid;

                        picnum = atoul((LPCTSTR) str.Mid(3), 10, &valid);
                        if (valid && picnum <= P3ICLI_MAX_PIC)
                        {
                            shape.Delete();
                            deleted_shape = TRUE;
                            break;
                        }
                    }
                }
                else if (clean_caps && str.Left(3) == P3ICLI_CAPREF)
                {
                    if (isdigit(str[3]))
                    {
                        unsigned long capnum;
                        int           valid;

                        capnum = atoul((LPCTSTR) str.Mid(3), 10, &valid);
                        if (valid && capnum <= P3ICLI_MAX_CAP)
                        {
                            shape.Delete();
                            deleted_shape = TRUE;
                            break;
                        }
                    }
                }
            }
        }
    }
    while (deleted_shape);

    return (P3ICLI_CONTINUE);
}

// 1) removes unmodified copy of current template,
// 2) saves active presentation in specified format
// 3) closes active window
int
save_as(P3ICLI_CMD_DATA *cmd)
{
    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);

    tcontrol->delete_orphan_tmplt();
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    _Presentation pres(wdw.GetPresentation());

    if (cmd->long_val == P3ICLI_PRESENTATION)
    {
        // Allow user to specify .pptx format if suffix dictates.

        if (is_pptx_suffix(cmd->u1.filename))
            cmd->long_val = P3ICLI_PPTX_PRES;
    }

    pres.SaveAs(cmd->u1.filename, cmd->long_val, FALSE);
    wdw.Close();
    return (P3ICLI_CONTINUE);
}

// returns true if desired slide inserted...otherwise, GotoSlide()
// throws exception.
static bool
insert_numeric_tmplt_slide(P3ICLI_CMD_DATA *cmd)
{
    _Presentation pres(ppt->app().GetActivePresentation());
    Slides slides(pres.GetSlides());
    if (semstate->cpy_src_fmt())
    {
        // user wants src slide contents & background copied to destination.

        insert_numeric_tmplt_slide_cpy_src_fmt(cmd, pres, slides);
    }
    else
    {
        // No source formatting required.

        if (! semstate->third_party_fix())
        {
            // Let PPT do all the work

            long after_idx = slides.GetCount();
            long slide_idx = cmd->long_val;
            slides.InsertFromFile(cmd->u1.filename,
                                  after_idx,
                                  slide_idx,
                                  slide_idx);
        }
        else
        {
            // A notorious 3rd party security product won't tolerate
            // directly copying a slide from one presentation to another.
            // So workaround the problem using copy and paste.

            insert_numeric_tmplt_slide_via_copy_paste(cmd, pres, slides);
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

// returns true if found desired slide
static bool
insert_named_tmplt_slide(P3ICLI_CMD_DATA *cmd, Presentations &allpres)
{
    char buf[528];
    long i, j, slide_count, cmt_count;

    _Presentation pres(allpres.Open(cmd->u1.filename, true, true, false));
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
                (void) insert_numeric_tmplt_slide(cmd);
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
              cmd->u1.filename);
    err->err(buf, IS_PGM, 0);
    return (false);
}

int
insert_tmplt_slide(P3ICLI_CMD_DATA *cmd)
{
    bool slide_inserted = false;

    // kill unmodified copy of existing template, if any
    tcontrol->delete_orphan_tmplt();

    (void) is_a_file(cmd->u1.filename, P3ICLI_IF_NOT_FILE_WARN);
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

        if (cmd->tag == P3ICLI_NUMERIC_SLIDE)
            slide_inserted = insert_numeric_tmplt_slide(cmd);
        else
            slide_inserted = insert_named_tmplt_slide(cmd, allpres);
    }
    if (slide_inserted)
    {
        // logic behind next two lines of code is described in the
        // function open_tmplt() above.

        tcontrol->added_tmplt();
        (void) tcontrol->duplicate_tmplt(false);
    }
    return (P3ICLI_CONTINUE);
}

// Remove all comments from current slide
//
// Use a coding technique that works across all supported versions of Office.
// Not as simple as it sounds (Office 2010 is the limiting case,
// i.e., has the most brain damage).
int
remove_comments(P3ICLI_CMD_DATA *cmd /* unused */)
{
    long i;

    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Comments cmts(range.GetComments());
    for (i = cmts.GetCount(); i >= 1; i--)
    {
        Comment cmt(cmts.Item(i));
        cmt.Delete();
    }
    return (P3ICLI_CONTINUE);
}

// cap{ui} {size|move}        semantics are located in the source file geom.cpp
// pic{ui} {size|move}        semantics are located in geom.cpp
// title   {size|move}        semantics are located in geom.cpp
// list    geometries         semantics are located in geom.cpp
// slide   size               semantics are located in geom.cpp
// custom  property           semantics are located in custom_properties.cpp
// ignore  <filename>         semantics are located in purgepics.cpp
// delete  image files        semantics are located in purgepics.cpp
//
// additional misc semantics are located in semantics_misc.cpp

}   // end extern "C"

/* --------------------------------------------------------------------- */

static void
err_shaperef(CString &str, bool ispic)
{
    char buf[256];

    _snprintf(buf,
             sizeof(buf),
             "template %s ref \"%s\" is invalid, ignoring",
             (ispic) ? P3ICLI_PICREF : P3ICLI_CAPREF,
             (LPCTSTR) str);
    err->err(buf);
}

void
err_no_such_shaperef(long refnum, bool ispic)
{
    char buf[128];

    _snprintf(buf,
              sizeof(buf),
              "%s%ld not found in template shapes collection",
              (ispic) ? P3ICLI_PICREF : P3ICLI_CAPREF,
              refnum);
    err->err(buf);
}

static bool
is_modified_shaperef(const char *ref, bool ispic)
{
    // *ref points at first digit of a shape's picref/capref label

    while (isdigit(*ref))
        ref++;
    return (strcmp(ref, (ispic) ? P3ICLI_PIC_MODSTR : P3ICLI_CAP_MODSTR) == 0);
}

static bool
shapetag_looks_like_capref(CString &shapetag, bool flag_bogus_caprefs)
{
    bool rc = false;

    if ((shapetag.GetLength() > CAPREFLEN) &&
                                (shapetag.Left(CAPREFLEN) == P3ICLI_CAPREF))
    {
        if (isdigit(shapetag[CAPREFLEN]))
        {
            rc = true;
        }
        else if (flag_bogus_caprefs)
        {
            // cap<something_bogus>  -- warn user that shape tag is invalid

            err_shaperef(shapetag, P3ICLI_CAP_SHAPE);
        }
    }
    return (rc);
}

static bool
shapetag_looks_like_picref(CString &shapetag, bool flag_bogus_picrefs)
{
    bool rc = false;

    if ((shapetag.GetLength() > PICREFLEN) &&
                                (shapetag.Left(PICREFLEN) == P3ICLI_PICREF))
    {
        if (isdigit(shapetag[PICREFLEN]))
        {
            rc = true;
        }
        else if (flag_bogus_picrefs)
        {
            // pic<something_bogus>  -- warn user that shape tag is invalid

            err_shaperef(shapetag, P3ICLI_PIC_SHAPE);
        }
    }
    return (rc);
}

bool
shapetag_looks_like_title(CString &shapetag)
{
    return (shapetag == P3ICLI_TITLE || shapetag == P3ICLI_TITLE_MODIFIED);
}

// returns (by value):
//        -1 => shape is not a valid pic/cap reference, else
//
//        1-based ref number associated with the specified shape.
//
// returns (by reference):
//        a boolean indicating whether or not the number in the pic/cap
//            reference was clean (no other trailing text, other than ws)
//
//        a boolean indicating whether the shape's tag indicates that it has
//            had the word "modified" appended (indicating that a graphic
//            (or text string) was added to the shape or that the shape was
//            <cleaned> by a script).
//
long
extract_shaperef_num(CString &shapetag,
                     bool    shapetag_verified_to_be_validref,
                     bool    is_picshape,
                     int     *pure_num,
                     bool    *modified_shape)
{
    long          shapenum     = -1;
    int           shaperef_len = (is_picshape) ? PICREFLEN : CAPREFLEN;
    unsigned long test_num;

    *modified_shape = false;
    *pure_num       = FALSE;
    if (! shapetag_verified_to_be_validref)
    {
        if (is_picshape)
        {
            if (! shapetag_looks_like_picref(shapetag, false))
                return (shapenum);
        }
        else
        {
            if (! shapetag_looks_like_capref(shapetag, false))
                return (shapenum);
        }
    }

    // Soooo, we know the shapetag looks like either:
    //        "pic<digit>"
    // or
    //        "cap<digit>"
    // ... proceed
    test_num = atoul((LPCTSTR) shapetag.Mid(shaperef_len), 10, pure_num);
    if (! *pure_num)
    {
        *modified_shape = is_modified_shaperef(
                                (LPCTSTR) shapetag.Mid(shaperef_len),
                                is_picshape
                                              );
    }
    if ((*pure_num || *modified_shape) &&
                        (test_num > 0 && test_num <= P3ICLI_MAX_PIC))
    {
        shapenum = test_num;
    }
    return (shapenum);
}

static void
err_capref_not_text_shape(long refnum)
{
    char buf[256];

    _snprintf(buf,
              sizeof(buf),
          "%s%ld shape does not include a text frame, caption cannot be set",
              P3ICLI_CAPREF,
              refnum);
    err->err(buf);
}

// same effect as insert_numeric_tmplt_slide(), plus the source slide's
// background formatting is copied as well.  Note that in older PPT
// versions, no Automation support is provided for copying the background
// formatting, which makes the equivalent implementation NONTRIVIAL.
//
// Any PPT issues will throw an exception.
static void
insert_numeric_tmplt_slide_cpy_src_fmt(
                            P3ICLI_CMD_DATA *cmd,
                            _Presentation & dstpres,  // dst presentation
                            Slides & dstslides        // dst slides collctn
                                      )
{
    char        msg[256];
    long        slide_idx = cmd->long_val;
    const char* filename  = cmd->u1.filename;

    // Part 1 : open (src) presentation containing src slide and paste it
    //          into the currently active (dst) presentation.
    Presentations allpres(ppt->app().GetPresentations());
    _Presentation srcpres(allpres.Open(filename, TRUE, FALSE, FALSE));
    if (dst_presentation_disappeared(dstpres, dstslides))
    {
        // Due to an interesting PPT "optimization", it was necessary to
        // effectively "reset" the destination presentation and reload the
        // dstpres and dstslides object variables.  Commentary included
        // with dst_presentation_disappeared() gives more details.
        //
        // So, once more, open the src presentation.  This time, we should
        // be operating with distinct source and destination presentations.

        srcpres = allpres.Open(filename, TRUE, FALSE, FALSE);
    }
    Slides srcslides(srcpres.GetSlides());

    if (insert_slide_idx_oor(slide_idx, srcslides))
    {
        // User specified an invalid slide number, which must be trapped
        // so that an exception doesn't cause P3ICLI to "leak" a newly
        // opened presentation.

        srcpres.Close();
        return;
    }

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
            return;
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

        // During major stress tests, it has been observed that PPT will,
        // on very infrequent[*] occasions, throw an exception while pasting
        // slides that retain source formatting.  It appears to be a case
        // of PPT encountering non-slide data on the clipboard.  Often, no
        // error is reported by PPT (empty err msg).  Don't give up easily.
        //
        // [*] Sadly, if PPT (usually 2013 or 2016) crashes and pops up a
        // "we're sorry we've become unstable" message box when
        // stress-tested, no forward progress occurs until the message box
        // is dismissed.

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
        srcpres.Close();
        return;
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
        return;

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
}

// insert slide w/o copying source formatting, but resort to use of the
// clipboard to effect the presentation update (slower and much more
// complex).
static void
insert_numeric_tmplt_slide_via_copy_paste(P3ICLI_CMD_DATA *cmd,
                                          _Presentation   &dstpres,
                                          Slides          &dstslides)
{
    long        slide_idx = cmd->long_val;
    const char* filename  = cmd->u1.filename;

    // open (src) presentation containing src slide and paste it
    // into the currently active (dst) presentation.
    Presentations allpres(ppt->app().GetPresentations());
    _Presentation srcpres(allpres.Open(filename, TRUE, FALSE, FALSE));
    if (dst_presentation_disappeared(dstpres, dstslides))
    {
        // Due to an interesting PPT "optimization", it was necessary to
        // effectively "reset" the destination presentation and reload the
        // dstpres and dstslides object variables.  Commentary included
        // with dst_presentation_disappeared() gives more details.
        //
        // So, once more, open the src presentation.  This time, we should
        // be operating with distinct source and destination presentations.

        srcpres = allpres.Open(filename, TRUE, FALSE, FALSE);
    }
    Slides srcslides(srcpres.GetSlides());

    if (insert_slide_idx_oor(slide_idx, srcslides))
    {
        // User specified an invalid slide number, which must be trapped
        // so that an exception doesn't cause P3ICLI to "leak" a newly
        // opened presentation.

        srcpres.Close();
        return;
    }

    COleVariant var_slide_idx(slide_idx);
    _Slide srcslide(srcslides.Item(var_slide_idx));

    // It's possible for some other app to place non-slide data on the
    // clipboard during a copy/paste operation.  Don't give up easily.
    (void) paste_src_slide(srcslide, dstslides); // LEAK, see disclaimer
    srcpres.Close();
}

// This wrapper keeps the compiler from complaining about the use of
// "throw" in extern C code.
static void
kill_ppt_delete_orphan_tmplt(void)
{
    try
    {
        tcontrol->delete_orphan_tmplt();
    }
    catch (COleDispatchException *de)
    {
        char buf[256];

        // Determine if the pesky user manually selected the last slide of
        // the presentation.
        de->GetErrorMessage(buf, sizeof(buf));
        if (StrStrI(buf, "GotoSlide : Integer out of range") == NULL)
        {
            // some other error...that's all folks.  Re-throw the exception.

            throw;
        }
        // yep... user selected the last slide before issuing kill ppt
        // command.  This is easy to do if running p3icli interactively.
        // In the case of a "kill ppt discard" command, this scenario
        // doesn't matter (the entire presentation is going to be dumped).
        // In the case of "kill ppt save", the user will wind up with an
        // undeleted template slide in the presentation.  Too bad, so sad.
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

static bool
is_pptx_suffix(const char* fname)
{
#define PPTX_SUFFIX     (".pptx")
#define PPTX_SUFFIX_LEN (sizeof(PPTX_SUFFIX) - 1)

    size_t fname_len = strlen(fname);
    bool   rc = false;

    if (fname_len > PPTX_SUFFIX_LEN)
    {
        char fsuffix[PPTX_SUFFIX_LEN + 1];
        strncpy(fsuffix, &fname[fname_len - PPTX_SUFFIX_LEN], PPTX_SUFFIX_LEN);
        fsuffix[PPTX_SUFFIX_LEN] = '\0';
        (void) mklower(fsuffix);
        rc = (strcmp(fsuffix, PPTX_SUFFIX) == 0);
    }
    return (rc);

#undef PPTX_SUFFIX_LEN
#undef PPTX_SUFFIX
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

// It should be noted that P3ICLI has been coded from the ground up as an
// application based on the assumption that ANSI character strings are good
// enough for most users.  But when it comes to caption and title strings,
// ANSI is a very tiny palette compared to UTF-8.  So, it's desirable to
// allow users to specify UTF-8 strings in that context.  However, the
// naive approach of enabling the UNICODE character set in Visual Studio
// and then releasing a new version of P3ICLI is pretty risky (there are a
// lot of compiler errors to fix and who knows how existing P3ICLI scripts
// will fare with UNICODE enabled?).
//
// A safer approach is to continue using ANSI by default (throughout the
// program), but allow users (via an option) to specify UTF-8 caption and
// title strings.
//
// As it turns out, if you don't enable UNICODE in the Visual Studio build
// options, the canonical, C++ PPT COM interface will unhelpfully convert
// UTF-8 strings into ANSI strings (i.e., exotic UTF-8 chars are munged into
// garbage).  Workaround this problem by invoking raw COM.
static void
set_text_frame_string(const char *str, TextFrame &txtframe)
{
    if ((! semstate->utf8()) || strlen(str) == 0)
    {
        // Fancy footwork not required for an ANSI or empty caption/title
        // string.

        TextRange txtrng(txtframe.GetTextRange());
        txtrng.SetText(str);
        return;
    }

    // Else a bit more work.

    // First convert char * memory to UTF-8 encoding.
    int requiredSize = MultiByteToWideChar(CP_UTF8, 0, str, -1, 0, 0);
    wchar_t *wcbuf = (wchar_t *) xmalloc(sizeof(wchar_t) * requiredSize);
    MultiByteToWideChar(CP_UTF8, 0, str, -1, wcbuf, requiredSize);

    // Next, use direct COM calls to set text within a PPT shape.
    IDispatch *pProps = txtframe.GetTextRange();
    VARIANT parm1;
    parm1.vt = VT_BSTR;
    parm1.bstrVal = SysAllocString(wcbuf);
    (void) AutoWrap(DISPATCH_PROPERTYPUT, NULL, pProps, L"Text", 1, parm1);
    (void) free(wcbuf);
    ::SysFreeString(parm1.bstrVal);
    pProps->Release();
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
