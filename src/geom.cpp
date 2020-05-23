/*
 * MODULE
 *    geom.cpp - execute semantics associated with changing the size and
 *               position of shapes, as well displaying current slide
 *               dimensions.
 */

#include "p3icli.h"
#include "err.h"
#include "semantics.h"
#include "geom.h"

const int GEOM_DIM    = (P3ICLI_MAX_PIC + 1);

const int _F_WIDTH   = 0;
const int _F_HEIGHT  = 1;
const int _F_LEFT    = 2;
const int _F_TOP     = 3;
const int _F_ARR_DIM = (_F_TOP + 1);

// Create an array of shape geometries that may be collected for
// listing purposes.  This is a 1-based array (element 0 is unused);
typedef struct shape_geom_t {
                            long width;
                            long height;
                            long left;
                            long top;
                          } shape_geom_t;



/* ---------------------- Helper Methods --------------------------- */

static bool
template_is_available(void)
{
    return (ppt->must_have_app_connected() && tcontrol->tmplt_active());
}

// Any shape with both the width and height dimension set to < 0
// marks the geometry data for the specified shape as "not present".
static void
clear_shape_geom_array(shape_geom_t *geom)
{
    for (int i = 1; i < GEOM_DIM; i++)
        geom[i].width = geom[i].height = geom[i].left = geom[i].top = -1;
}

static void
report_invalid_size_arguments(void)
{
    err->err("size dimensions must be >= 0");
}

static void
change_shape_geometry(Shape &shape, int changing_shape_size, float *dims)
{
    bool  disabled_lock_aspect_ratio = false;
    long  lock_aspect_ratio_val;

    if (changing_shape_size)
    {
        // Can't change the size of a shape when its aspect ratio is locked.

        if ((lock_aspect_ratio_val = shape.GetLockAspectRatio()) != msoFalse)
        {
            disabled_lock_aspect_ratio = true;
            shape.SetLockAspectRatio(msoFalse);
        }
    }
    shape.SetWidth(dims[_F_WIDTH]);
    shape.SetHeight(dims[_F_HEIGHT]);
    shape.SetTop(dims[_F_TOP]);
    shape.SetLeft(dims[_F_LEFT]);

    if (disabled_lock_aspect_ratio)
        shape.SetLockAspectRatio(lock_aspect_ratio_val);
}

static void
dump_shape_geom_array(const char *prefix, shape_geom_t *geom, int is_pic_shape)
{
    char buf[256];

    for (int i = 1; i < GEOM_DIM; i++)
    {
        if (geom[i].width >= 0 || geom[i].height >= 0)
        {
            _snprintf(buf,
                      sizeof(buf),
                      "%s: %s%d (%ld,%ld) @ (%ld,%ld)\n",
                      prefix,
                      (is_pic_shape) ? P3ICLI_PICREF : P3ICLI_CAPREF,
                      i,
                      geom[i].width, geom[i].height, geom[i].left, geom[i].top
                     );
            err->raw_msg(buf);
        }
    }
}

static void
record_slide_geometries(shape_geom_t *geom, int listing_pics)
{
    long i, shape_count;
    bool shape_type = (listing_pics) ? P3ICLI_PIC_SHAPE : P3ICLI_CAP_SHAPE;

    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();

    // looking for slide shapes labeled like so:
    //
    //     pic1, pic2, pic3, etc.
    // or
    //     cap1, cap2, cap3, etc.
    //
    for (i = 1; i <= shape_count; i++)
    {
        long refnum;     // 1-based
        int  unused1;
        bool unused2;

        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        CString shapetag = shape.GetAlternativeText();
        refnum = extract_shaperef_num(shapetag,
                                      false,     // unverified shape ref
                                      shape_type,
                                      &unused1,
                                      &unused2);
        if (refnum > 0 && refnum < GEOM_DIM)
        {
            geom[refnum].width  = (long) shape.GetWidth();
            geom[refnum].height = (long) shape.GetHeight();
            geom[refnum].top    = (long) shape.GetTop();
            geom[refnum].left   = (long) shape.GetLeft();
        }
    }
}

