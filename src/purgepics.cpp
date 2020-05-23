/*
 * purgepics.cpp -- Implements these commands:
 *
 *                  ignore <filename>
 *                  {delete image files | dif} {on | off}
 *
 */

#include "p3icli.h"
#include "err.h"
#include "purgepics.h"
#include "semantics.h"

#include <algorithm>

using namespace std;

/* ---------------------- Helper Methods --------------------------- */

static void
to_lowercase(char &c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
}

static void
remove_file(string &fname)
{
    char msg[MAX_PATH + 512];
    BOOL rc = DeleteFile(fname.c_str());

    if (rc != 0)
    {
        // success

        if (err->debug_enabled())
        {
            _snprintf(msg,
                      sizeof(msg),
                      "image file deleted: %s",
                      fname.c_str());
            err->debug(msg);
        }
    }
    else
    {
        // failed

        DWORD errcode = GetLastError();
        if (errcode != ERROR_FILE_NOT_FOUND)
        {
            // warn user that file could not be deleted....

            char errbuf[256], *bp = errbuf;

            DWORD errcode = GetLastError();
            (void) fmt_win32_error(errcode, &bp, sizeof(errbuf));
            _snprintf(msg,
                      sizeof(msg),
                      "image file deletion failed: %s: %s",
                      errbuf,
                      fname.c_str());
            err->warn(msg);
        }
    }
}

/* ------------------- class methods --------------------- */

void
purge_pics::rmv_later(const char *fname)
{
    string image_file = fname;

    // don't store the same image file over and over in a vector.
    if (purge_dict.count(image_file) == 0)
    {
        purge_list.push_back(image_file);
        purge_dict.insert(make_pair(image_file, 0));
    }
}

void
purge_pics::ignore_image_file(const char *fname)
{
    string image_file = fname;

    // duplicate names are ignored during insertion
    ignore_dict.insert(image_file);

    // ANSI-centric, code copied from here:
    //
    // https://www.techiedelight.com/convert-string-lowercase-cpp/
    //
    for_each(image_file.begin(), image_file.end(), to_lowercase);

    // duplicate names are ignored during insertion
    ignore_dict_lc.insert(image_file);
}

// Called at program exit if error count is zero.  Whack all cached image
// files.
void
purge_pics::exec(void)
{
    vector<string>::iterator it;
    for (it = purge_list.begin(); it != purge_list.end(); ++it)
    {
        // Don't whack files marked "ignore" by user.

        string image_file = *it;
        if (ignore_dict.count(image_file) == 0)
        {
            // Looks promising, but don't give up quite yet...Windows uses
            // a case insensitive file system, so look for an ANSI caseless
            // match as well (user may have been careless typing the image
            // filename within a P3ICLI "ignore" command).

            string image_file_lc = image_file;
            for_each(image_file_lc.begin(), image_file_lc.end(), to_lowercase);
            if (ignore_dict_lc.count(image_file_lc) == 0)
                remove_file(image_file);
        }
    }
}

extern "C" {

/* ------------ Semantic Functions...Invoked by the parser ------------- */

// Choose whether or not files referenced by the pic<uint> command are
// deleted at program exit.
int
delete_image_files(P3ICLI_CMD_DATA *cmd)
{
    semstate->rmv_image_files_set(cmd->long_val == TRUE);
    return (P3ICLI_CONTINUE);
}

// Cache an image filename that purge_pics::exec() above should ignore.
int
ignore_image_file(P3ICLI_CMD_DATA *cmd)
{
    purgepics->ignore_image_file(cmd->u1.filename);
    return (P3ICLI_CONTINUE);
}

}
