/*
 * purgepics.h -- include file for purgepics.cpp as well as class Purge_Pics .
 *
 */

#ifndef PURGE_PICS_H
#define PURGE_PICS_H

#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <string>

/* --------------------------- types ---------------------------- */

class purge_pics
{
private:
    std::vector<std::string> purge_list;// List of filenames to delete when
                                           // p3icli exits.
    std::unordered_map<std::string, int> purge_dict;
                                        // Use a dictionary to ensure that
                                           // purge_list does not grown w/o
                                           // bound due to duplicates.

    std::unordered_set<std::string> ignore_dict;
                                        // List of filenames to ignore when
                                           // p3icli exits, as specified in
                                           // p3icli script.
    std::unordered_set<std::string> ignore_dict_lc;
                                        // Same as ignore_dict, except names
                                          // are lower case ANSI.

    purge_pics(const purge_pics &rhs);  // no copy constructor
    purge_pics & operator=(const purge_pics &rhs);
                                        // and no assignment operator
public:
    purge_pics()                        { }
    ~purge_pics()                       { }

    void exec(void);                    // Remove accumulated filenames. Do
                                           // this just before exiting
                                           // p3icli.  Called only once,
                                           // ever.
    void rmv_later(const char *fname);  // Remember this filename and then
                                           // whack it during exec()
    void ignore_image_file(const char *fname);
                                        // But don't ever whack this file.
};

/* --------------------------- externs ---------------------------- */

extern purge_pics       *purgepics;     // instantiated purge_pics Interface

#endif