// list dimensions (width and height) of current slide
static void
list_slide_geometry(const char *prefix)
{
    char  buf[256];
    float width, height;

    _Presentation pres(ppt->app().GetActivePresentation());
    PageSetup pgSetup(pres.GetPageSetup());
    width  = pgSetup.GetSlideWidth();
    height = pgSetup.GetSlideHeight();
    _snprintf(buf,
              sizeof(buf),
              "%s: bounds (%ld,%ld)\n",
              prefix,
              (long) width,
              (long) height);
    err->raw_msg(buf);
}

// list geometry of first title found on current slide
static void
list_title_geometry(const char *prefix)
{
    long i, shape_count;

    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();

    // looking for a single slide shape labeled "title"
    for (i = 1; i <= shape_count; i++)
    {
        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        if (shapetag_looks_like_title(shape.GetAlternativeText()))
        {
            char buf[256];
            long width, height, top, left;

            width  = (long) shape.GetWidth();
            height = (long) shape.GetHeight();
            top    = (long) shape.GetTop();
            left   = (long) shape.GetLeft();
            _snprintf(buf,
                      sizeof(buf),
                      "%s: title (%ld,%ld) @ (%ld,%ld)\n",
                      prefix,
                      width,
                      height,
                      left,
                      top
                     );
            err->raw_msg(buf);
            break;
        }
    }
}

// list geometries of all pics/caps found on current slide
static void
list_cap_or_pic_geometry(const char *prefix, int listing_pics)
{
    shape_geom_t shape_geometries[GEOM_DIM];

    clear_shape_geom_array(shape_geometries);
    record_slide_geometries(shape_geometries, listing_pics);
    dump_shape_geom_array(prefix, shape_geometries, listing_pics);
}


// If the specified picnum (capnum) exists on the current slide, apply its new
// width and height (if this is a "{pic|cap}{ui} size" command.  Or apply its
// new left and top values (if this is a "{pic|cap}{ui} move" command.
//
// precondition #1:  script_shapenum is a 1-based value. So, given the command
//                   "pic3 size 550,450"  => script_shapenum will be passed to
//                   this routine as "3" .
//
// precondition #2:  parser has already rejected any shape reference < 1 and
//                   greater than its max possible value.
static void
apply_new_cap_or_pic_geometry(long script_shape_num,
                              bool shape_type,
                              int  changing_shape_size,
                              long geom1,     // either width or left
                              long geom2)     // either height or top
{
    int  match = 0;
    long i, shape_count;

    // Must have a template...which implies a current slide that can be
    // manipulated.
    if (! template_is_available())
        return;

    if (changing_shape_size && (geom1 < 0 || geom2 < 0))
    {
        // Note that negative "{pic<uint> | cap<uint>} move" args are okay,
        // since rotated shapes might exhibit, say, a negative left
        // coordinate.

        report_invalid_size_arguments();
        return;
    }

    // Find script's specified shape num on the current slide and apply its
    // new geometry values
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();

    // looking for slide shapes labeled like so:
    //     pic1, pic2, pic3, etc.
    // or:
    //
    //     cap1, cap2, cap3, etc.
    for (i = 1; i <= shape_count && !match; i++)
    {
        long shape_num;     // 1-based shape num reference
        int  unused1;
        bool unused2;

        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        CString shapetag = shape.GetAlternativeText();
        shape_num = extract_shaperef_num(shapetag,
                                         false,        // unverified shape ref
                                         shape_type,
                                         &unused1,
                                         &unused2);
        if ((shape_num) > 0 && (shape_num == script_shape_num))
        {
            float dims[_F_ARR_DIM];

            if (changing_shape_size)
            {
                dims[_F_WIDTH]  = (float) geom1;
                dims[_F_HEIGHT] = (float) geom2;
                dims[_F_LEFT]   = shape.GetLeft();
                dims[_F_TOP]    = shape.GetTop();
            }
            else
            {
                dims[_F_WIDTH]  = shape.GetWidth();
                dims[_F_HEIGHT] = shape.GetHeight();
                dims[_F_LEFT]   = (float) geom1;
                dims[_F_TOP]    = (float) geom2;
            }
            change_shape_geometry(shape, changing_shape_size, dims);
            match = 1;
        }
    }
    if (! match)
        err_no_such_shaperef(script_shape_num, shape_type);
}

