/*
 * tempname.cpp -- a class to create temp file names and reap them when 
 *                 an instantiate object dies.
 *
 */

#include <stdio.h>
#include <io.h>
#include <stddef.h>
#include <stdlib.h>

#include "err.h"
#include "tempname.h"

/* ----------------------------------------------------------------- */

tempname::tempname(const char* prefix)
{
    registered_tempfile = NULL;
    tname               = _tempnam("c:\\temp", prefix);   // this may fail...
    if (! tname)
    {
        err->err("heap exhausted in tempname::tempname()...giving up",
                 IS_PGM,
                 errno);
        exit(err->num_errors());
    }
}

tempname::~tempname()
{
    if (registered_tempfile)
    {
        (void) _unlink(registered_tempfile);
        if (free_registered_tempfile)
            (void) free((void *) registered_tempfile);
        registered_tempfile = NULL;
    }
    (void) free(tname);   // free storage allocated by _tempnam()
}

void
tempname::register_tempfile(const char *fn,
                            bool  free_fn_storage)
{ 
    registered_tempfile      = fn; 
    free_registered_tempfile = free_fn_storage;
}
