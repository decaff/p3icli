/*
 * MODULE
 *    custom_properties.cpp - implements the semantics associated with this
 *                            command:
 *
 *                               custom property <qstring> = <qstring>
 *                               custom property <qstring> = "date: <datestr>"
 *                               custom property <qstring> = <integer>
 *                               custom property <qstring> = {yes|no}
 *
 *                            Purpose of this feature:  add a custom
 *                            property to the PRESENTATION that P3ICLI is
 *                            creating.  Supported syntax
 *
 *                               custom property "myname1" = "ron"
 *                               custom property "myname2" = "date: 12/16/2015"
 *                               custom property "myname3" = 1999
 *                               custom property "myname4" = yes
 *
 * ACKNOWLEDGMENT
 *    Many, many, many(!) thanks to the author of this web article:
 *
 *    https://support.microsoft.com/en-us/kb/238393
 */

#include "p3icli.h"
#include "err.h"
#include "autowrap.h"

// could not find these constants in an include file...
enum msoPropertyConstant {
                                 PropTypeNumber  = 1,
                                 PropTypeBoolean = 2,
                                 PropTypeDate    = 3,
                                 PropTypeText    = 4,
                                 PropTypeFloat   = 5,
                         };

static int  delete_custom_prop(
                                 wchar_t   *propname,
                                 IDispatch *pProps,
                                 bool      dbg_msg_ok
                              );

/* ------------------------------------------------------------------------ */

// Returns T if the specified custom property name exists.
static bool
cust_prop_name_exists(const wchar_t *propname, IDispatch *pProps)
{
    VARIANT result;
    VariantInit(&result);
    HRESULT hr = AutoWrap(DISPATCH_PROPERTYGET, &result, pProps, L"Count", 0);
    if (FAILED(hr))
    {
        return (false);    // error msg has been posted
    }
    long count = result.lVal;
	if (count == 0)
	{
		return (false);   // no custom props in this presentation
	}

    bool match = false;

    // Took a looooooooong time to figure out how to walk the custom
    // document properties using unadorned C++ .  I'd have never figured it
    // out if not for this posting:
    //
    // https://groups.google.com/a/teamdev.com/forum/#!topic/comfyj-forum/SLG1XOmxQRE
    //
    // Note that the custom properties collection is one-based.
    for (long i = 1; (i <= count) && (! match); i++)
    {
        HRESULT r1, r2;
        VARIANT vItemIdx;

        vItemIdx.vt = VT_I4;
        vItemIdx.lVal = i;
        VariantInit(&result);
        r1 = AutoWrap(DISPATCH_PROPERTYGET,
                      &result,
                      pProps,
                      L"Item",
                      1,
                      vItemIdx);
        if (FAILED(r1))
        {
            // no sense continuing...got to have Item dispatch ptr

            continue;
        }
        LPDISPATCH pItem = result.pdispVal;
        VariantInit(&result);
        r2 = AutoWrap(DISPATCH_PROPERTYGET, &result, pItem, L"Name", 0);
        if (! FAILED(r2))
        {
            wchar_t *returnedName = result.bstrVal;
            match = (_wcsicmp(returnedName, propname) == 0);
            VariantClear(&result);     // frees BSTR
        }
        pItem->Release();
    }
    return (match);
}

static int
add_yes_no_or_number_prop(wchar_t             *propname,
                          long                propvalue,
                          msoPropertyConstant proptype,
                          IDispatch           *pProps)
{
    // Want the user to be able to overwrite existing custom properties....
    // This is particularly important for repetitive P3I invocations.
    (void) delete_custom_prop(propname, pProps, false);

    VARIANT parm1, parm2, parm3, parm4;

    parm1.vt      = VT_BSTR;                // property Name
    parm1.bstrVal = SysAllocString(propname);
    parm2.vt      = VT_BOOL;                // Link To Content
    parm2.boolVal = false;
    parm3.vt      = VT_I4;                  // property Type
    parm3.lVal    = proptype;
    if (proptype == PropTypeFloat)
    {
        // PowerPoint will not correctly display negative integers unless
        // the prop type is Float.  So, humor PowerPoint.

        parm4.vt     = VT_R4;               // property Value
        parm4.fltVal = (float) propvalue;
    }
    else
    {
        parm4.vt   = VT_I4;                 // property Value
        parm4.lVal = propvalue;
    }

    (void) AutoWrap(DISPATCH_METHOD,
                    NULL,
                    pProps,
                    L"Add",
                    4,
                    parm4,
                    parm3,
                    parm2,
                    parm1);
    ::SysFreeString(parm1.bstrVal);
    return (P3ICLI_CONTINUE);
}

static int
delete_custom_prop(wchar_t *propname, IDispatch *pProps, bool dbg_msg_ok)
{
    IDispatch *pUserProp;
    VARIANT   result, parm1;

    if (! cust_prop_name_exists(propname, pProps))
    {
        // specified custom prop does not exist...don't care

        if (dbg_msg_ok && err->debug_enabled())
        {
            char msg[512], narrowName[384];

            (void) wcstombs(narrowName, propname, sizeof(narrowName));
            _snprintf(msg,
                      sizeof(msg),
                      "Attempt to delete nonexistent cust prop: \"%s\"",
                      narrowName);
            err->debug(msg);
        }
        return (P3ICLI_CONTINUE);
    }

    VariantInit(&result);
    parm1.vt      = VT_BSTR;
    parm1.bstrVal = ::SysAllocString(propname);
    (void) AutoWrap(DISPATCH_PROPERTYGET, &result, pProps, L"Item", 1, parm1);
    ::SysFreeString(parm1.bstrVal);
    pUserProp = result.pdispVal;
    if (pUserProp)
    {
        try
        {
            (void) AutoWrap(DISPATCH_METHOD, NULL, pUserProp, L"Delete", 0);
            pUserProp->Release();
        }
        catch(...)
        {
            // catch all unhandled exceptions, clean up, rethrow

            pUserProp->Release();
            throw;
        }
    }
    return (P3ICLI_CONTINUE);
}