// If title shape exists on the current slide, apply its new width and
// height (if this is a "title size" command).  Or apply its new left and
// top values (if this is a "title move" command).
//
static void
apply_new_title_geometry(int  changing_title_size,
                         long geom1,     // either width or left
                         long geom2)     // either height or top
{
    long i, shape_count;
    int  match;

    if (changing_title_size && (geom1 < 0 || geom2 < 0))
    {
        // Note that negative "title move" args are okay, since rotated
        // shapes might exhibit, say, a negative left coordinate.

        report_invalid_size_arguments();
        return;
    }
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());
    SlideRange range(sel.GetSlideRange());
    Shapes shapes(range.GetShapes());
    shape_count = shapes.GetCount();

    // looking for a single slide shape labeled "title"
    for (match = 0, i = 1; i <= shape_count && !match; i++)
    {
        COleVariant varindex(i);
        Shape shape(shapes.Item(varindex));
        if (shapetag_looks_like_title(shape.GetAlternativeText()))
        {
            float dims[_F_ARR_DIM];

            if (changing_title_size)
            {
                dims[_F_WIDTH]  = (float) geom1;
                dims[_F_HEIGHT] = (float) geom2;
                dims[_F_LEFT]   = shape.GetLeft();
                dims[_F_TOP]    = shape.GetTop();
            }
            else
            {
                dims[_F_WIDTH]  = shape.GetWidth();
                dims[_F_HEIGHT] = shape.GetHeight();
                dims[_F_LEFT]   = (float) geom1;
                dims[_F_TOP]    = (float) geom2;
            }
            change_shape_geometry(shape, changing_title_size, dims);
            match = 1;
        }
    }
    if (! match)
        err->err("template title shape not found");
}

static void
set_slide_aspect_ratio(long new_width, long new_height)
{
    long w, h;   // curr slide width and height

    // Is it necessary to actually change the slide's size?

    _Presentation pres(ppt->app().GetActivePresentation());
    PageSetup pgSetup(pres.GetPageSetup());
    w = (long) pgSetup.GetSlideWidth();
    h = (long) pgSetup.GetSlideHeight();
    if (! (w == new_width && h == new_height))
    {
        // Yes it is.

        pgSetup.SetSlideWidth((float) new_width);
        pgSetup.SetSlideHeight((float) new_height);
        err->debug("resized presentation");
    }
}


