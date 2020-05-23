/*
 * winutils.cpp -- Odds and Ends windows utilities
 *
 */


#include <string.h>

#include "p3icli.h"
#include "err.h"
#include "winutils.h"

typedef LONG NTSTATUS, *PNTSTATUS;
#define STATUS_SUCCESS (0x00000000)
typedef NTSTATUS (WINAPI* RtlGetVersionPtr)(PRTL_OSVERSIONINFOW);

//
// The implementation of GetRealOSVersion() is taken from here:
//
// stackoverflow.com/questions/36543301/detecting-windows-10-version/36543774#36543774
//
static RTL_OSVERSIONINFOW
GetRealOSVersion()
{
    RTL_OSVERSIONINFOW rovi = { 0 };
    HMODULE hMod = ::GetModuleHandleW(L"ntdll.dll");
    if (hMod)
    {
        RtlGetVersionPtr fxPtr =
                    (RtlGetVersionPtr)::GetProcAddress(hMod, "RtlGetVersion");
        if (fxPtr != nullptr)
        {
            rovi.dwOSVersionInfoSize = sizeof(rovi);
            if ( STATUS_SUCCESS == fxPtr(&rovi) )
            {
                return rovi;
            }
        }
    }
    return rovi;
}

// Use window messages to terminate a window (it's assumed the caller lacks
// sufficient privileges for use of TerminateProcess() on arbitrary Windows
// processes, like, umm Windows Explorer).
static void
close_window(HWND hwnd)
{
    LRESULT rslt = SendMessage(hwnd, WM_CLOSE, NULL, NULL);
    if (rslt != 0)
    {
        // oddness...so try WM_QUIT

        rslt = SendMessage(hwnd, WM_QUIT, NULL, NULL);
        if (rslt != 0)
        {
            char errbuf[256], *bp, msg[512];

            bp = errbuf;
            DWORD errcode = GetLastError();
            (void) fmt_win32_error(errcode, &bp, sizeof(errbuf));
            err->debug(
        "SendMessage returned nonzero status for both WM_CLOSE and WM_QUIT");
            _snprintf(msg, sizeof(msg), "WM_QUIT GetLastError: %s", errbuf);
            err->debug(msg);
        }
    }
}

/* ------------------------------------------------------------------ */

//
// Determing the host version of Windows is not easy when backward
// compatibility with previous versions is required. Need to know
// if running Win10 or later.
//
bool
IsWdws10AndLater()
{
    static bool queried_version = false;
    static RTL_OSVERSIONINFOW ovi;

    if (! queried_version)
    {
        queried_version = true;
        ovi = GetRealOSVersion();
    }
    return (
            ovi.dwMajorVersion > 6 ||       // Win 7 and 8.1 major vrsn is 6
            (ovi.dwMajorVersion == 6 && ovi.dwMinorVersion > 3)   // > 8.1
           );
}

/* ------------------------------------------------------------------ */

static bool warned_about_xplr_once = false;

//
// If Windows Explorer (explorer.exe) is running as a visible process on a
// Win10 host and the user doesn't want to ignore the instability that
// might arise, take one of two actions:
//
// a) if the user elects _not_ to "end task" Windows Explorer, write a
// warning in the log, else
//
// b) send a WM_CLOSE to every visible instance.
//
// Rationale:  as of 2017, it has been repeatedly observed that a running,
// visible instance of Windows Explorer can (and will) cause PPT 16 to
// crash during long running P3ICLI scripts that utilize "copy src fmt on".
// It's assumed that earlier versions of PPT are similarly affected on
// Win10.
//
void
worry_about_wdws_xplr(void)
{
    const int MAX_CLOSE_TRIES = 256;

    if (ppt->wdws_xplr_ignore())
        return;                    // see no evil, hear no evil...
    if (! IsWdws10AndLater())
        return;                    // not a problem for Win7 or 8.1

    // Apparently, there are two Windows Class strings associated with
    // Windows Explorer, as discussed here:
    //
    // https://blogs.msdn.microsoft.com/oldnewthing/20150619-00/?p=45341
    
    static const char *xplr_class1 = "CabinetWClass";
    static const char *xplr_class2 = "ExplorerWClass";

    int loop_count;
    for(loop_count = 0; loop_count < MAX_CLOSE_TRIES; loop_count++)
    {
        HWND hwnd = FindWindow(xplr_class1, NULL);
        if (! hwnd)
            hwnd = FindWindow(xplr_class2, NULL);
        if (! hwnd)
        {
            // All instances are gone (or never were).  Mission accomplished.
            
            break;
        }
        if (! ppt->wdws_xplr_end_task())
        {
            if (! warned_about_xplr_once)
            {
                // The simple case -- drop a warning in the log (or on stderr
                // if no log file).
            
                warned_about_xplr_once = true;  // don't spam warnings
                err->warn(
               "Windows Explorer is running as a visible process.\n\n"
"                 Explorer may cause PPT instability if a P3ICLI script uses\n"
"                 the command \"copy src fmt on\" . Refer to the help topic \n"
"                        \"PowerPoint Instability On Windows 10\"\n"
"                 in the reference manual for further details.  Pay attention\n"
"                 to the discussion of P3ICLI commandline switches that either\n"
"                 suppress this warning or automatically kill Windows Explorer.\n");
            }
            break;           // One warning shot fired.
        }
        else
        {
            close_window(hwnd);
        }
    }

    if (loop_count >= MAX_CLOSE_TRIES)
    {
        char msg[256];

        _snprintf(msg,
                  sizeof(msg),
            "Made %d attempts to \"end task\" Windows Explorer. Giving up.",
                  MAX_CLOSE_TRIES);
        err->warn(msg);
    }
}