static int
add_text_or_date_prop(wchar_t             *propname,
                      wchar_t             *propvalue,
                      msoPropertyConstant proptype,
                      IDispatch           *pProps)
{
    // Want the user to be able to overwrite existing custom properties....
    // This is particularly important for repetitive P3I invocations.
    (void) delete_custom_prop(propname, pProps, false);

    VARIANT parm1, parm2, parm3, parm4;

    parm1.vt      = VT_BSTR;                // property Name
    parm1.bstrVal = SysAllocString(propname);
    parm2.vt      = VT_BOOL;                // Link To Content
    parm2.boolVal = false;
    parm3.vt      = VT_I4;                  // property Type
    parm3.lVal    = proptype;
    parm4.vt      = VT_BSTR;                // property Value
    parm4.bstrVal = SysAllocString(propvalue);
    (void) AutoWrap(DISPATCH_METHOD,
                    NULL,
                    pProps,
                    L"Add",
                    4,
                    parm4,
                    parm3,
                    parm2,
                    parm1);
    ::SysFreeString(parm4.bstrVal);
    ::SysFreeString(parm1.bstrVal);
    return (P3ICLI_CONTINUE);
}

static int
process_cmds(P3ICLI_CMD_DATA *cmd, IDispatch *pProps)
{
    wchar_t *pWideVal  = NULL;    // Custom Prop Value (for date/text types)
    int     rc;

    // Convert user's custom property Name from char* to wchar_t*
    size_t origsize       = strlen(cmd->u1.str_val) + 1;
    wchar_t *pWideName    = (wchar_t *) xmalloc(sizeof(wchar_t) * origsize * 2);
    size_t convertedChars = 0;
    mbstowcs_s(&convertedChars, pWideName, origsize,cmd->u1.str_val, _TRUNCATE);

    try
    {
        if (cmd->tag == P3ICLI_NUMBER_ARG || cmd->tag == P3ICLI_YES_NO_ARG)
        {
            msoPropertyConstant propType;

            if (cmd->tag != P3ICLI_NUMBER_ARG)
                propType = PropTypeBoolean;
            else
            {
                // PPT can't properly display a negative integer unless the
                // PropType is Float.

                propType = (cmd->long_val >= 0) ? PropTypeNumber: PropTypeFloat;
            }
            rc = add_yes_no_or_number_prop(
                                            pWideName,
                                            cmd->long_val,
                                            propType,
                                            pProps
                                          );
        }
        else
        {
            /* TEXT or Date (aka P3ICLI_STRING_ARG) custom property (maybe) */

            if (cmd->u2.str_val[0] == '\0')
            {
                /* user wants to delete a custom property */

                rc = delete_custom_prop(pWideName, pProps, true);
            }
            else
            {
                /*
                 * If user's property value is prefixed by "date:", strip the
                 * prefix and create a custom Date property.  Otherwise,
                 * create a custom Text property.
                 */

                msoPropertyConstant proptype;
                char *cp = cmd->u2.str_val;

                while (isspace(*cp))
                    cp++;
                if (strncmp(cp, "date:", sizeof("date:") - 1) == 0)
                {
                    cp += sizeof("date:") - 1;
                    while (isspace(*cp))
                        cp++;
                    proptype = PropTypeDate;
                }
                else
                {
                    cp       = cmd->u2.str_val;
                    proptype = PropTypeText;
                }

                // Convert user's custom property Value from char* to wchar_t*
                size_t osize     = strlen(cp) + 1;
                pWideVal         = (wchar_t *)
                                   xmalloc(sizeof(wchar_t) * osize * 2);
                size_t cvtdChars = 0;
                mbstowcs_s(&cvtdChars, pWideVal, osize, cp, _TRUNCATE);
                rc = add_text_or_date_prop(pWideName,
                                           pWideVal,
                                           proptype,
                                           pProps);
            }
        }
    }
    catch(...)
    {
        // catch all unhandled exceptions, clean up, rethrow

        if (pWideVal)
            (void) free(pWideVal);
        (void) free(pWideName);
        pProps->Release();
        throw;
    }
    if (pWideVal)
        (void) free(pWideVal);
    (void) free(pWideName);
    pProps->Release();
    return (rc);
}

/* ----------------------------------------------------------------------- */

extern "C" {

int
set_custom_property(P3ICLI_CMD_DATA *cmd)
{
    if (! ppt->must_have_app_connected())
        return (P3ICLI_CONTINUE);
    if (! tcontrol->tmplt_active())
        return (P3ICLI_CONTINUE);
    Presentations allpres(ppt->app().GetPresentations());
    _Presentation currpres(ppt->app().GetActivePresentation());
    IDispatch *pProps = currpres.GetCustomDocumentProperties();
    return (process_cmds(cmd, pProps));
}

}   // end extern "C"