extern "C" {

/* ------------ Semantic Functions...Invoked by the parser ------------- */

// precondition #1:  parser has already rejected any cap reference < 1 and
// greater than P3ICLI_MAX_CP.
//
// precondition #2:  user-specified cap refs are 1-based.
int
set_cap_geometry(P3ICLI_CMD_DATA *cmd)
{
    long capnum = cmd->long_val;     // 1-based

    apply_new_cap_or_pic_geometry(capnum,
                                  P3ICLI_CAP_SHAPE,
                                  cmd->tag,
                                  cmd->nums[0],
                                  cmd->nums[1]);

    return (P3ICLI_CONTINUE);
}
// precondition #1:  parser has already rejected any pic reference < 1 and
// greater than P3ICLI_MAX_PIC.
//
// precondition #2:  user-specified pic refs are 1-based.
int
set_pic_geometry(P3ICLI_CMD_DATA *cmd)
{
    long picnum = cmd->long_val;     // 1-based

    apply_new_cap_or_pic_geometry(picnum,
                                  P3ICLI_PIC_SHAPE,
                                  cmd->tag,
                                  cmd->nums[0],
                                  cmd->nums[1]);

    return (P3ICLI_CONTINUE);
}

int
set_title_geometry(P3ICLI_CMD_DATA *cmd)
{
    // Must have a template...which implies a current slide that can be
    // manipulated.
    if (! template_is_available())
        return (P3ICLI_CONTINUE);
    apply_new_title_geometry(cmd->tag, cmd->nums[0], cmd->nums[1]);

    return (P3ICLI_CONTINUE);
}

int
list_geometries(P3ICLI_CMD_DATA *cmd)
{
    char *output_title, *prefix;
    long tmplt_slide_idx, cur_slide_idx;

    // Must have a template...which implies a current slide that can be
    // traversed.
    if (! template_is_available())
        return (P3ICLI_CONTINUE);

    output_title = cmd->u1.str_val;
    prefix       = "Tmplt Slide";

    // Move to the template slide...
    DocumentWindow wdw(ppt->app().GetActiveWindow());
    Selection sel(wdw.GetSelection());

    SlideRange range(sel.GetSlideRange());
    cur_slide_idx   = range.GetSlideIndex();
    tmplt_slide_idx = cur_slide_idx + 1;   // tmplt slide always 1 > cur slide
    View view(wdw.GetView());
    view.GotoSlide(tmplt_slide_idx);

    // And start dumping data....
    if (output_title)
    {
        // User wants to tag the output listing with a title of their choice.

        err->raw_msg(output_title);
        err->raw_msg("\n");
    }
    list_slide_geometry(prefix);
    list_title_geometry(prefix);
    list_cap_or_pic_geometry(prefix, TRUE);    // list pics
    list_cap_or_pic_geometry(prefix, FALSE);   // list caps
    err->raw_msg("\n");

    // Move back to the "current" (original) slide
    view.GotoSlide(cur_slide_idx);

    // Lather, rinse, repeat.
    if (output_title)
    {
        // User wants to tag the output listing with a title of their choice.

        err->raw_msg(output_title);
        err->raw_msg("\n");
    }
    prefix = "Curr Slide";
    list_slide_geometry(prefix);
    list_title_geometry(prefix);
    list_cap_or_pic_geometry(prefix, TRUE);    // list pics
    list_cap_or_pic_geometry(prefix, FALSE);   // list caps
    err->raw_msg("\n");

    return (P3ICLI_CONTINUE);
}

int
set_slide_size(P3ICLI_CMD_DATA *cmd)
{
    long min_dim = GEOM_MIN_X_Y_DIM;

    geom_slide->geom_slide_cust_dims_set(min_dim, min_dim); // an assumption
    if (cmd->tag == P3ICLI_SLIDE_SIZE_DFLT)
        geom_slide->geom_slide_style_set(GEOM_DFLT);
    else if (cmd->tag == P3ICLI_SLIDE_SIZE_4_3)
        geom_slide->geom_slide_style_set(GEOM_4_3);
    else if (cmd->tag == P3ICLI_SLIDE_SIZE_16_9)
        geom_slide->geom_slide_style_set(GEOM_16_9);
    else if (cmd->tag == P3ICLI_SLIDE_SIZE_A4)
        geom_slide->geom_slide_style_set(GEOM_A4);
    else
    {
        // user wants custom slide geometry (in points)

        long x = cmd->nums[0];
        long y = cmd->nums[1];
        if (x < min_dim)
            x = min_dim;
        if (y < min_dim)
            y = min_dim;
        geom_slide->geom_slide_style_set(GEOM_CUST);
        geom_slide->geom_slide_cust_dims_set(x, y);
    }
    return (P3ICLI_CONTINUE);
}

}   // end extern "C"


/* ------------------- class methods --------------------- */

void
geom::make_slide_4_3_aspect_ratio()
{
    const long pre_offc_2013_slide_width  = 720;
    const long pre_offc_2013_slide_height = 540;

    set_slide_aspect_ratio(pre_offc_2013_slide_width,
                           pre_offc_2013_slide_height);
}

void
geom::make_slide_16_9_aspect_ratio()
{
    const long offc_2013_slide_width  = 960;
    const long offc_2013_slide_height = 540;

    set_slide_aspect_ratio(offc_2013_slide_width, offc_2013_slide_height);
}

void
geom::make_slide_a4_geom()   // in landscape orientation
{
    // The dims specified next are those used by PPT to set the A4 slide
    // size.  Thee dims correspond to 10.833in x 7.5in, which is what PPT uses
    // to approximate the std A4 dims of 210mm x 297mm (8.27 x 11.69in).
    //
    // No, I don't understand the discrepancy between PPT A4 dims and the
    // international std A4 dims.
    const long a4_width  = 780;
    const long a4_height = 540;

    set_slide_aspect_ratio(a4_width, a4_height);
}


// User-defined slide geometry, in points.  72 pts/inch.
void
geom::make_slide_cust_geom()
{
    long x, y;

    geom_slide->geom_slide_cust_dims_get(x, y);    // dims are in points
    set_slide_aspect_ratio(x, y);
}
