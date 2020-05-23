/*
 * MODULE
 *    semantics_misc.cpp - execute misc p3icli grammar semantics.  In this
 *                         context, "misc" is loosely defined to be those
 *                         semantics not associated with core slide
 *                         operations.
 *
 */

#include <ctype.h>

#include "cdefs.h"
#include "p3icli.h"
#include "semantics.h"
#include "winutils.h"
#include "purgepics.h"

/* ---------------------------------------------------------------------- */

extern "C" {

int
script_pause(P3ICLI_CMD_DATA *cmd)
{
    Sleep(cmd->long_val);
    return (P3ICLI_CONTINUE);
}

// set global value that determines whether or not source formatting
// is copied from an inserted slide
int
copy_src_fmt(P3ICLI_CMD_DATA *cmd)
{
    bool old_state = semstate->cpy_src_fmt();
    semstate->cpy_src_fmt_set(cmd->long_val == TRUE);
    bool new_state = semstate->cpy_src_fmt();
    if (new_state && (new_state != old_state))
    {
        // if "copy src fmt" is now "on" and it wasn't already on, then

        worry_about_wdws_xplr();
    }
    return (P3ICLI_CONTINUE);
}

// set global value that determines whether or not kludge(s) are added
// to workaround meddlesome 3rd party products that monitor and abuse PPT.
int
third_party_fix(P3ICLI_CMD_DATA *cmd)
{
    semstate->third_party_fix_set(cmd->long_val == TRUE);
    return (P3ICLI_CONTINUE);
}

// set global value that determines whether or not caption and title
// strings contain UTF-8 characters.
int
encoding(P3ICLI_CMD_DATA *cmd)
{
    semstate->utf8_set(cmd->long_val == P3ICLI_UTF8_ARG);
    return (P3ICLI_CONTINUE);
}

}   // end extern "C"
