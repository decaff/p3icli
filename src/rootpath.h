/*
 * rootpath.h -- declarations for rootpath.cpp
 */

#ifndef _ROOTPATH_H
#define _ROOTPATH_H

// Provide storage and concatenation service for the "pics root" and
// "templates root" folders.
class root_path
{
private:
    const char *p_pics_root;        // pics root folder, NULL if none
    const char *p_tmplts_root;      // templates root folter, NULL if none

    char *p_pics_scratch;           // scratch buffer that stores pics full path
    char *p_tmplts_scratch;         // ditto for tmplts full path

    size_t pics_scratch_size;       // scratch buffer size
    size_t tmplts_scratch_size;     // ditto

    root_path(const root_path &rhs);// no copy constructor
    root_path & operator=(const root_path &rhs);
                                    // and no assignment operator
public:
    root_path();
    ~root_path();

    void pics_root_upd(const char *path);
                                    // update ==> set or change
    void tmplts_root_upd(const char *path);
                                    // update ==> set or change

    const char* expand_pics_path(const char *leaf);
                                    // Append leaf to p_pics_root, if and
                                       // only if leaf is a relative path.
                                       //
    const char* expand_tmplts_path(const char *leaf);
                                    // Append leaf to p_tmplts_root, if and
                                       // only if leaf is a relative path.
};

/* --------------------------- externs ---------------------------- */

extern root_path *rootpath;

#endif  // ifndef _ROOTPATH_H
