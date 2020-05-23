/*
 * semantics.h -- the parser's back end context.
 *
 */

#ifndef SEMANTICS_H
#define SEMANTICS_H

/* --------------------------- macros ----------------------------- */

/* --------------------------- types ------------------------------ */

class semantics_state
{
private:
    bool cpy_src_fmt_state;  // T -> P3ICLI copies as much background
                               // formatting as possible from an inserted
                               // inserted template slide (not all bkgnd
                               // formatting can be copied).  Default is
                               // not to copy.
    bool ppt_wdwstate_set;   // T -> PPT window state (normal, minimized, etc.)
                               // explicitly set via a scripting command.
                               // Once set, implicit instance creation
                               // commands (e.g., "open" & "insert") don't
                               // mess with PPT's window state.
    bool rmv_image_files_state;
                             // T -> P3ICLI "remembers" all image files
                               // specified via pic<ui> commands and deletes
                               // them at program exit.  Default is not to
                               // "remember" (or delete).
    bool third_party_fix_state;
                             // T -> P3ICLI makes adjustments to work w/o
                               // interference from 3rd party security
                               // applications.  Default is not to adjust.
    bool utf8_state;         // T -> P3ICLI ensures that UTF-8 chars are
                               // correctly displayed in PPT caption and
                               // title shapes.  Default is F (i.e., don't
                               // worry about UTF-8...assume ANSI chars).

    semantics_state (const semantics_state  &rhs);  // no copy constructor
    semantics_state  & operator=(const semantics_state  &rhs);
                                                  // and no assignment operator

public:
    semantics_state()                  {
                                         ppt_wdwstate_set      = false;
                                         cpy_src_fmt_state     = false;
                                         rmv_image_files_state = false;
                                         third_party_fix_state = false;
                                         utf8_state            = false;
                                       }
    ~semantics_state()                 {
                                         ppt_wdwstate_set      = false;
                                         cpy_src_fmt_state     = false;
                                         rmv_image_files_state = false;
                                         third_party_fix_state = false;
                                         utf8_state            = false;
                                       }

    void wdwstate_set(bool new_state)  { ppt_wdwstate_set = new_state; }
    bool wdwstate_established()        { return (ppt_wdwstate_set); }
    bool cpy_src_fmt()                 { return (cpy_src_fmt_state); }
    void cpy_src_fmt_set(bool val)     { cpy_src_fmt_state = val; }
    bool third_party_fix()             { return (third_party_fix_state); }
    void third_party_fix_set(bool val) { third_party_fix_state = val; }
    bool utf8()                        { return (utf8_state); }
    void utf8_set(bool val)            { utf8_state = val; }
    bool rmv_image_files()             { return (rmv_image_files_state); }
    void rmv_image_files_set(bool val) { rmv_image_files_state = val; }
};

/* --------------------------- externs ---------------------------- */

extern semantics_state *semstate;

extern void                  err_no_such_shaperef(long refnum, bool ispic);

extern long                  extract_shaperef_num(
                                    CString &shapetag,
                                    bool    shaperef_verified_to_be_picref,
                                    bool    is_picshape,
                                    int     *pure_num,
                                    bool    *modified_pic
                                                 );
extern bool                  shapetag_looks_like_title(CString &shapetag);

#endif
