#ifndef AUTOWRAP_H
#define AUTOWRAP_H

#include <OaIdl.h>

extern HRESULT AutoWrap(int       autoType,
                        VARIANT   *pvResult,
                        IDispatch *pDisp,
                        LPOLESTR  ptname,
                        int       cArgs...);

#endif
