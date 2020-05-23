// AutoWrap() - Automation helper function...
//
// Code is lifted from here:
//
//      https://support.microsoft.com/en-us/kb/238393
// 
// And modified slightly to conform to p3icli error reporting interface.

#include <windows.h>

#include "err.h"
#include "autowrap.h"


HRESULT
AutoWrap(int autoType, VARIANT *pvResult, IDispatch *pDisp, 
      LPOLESTR ptName, int cArgs...) 
{
    // Begin variable-argument list...
    va_list marker;
    va_start(marker, cArgs);

    if(! pDisp)
    {
        err->err("internal error: NULL IDispatch passed to AutoWrap()",
                 IS_PGM,
                 0);
        exit(err->num_errors());
    }

    // Variables used...
    DISPPARAMS dp = { NULL, NULL, 0, 0 };
    DISPID dispidNamed = DISPID_PROPERTYPUT;
    DISPID dispID;
    HRESULT hr;
    char buf[768];
    char szName[512];
 
    // Convert down to ANSI
    WideCharToMultiByte(CP_ACP,
                        0, 
                        ptName, 
                        -1, 
                        szName,
                        sizeof(szName), 
                        NULL,
                        NULL);
 
    // Get DISPID for name passed...
    hr = pDisp->GetIDsOfNames(IID_NULL, &ptName, 1, LOCALE_USER_DEFAULT, 
                              &dispID);
    if (FAILED(hr))
    {
        char *w32errbuf = NULL;
        _snprintf(buf, 
                  sizeof(buf),
                  "IDispatch::GetIDsOfNames(\"%s\") failed: ",
                  szName);
        std::string fullmsg(buf);
        fmt_win32_error(hr, &w32errbuf, 0);
        fullmsg += w32errbuf;
        err->err(fullmsg.c_str());
        LocalFree(w32errbuf);
        return (hr);
    }
 
    // Allocate memory for arguments...
    VARIANT *pArgs = new VARIANT[cArgs+1];

    // Extract arguments...
    for(int i=0; i<cArgs; i++)
    {
        pArgs[i] = va_arg(marker, VARIANT);
    }
 
    // Build DISPPARAMS
    dp.cArgs = cArgs;
    dp.rgvarg = pArgs;
 
    // Handle special-case for property-puts!
    if(autoType & DISPATCH_PROPERTYPUT)
    {
        dp.cNamedArgs = 1;
        dp.rgdispidNamedArgs = &dispidNamed;
    }
 
    // Make the call!
    hr = pDisp->Invoke(dispID, IID_NULL, LOCALE_SYSTEM_DEFAULT, autoType, 
                       &dp, pvResult, NULL, NULL);
    if (FAILED(hr))
    {
        char *w32errbuf = NULL;
        _snprintf(buf, 
                  sizeof(buf),
                  "IDispatch::Invoke(\"%s\"=%08lx) failed: ", 
                  szName,
                  dispID);
        std::string fullmsg(buf);
        fmt_win32_error(hr, &w32errbuf, 0);
        fullmsg += w32errbuf;
        err->err(fullmsg.c_str());
        LocalFree(w32errbuf);
        return (hr);
    }
    // End variable-argument section...
    va_end(marker);
 
    delete [] pArgs;
 
    return (hr);
}
