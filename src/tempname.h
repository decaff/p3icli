/*
 * tempname.h -- a class to create temp file names and reap them when 
 *               an instantiate object dies.
 *
 */

#ifndef _TEMPNAME_H
#define _TEMPNAME_H

/* --------------------------- macros ----------------------------- */

/* --------------------------- types ------------------------------ */

// Create a wrapper around _tempnam() so that the client is not required
// to worry about cleaning up memory allocated by this C library fn.
//
// As a bonus, provide a temp file registration service.  A registered
// temp file is unlinked by the class's destructor.
class tempname
{
private:
    const char *registered_tempfile;
    bool       free_registered_tempfile;
    char       *tname;              // created by _tempnam()


    tempname(const tempname &rhs);  // no copy constructor
    tempname & operator=(const tempname &rhs);
                                   // and no assignment operator

public:
    tempname(const char* prefix);
    ~tempname();

    const char* fname()                    { return tname; }
    void register_tempfile(const char *fn,
                           bool       free_fn_storage);
};


#endif  // ifndef _TEMPNAME_H
