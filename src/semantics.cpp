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
#include "autowrap.h"
#include "purgepics.h"
#include "rootpath.h"

const int  CAPREFLEN  = sizeof(P3ICLI_CAPREF) - 1;
const int  MSOCOMMENT = 4;              // identifies msoComment shape
const int  PICREFLEN  = sizeof(P3ICLI_PICREF) - 1;

static void       err_capref_not_text_shape(long);
static void       err_shaperef(CString &, bool);
static bool       is_modified_shaperef(const char *, bool);
static bool       is_pptx_suffix(const char* fname);
static void       kill_ppt_delete_orphan_tmplt(void);
static bool       dst_presentation_disappeared(_Presentation &, Slides &);
static bool       shapetag_looks_like_capref(CString &shapetag, bool flagjunk);
static bool       shapetag_looks_like_picref(CString &shapetag, bool flagjunk);
static void       set_text_frame_string(const char *, TextFrame &);

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
    const char *full_path = rootpath->expand_tmplts_path(cmd->u1.filename);
    (void) is_a_file(full_path, P3ICLI_IF_NOT_FILE_WARN);
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
        (void) pres.Open(full_path, true, true, true);  // LEAK

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
    const char *full_path;
    long        i, shape_count;
    bool        is_protected_picref;

    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    is_protected_picref = (strcmp(cmd->u1.filename, P3ICLI_PROTECTED) == 0);
    if (! is_protected_picref)
    {
        full_path = rootpath->expand_pics_path(cmd->u1.filename);
        (void) is_a_file(full_path, P3ICLI_IF_NOT_FILE_WARN);
    }
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
                Shape newshape(shapes.AddPicture(full_path,
                                                 FALSE,
                                                 TRUE,
                                                 left,
                                                 top,
                                                 width,
                                                 height));

                // PPT copied image into pic shape. Does user want to queue
                // image file for removal at program exit?
                if (semstate->rmv_image_files())
                    purgepics->rmv_later(full_path);

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
// insert  slide <uint>       semantics are located in insert_slide.cpp
// insert  slide <qstring>    semantics are located in insert_slide.cpp
// pics root <path>           semantics are located in rootpath.cpp
// templates root <path>      semantics are located in rootpath.cpp
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
