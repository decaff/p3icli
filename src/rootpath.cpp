/*
 * rootpath.cpp -- a module and class that provides services to effect these
 *                 commands:
 *
 *                 pics root {<path> | '<'none'>'}
 *                 templates root {<path> | '<'none'>'}
 */

#include <string.h>
#include <ctype.h>

#include "cdefs.h"
#include "rootpath.h"
#include "err.h"

static const char ROOT_RESET[] = "<none>";

static const int  DBGLVL       = 2;

/* -------------------------- helpers ------------------------------ */

// First 2 tests in this function based on this link:
//
// https://docs.microsoft.com/en-us/windows/win32/fileio/naming-a-file#fully-qualified-vs-relative-paths
static bool
can_prepend_root_path(const char *fname)
{
    // Test #1  (Guaranteed fname contains at least a single (nul) char)
    if (fname[0] == '\\' || fname[0] == '/')
    {
        // Absolute path, by defn

        return (false);
    }

    // Test #2
    if (isalpha(fname[0]) && (fname[1] == ':'))
    {
        // Cannot prepend root path if fname starts with drive letter
        // notation (i.e.,   <alpha>':'   ).

        return (false);
    }

    // Finally, don't allow prepending if prefix begins with special
    // web-based naming conventions.
    return (! is_web_based_file(fname));
}

static const char *
make_full_path(size_t bufsize, char *buf, const char *proot, const char *pleaf)
{
    size_t len_root = strlen(proot);
    char   *delim   = (len_root && (proot[len_root - 1] != '\\')) ? "\\" : "";

    _snprintf(buf, bufsize, "%s%s%s", proot, delim, pleaf);
    if (err->debug_enabled() == true)
    {
        size_t msg_len = bufsize + 128;
        char   *msg    = (char *) xmalloc(msg_len);

        _snprintf(msg, msg_len, "Expanded path: %s", buf);
        err->debug(msg, DBGLVL);
        (void) free(msg);
    }
    return (buf);
}

/* ---------------------- Class root_path -------------------------- */

root_path::root_path()
{
    p_pics_root = p_tmplts_root = p_pics_scratch = p_tmplts_scratch = NULL;

    pics_scratch_size = tmplts_scratch_size = FILENAME_MAX + 256;
}

root_path::~root_path()
{
    if (p_pics_root)
    {
        (void) free((void *) p_pics_root);
        p_pics_root = NULL;
    }
    if (p_pics_scratch)
    {
        (void) free((void *) p_pics_scratch);
        p_pics_scratch = NULL;
    }
    if (p_tmplts_root)
    {
        (void) free((void *) p_tmplts_root);
        p_tmplts_root = NULL;
    }
    if (p_tmplts_scratch)
    {
        (void) free((void *) p_tmplts_scratch);
        p_tmplts_scratch = NULL;
    }
}

void
root_path::pics_root_upd(const char *path)
{
    if (p_pics_root)
    {
        (void) free((void *) p_pics_root);
        p_pics_root = NULL;
    }

    // Guaranteed no root pics path at this point

    if (_stricmp(ROOT_RESET, path) == 0)
    {
        if (err->debug_enabled() == true)
            err->debug("pics root reset", DBGLVL);

        // User wants root pics path destroyed.  Done and done.
        return;
    }

    p_pics_root = xstrdup(path);
}

void
root_path::tmplts_root_upd(const char *path)
{
    if (p_tmplts_root)
    {
        (void) free((void *) p_tmplts_root);
        p_tmplts_root = NULL;
    }

    // Guaranteed no tmplts path at this point

    if (_stricmp(ROOT_RESET, path) == 0)
    {
        if (err->debug_enabled() == true)
            err->debug("templates root reset", DBGLVL);

        // User wants root tmplts path destroyed.  Done and done.
        return;
    }

    p_tmplts_root = xstrdup(path);
}

const char *
root_path::expand_pics_path(const char *leaf)
{
    if (! p_pics_root)
    {
        // User has not specified pics root folder.

        return (leaf);
    }
    if (! can_prepend_root_path(leaf))
    {
        // Only take action if "leaf" is not absolute, not preceded by
        // <alpha>':' , and not using a web-based file notation.

        return (leaf);
    }
    if (! p_pics_scratch)
    {
        // only allocate pics scratch buffer once

        p_pics_scratch = (char *) xmalloc(pics_scratch_size);
    }
    return (make_full_path(pics_scratch_size,
                           p_pics_scratch,
                           p_pics_root,
                           leaf));
}


const char *
root_path::expand_tmplts_path(const char *leaf)
{
    if (! p_tmplts_root)
    {
        // User has not specified tmplts root folder.

        return (leaf);
    }
    if (! can_prepend_root_path(leaf))
    {
        // Only take action if "leaf" is not absolute, not preceded by
        // <alpha>':' , and not using a web-based file notation.

        return (leaf);
    }
    if (! p_tmplts_scratch)
    {
        // only allocate tmplts scratch buffer once

        p_tmplts_scratch = (char *) xmalloc(tmplts_scratch_size);
    }
    return (make_full_path(tmplts_scratch_size,
                           p_tmplts_scratch,
                           p_tmplts_root,
                           leaf));
}

// -------------------- Declare entry points for parser ------------------

extern "C" {

int
set_pics_root_path(P3ICLI_CMD_DATA *cmd)
{
    rootpath->pics_root_upd(cmd->u1.filename);
    return (P3ICLI_CONTINUE);
}

int
set_tmplts_root_path(P3ICLI_CMD_DATA *cmd)
{
    rootpath->tmplts_root_upd(cmd->u1.filename);
    return (P3ICLI_CONTINUE);
}

}   // end extern C
