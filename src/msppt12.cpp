// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "msppt12.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// Collection properties

/////////////////////////////////////////////////////////////////////////////
// Collection operations

long Collection::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// _Application properties

/////////////////////////////////////////////////////////////////////////////
// _Application operations

LPDISPATCH _Application::GetPresentations()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetActivePresentation()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetSlideShowWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetPath()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Application::GetName()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Application::GetCaption()
{
	CString result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Application::GetAssistant()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetBuild()
{
	CString result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Application::GetVersion()
{
	CString result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Application::GetOperatingSystem()
{
	CString result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Application::GetActivePrinter()
{
	CString result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long _Application::GetCreator()
{
	long result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetVbe()
{
	LPDISPATCH result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Application::Help(LPCTSTR HelpFile, long ContextID)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x7e4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 HelpFile, ContextID);
}

void _Application::Quit()
{
	InvokeHelper(0x7e5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float _Application::GetLeft()
{
	float result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Application::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Application::GetTop()
{
	float result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Application::SetTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Application::GetWidth()
{
	float result;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Application::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Application::GetHeight()
{
	float result;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Application::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Application::GetWindowState()
{
	long result;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetWindowState(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetVisible()
{
	long result;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetActive()
{
	long result;
	InvokeHelper(0x7f0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::Activate()
{
	InvokeHelper(0x7f1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Application::GetAnswerWizard()
{
	LPDISPATCH result;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetCOMAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x7f3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetProductCode()
{
	CString result;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetDefaultWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x7f5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetLanguageSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetShowWindowsInTaskbar()
{
	long result;
	InvokeHelper(0x7f8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetShowWindowsInTaskbar(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetFeatureInstall()
{
	long result;
	InvokeHelper(0x7fa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetFeatureInstall(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Application::GetFileDialog(long Type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		Type);
	return result;
}

long _Application::GetDisplayGridLines()
{
	long result;
	InvokeHelper(0x7fe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayGridLines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetAutomationSecurity()
{
	long result;
	InvokeHelper(0x7ff, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetAutomationSecurity(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ff, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Application::GetNewPresentation()
{
	LPDISPATCH result;
	InvokeHelper(0x800, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetDisplayAlerts()
{
	long result;
	InvokeHelper(0x801, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayAlerts(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x801, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetShowStartupDialog()
{
	long result;
	InvokeHelper(0x802, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetShowStartupDialog(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x802, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Application::GetAutoCorrect()
{
	LPDISPATCH result;
	InvokeHelper(0x804, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x805, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetDisplayDocumentInformationPanel()
{
	BOOL result;
	InvokeHelper(0x808, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayDocumentInformationPanel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x808, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetAssistance()
{
	LPDISPATCH result;
	InvokeHelper(0x809, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetActiveEncryptionSession()
{
	long result;
	InvokeHelper(0x80a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetFileConverters()
{
	LPDISPATCH result;
	InvokeHelper(0x80b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// _Global properties

/////////////////////////////////////////////////////////////////////////////
// _Global operations

LPDISPATCH _Global::GetActivePresentation()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetAssistant()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetPresentations()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetSlideShowWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetAnswerWizard()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Global::GetFileConverters()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ColorFormat properties

/////////////////////////////////////////////////////////////////////////////
// ColorFormat operations

LPDISPATCH ColorFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ColorFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ColorFormat::GetRgb()
{
	long result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ColorFormat::SetRgb(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ColorFormat::GetType()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ColorFormat::GetSchemeColor()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ColorFormat::SetSchemeColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ColorFormat::GetTintAndShade()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ColorFormat::SetTintAndShade(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ColorFormat::GetObjectThemeColor()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ColorFormat::SetObjectThemeColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// SlideShowWindow properties

/////////////////////////////////////////////////////////////////////////////
// SlideShowWindow operations

LPDISPATCH SlideShowWindow::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowWindow::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowWindow::GetView()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowWindow::GetPresentation()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowWindow::GetIsFullScreen()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float SlideShowWindow::GetLeft()
{
	float result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void SlideShowWindow::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float SlideShowWindow::GetTop()
{
	float result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void SlideShowWindow::SetTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float SlideShowWindow::GetWidth()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void SlideShowWindow::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float SlideShowWindow::GetHeight()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void SlideShowWindow::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long SlideShowWindow::GetActive()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowWindow::Activate()
{
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Selection properties

/////////////////////////////////////////////////////////////////////////////
// Selection operations

LPDISPATCH Selection::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::Cut()
{
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Copy()
{
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Delete()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Unselect()
{
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Selection::GetType()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetSlideRange()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetShapeRange()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetTextRange()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetChildShapeRange()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetHasChildShapeRange()
{
	BOOL result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DocumentWindows properties

/////////////////////////////////////////////////////////////////////////////
// DocumentWindows operations

long DocumentWindows::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindows::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindows::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindows::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

void DocumentWindows::Arrange(long arrangeStyle)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 arrangeStyle);
}


/////////////////////////////////////////////////////////////////////////////
// SlideShowWindows properties

/////////////////////////////////////////////////////////////////////////////
// SlideShowWindows operations

long SlideShowWindows::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowWindows::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowWindows::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowWindows::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DocumentWindow properties

/////////////////////////////////////////////////////////////////////////////
// DocumentWindow operations

LPDISPATCH DocumentWindow::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindow::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindow::GetSelection()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindow::GetView()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindow::GetPresentation()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DocumentWindow::GetViewType()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetViewType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DocumentWindow::GetBlackAndWhite()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetBlackAndWhite(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DocumentWindow::GetActive()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long DocumentWindow::GetWindowState()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetWindowState(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString DocumentWindow::GetCaption()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

float DocumentWindow::GetLeft()
{
	float result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float DocumentWindow::GetTop()
{
	float result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float DocumentWindow::GetWidth()
{
	float result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float DocumentWindow::GetHeight()
{
	float result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void DocumentWindow::FitToPage()
{
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void DocumentWindow::Activate()
{
	InvokeHelper(0x7df, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void DocumentWindow::LargeScroll(long Down, long Up, long ToRight, long ToLeft)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Down, Up, ToRight, ToLeft);
}

void DocumentWindow::SmallScroll(long Down, long Up, long ToRight, long ToLeft)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Down, Up, ToRight, ToLeft);
}

LPDISPATCH DocumentWindow::NewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void DocumentWindow::Close()
{
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH DocumentWindow::GetActivePane()
{
	LPDISPATCH result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DocumentWindow::GetPanes()
{
	LPDISPATCH result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DocumentWindow::GetSplitVertical()
{
	long result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetSplitVertical(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DocumentWindow::GetSplitHorizontal()
{
	long result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DocumentWindow::SetSplitHorizontal(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH DocumentWindow::RangeFromPoint(long X, long Y)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7e9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		X, Y);
	return result;
}

long DocumentWindow::PointsToScreenPixelsX(float Points)
{
	long result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7ea, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Points);
	return result;
}

long DocumentWindow::PointsToScreenPixelsY(float Points)
{
	long result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7eb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Points);
	return result;
}

void DocumentWindow::ScrollIntoView(float Left, float Top, float Width, float Height, long Start)
{
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_I4;
	InvokeHelper(0x7ec, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top, Width, Height, Start);
}


/////////////////////////////////////////////////////////////////////////////
// View properties

/////////////////////////////////////////////////////////////////////////////
// View operations

LPDISPATCH View::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH View::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long View::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long View::GetZoom()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void View::SetZoom(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void View::Paste()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH View::GetSlide()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void View::SetSlide(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void View::GotoSlide(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

long View::GetDisplaySlideMiniature()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void View::SetDisplaySlideMiniature(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long View::GetZoomToFit()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void View::SetZoomToFit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void View::PasteSpecial(long DataType, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DataType, DisplayAsIcon, IconFileName, IconIndex, IconLabel, Link);
}

LPDISPATCH View::GetPrintOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void View::PrintOut(long From, long To, LPCTSTR PrintToFile, long Copies, long Collate)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 From, To, PrintToFile, Copies, Collate);
}


/////////////////////////////////////////////////////////////////////////////
// SlideShowView properties

/////////////////////////////////////////////////////////////////////////////
// SlideShowView operations

LPDISPATCH SlideShowView::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowView::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowView::GetZoom()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowView::GetSlide()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowView::GetPointerType()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowView::SetPointerType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowView::GetState()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowView::SetState(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowView::GetAcceleratorsEnabled()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowView::SetAcceleratorsEnabled(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float SlideShowView::GetPresentationElapsedTime()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float SlideShowView::GetSlideElapsedTime()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void SlideShowView::SetSlideElapsedTime(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH SlideShowView::GetLastSlideViewed()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowView::GetAdvanceMode()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowView::GetPointerColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowView::GetIsNamedShow()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString SlideShowView::GetSlideShowName()
{
	CString result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void SlideShowView::DrawLine(float BeginX, float BeginY, float EndX, float EndY)
{
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x7df, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 BeginX, BeginY, EndX, EndY);
}

void SlideShowView::EraseDrawing()
{
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::First()
{
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::Last()
{
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::Next()
{
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::Previous()
{
	InvokeHelper(0x7e4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::GotoSlide(long Index, long ResetSlide)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index, ResetSlide);
}

void SlideShowView::GotoNamedShow(LPCTSTR SlideShowName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SlideShowName);
}

void SlideShowView::EndNamedShow()
{
	InvokeHelper(0x7e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::ResetSlideTime()
{
	InvokeHelper(0x7e8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideShowView::Exit()
{
	InvokeHelper(0x7e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long SlideShowView::GetCurrentShowPosition()
{
	long result;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowView::GotoClick(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ec, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

long SlideShowView::GetClickIndex()
{
	long result;
	InvokeHelper(0x7ed, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long SlideShowView::GetClickCount()
{
	long result;
	InvokeHelper(0x7ee, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL SlideShowView::FirstAnimationIsAutomatic()
{
	BOOL result;
	InvokeHelper(0x7ef, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// SlideShowSettings properties

/////////////////////////////////////////////////////////////////////////////
// SlideShowSettings operations

LPDISPATCH SlideShowSettings::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowSettings::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowSettings::GetPointerColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowSettings::GetNamedSlideShows()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowSettings::GetStartingSlide()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetStartingSlide(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowSettings::GetEndingSlide()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetEndingSlide(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowSettings::GetAdvanceMode()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetAdvanceMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH SlideShowSettings::Run()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowSettings::GetLoopUntilStopped()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetLoopUntilStopped(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowSettings::GetShowType()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetShowType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowSettings::GetShowWithNarration()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetShowWithNarration(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowSettings::GetShowWithAnimation()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetShowWithAnimation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString SlideShowSettings::GetSlideShowName()
{
	CString result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetSlideShowName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long SlideShowSettings::GetRangeType()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetRangeType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowSettings::GetShowScrollbar()
{
	long result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowSettings::SetShowScrollbar(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// NamedSlideShows properties

/////////////////////////////////////////////////////////////////////////////
// NamedSlideShows operations

long NamedSlideShows::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH NamedSlideShows::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH NamedSlideShows::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH NamedSlideShows::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH NamedSlideShows::Add(LPCTSTR Name, const VARIANT& safeArrayOfSlideIDs)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Name, &safeArrayOfSlideIDs);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// NamedSlideShow properties

/////////////////////////////////////////////////////////////////////////////
// NamedSlideShow operations

LPDISPATCH NamedSlideShow::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH NamedSlideShow::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString NamedSlideShow::GetName()
{
	CString result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void NamedSlideShow::Delete()
{
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT NamedSlideShow::GetSlideIDs()
{
	VARIANT result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long NamedSlideShow::GetCount()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// PrintOptions properties

/////////////////////////////////////////////////////////////////////////////
// PrintOptions operations

LPDISPATCH PrintOptions::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PrintOptions::GetPrintColorType()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetPrintColorType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetCollate()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetCollate(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetFitToPage()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetFitToPage(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetFrameSlides()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetFrameSlides(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetNumberOfCopies()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetNumberOfCopies(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetOutputType()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetOutputType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH PrintOptions::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PrintOptions::GetPrintHiddenSlides()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetPrintHiddenSlides(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetPrintInBackground()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetPrintInBackground(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetRangeType()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetRangeType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH PrintOptions::GetRanges()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PrintOptions::GetPrintFontsAsGraphics()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetPrintFontsAsGraphics(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString PrintOptions::GetSlideShowName()
{
	CString result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetSlideShowName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString PrintOptions::GetActivePrinter()
{
	CString result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetActivePrinter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long PrintOptions::GetHandoutOrder()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetHandoutOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PrintOptions::GetPrintComments()
{
	long result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintOptions::SetPrintComments(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// PrintRanges properties

/////////////////////////////////////////////////////////////////////////////
// PrintRanges operations

long PrintRanges::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH PrintRanges::Add(long Start, long End)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7d1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, End);
	return result;
}

LPDISPATCH PrintRanges::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void PrintRanges::ClearAll()
{
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH PrintRanges::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH PrintRanges::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// PrintRange properties

/////////////////////////////////////////////////////////////////////////////
// PrintRange operations

LPDISPATCH PrintRange::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PrintRange::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PrintRange::GetStart()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long PrintRange::GetEnd()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PrintRange::Delete()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// AddIns properties

/////////////////////////////////////////////////////////////////////////////
// AddIns operations

long AddIns::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH AddIns::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AddIns::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AddIns::Item(VARIANT* Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH AddIns::Add(LPCTSTR FileName)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName);
	return result;
}

void AddIns::Remove(VARIANT* Index)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}


/////////////////////////////////////////////////////////////////////////////
// AddIn properties

/////////////////////////////////////////////////////////////////////////////
// AddIn operations

LPDISPATCH AddIn::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AddIn::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString AddIn::GetFullName()
{
	CString result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString AddIn::GetName()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString AddIn::GetPath()
{
	CString result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long AddIn::GetRegistered()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AddIn::SetRegistered(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AddIn::GetAutoLoad()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AddIn::SetAutoLoad(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AddIn::GetLoaded()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AddIn::SetLoaded(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Presentations properties

/////////////////////////////////////////////////////////////////////////////
// Presentations operations

long Presentations::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Presentations::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Presentations::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Presentations::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH Presentations::Add(long WithWindow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		WithWindow);
	return result;
}

LPDISPATCH Presentations::Open(LPCTSTR FileName, long ReadOnly, long Untitled, long WithWindow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ReadOnly, Untitled, WithWindow);
	return result;
}

void Presentations::CheckOut(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

BOOL Presentations::CanCheckOut(LPCTSTR FileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FileName);
	return result;
}

LPDISPATCH Presentations::Open2007(LPCTSTR FileName, long ReadOnly, long Untitled, long WithWindow, long OpenAndRepair)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ReadOnly, Untitled, WithWindow, OpenAndRepair);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Hyperlinks properties

/////////////////////////////////////////////////////////////////////////////
// Hyperlinks operations

long Hyperlinks::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Hyperlinks::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Hyperlinks::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Hyperlinks::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Hyperlink properties

/////////////////////////////////////////////////////////////////////////////
// Hyperlink operations

LPDISPATCH Hyperlink::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Hyperlink::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Hyperlink::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString Hyperlink::GetAddress()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Hyperlink::SetAddress(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Hyperlink::GetSubAddress()
{
	CString result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Hyperlink::SetSubAddress(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void Hyperlink::AddToFavorites()
{
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString Hyperlink::GetEmailSubject()
{
	CString result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Hyperlink::SetEmailSubject(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Hyperlink::GetScreenTip()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Hyperlink::SetScreenTip(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Hyperlink::GetTextToDisplay()
{
	CString result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Hyperlink::SetTextToDisplay(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Hyperlink::GetShowAndReturn()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Hyperlink::SetShowAndReturn(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Hyperlink::Follow()
{
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Hyperlink::CreateNewDocument(LPCTSTR FileName, long EditNow, long Overwrite)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, EditNow, Overwrite);
}

void Hyperlink::Delete()
{
	InvokeHelper(0x7dd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// PageSetup properties

/////////////////////////////////////////////////////////////////////////////
// PageSetup operations

LPDISPATCH PageSetup::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PageSetup::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PageSetup::GetFirstSlideNumber()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PageSetup::SetFirstSlideNumber(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float PageSetup::GetSlideHeight()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PageSetup::SetSlideHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float PageSetup::GetSlideWidth()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PageSetup::SetSlideWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long PageSetup::GetSlideSize()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PageSetup::SetSlideSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PageSetup::GetNotesOrientation()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PageSetup::SetNotesOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PageSetup::GetSlideOrientation()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PageSetup::SetSlideOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Fonts properties

/////////////////////////////////////////////////////////////////////////////
// Fonts operations

long Fonts::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Fonts::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Fonts::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Fonts::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void Fonts::Replace(LPCTSTR Original, LPCTSTR Replacement)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Original, Replacement);
}


/////////////////////////////////////////////////////////////////////////////
// ExtraColors properties

/////////////////////////////////////////////////////////////////////////////
// ExtraColors operations

long ExtraColors::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExtraColors::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ExtraColors::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ExtraColors::Item(long Index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Index);
	return result;
}

void ExtraColors::Add(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void ExtraColors::Clear()
{
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Slides properties

/////////////////////////////////////////////////////////////////////////////
// Slides operations

long Slides::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Slides::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Slides::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Slides::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH Slides::FindBySlideID(long SlideID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SlideID);
	return result;
}

long Slides::InsertFromFile(LPCTSTR FileName, long Index, long SlideStart, long SlideEnd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		FileName, Index, SlideStart, SlideEnd);
	return result;
}

LPDISPATCH Slides::Range(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH Slides::Paste(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Slides::AddSlide(long Index, LPDISPATCH pCustomLayout)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index, pCustomLayout);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// _Slide properties

/////////////////////////////////////////////////////////////////////////////
// _Slide operations

LPDISPATCH _Slide::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetHeadersFooters()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetSlideShowTransition()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetColorScheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::SetColorScheme(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Slide::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Slide::GetName()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Slide::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Slide::GetSlideID()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Slide::GetPrintSteps()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Slide::Select()
{
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Slide::Cut()
{
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Slide::Copy()
{
	InvokeHelper(0x7dd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Slide::GetLayout()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Slide::SetLayout(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Slide::Duplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::Delete()
{
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Slide::GetTags()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Slide::GetSlideIndex()
{
	long result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Slide::GetSlideNumber()
{
	long result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Slide::GetDisplayMasterShapes()
{
	long result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Slide::SetDisplayMasterShapes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Slide::GetFollowMasterBackground()
{
	long result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Slide::SetFollowMasterBackground(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Slide::GetNotesPage()
{
	LPDISPATCH result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::Export(LPCTSTR FileName, LPCTSTR FilterName, long ScaleWidth, long ScaleHeight)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7e9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, FilterName, ScaleWidth, ScaleHeight);
}

LPDISPATCH _Slide::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Slide::GetDesign()
{
	LPDISPATCH result;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::SetDesign(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void _Slide::MoveTo(long toPos)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ee, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 toPos);
}

LPDISPATCH _Slide::GetTimeLine()
{
	LPDISPATCH result;
	InvokeHelper(0x7ef, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::ApplyTemplate(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

LPDISPATCH _Slide::GetCustomLayout()
{
	LPDISPATCH result;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::SetCustomLayout(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void _Slide::ApplyTheme(LPCTSTR themeName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 themeName);
}

LPDISPATCH _Slide::GetThemeColorScheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::ApplyThemeColorScheme(LPCTSTR themeColorSchemeName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 themeColorSchemeName);
}

long _Slide::GetBackgroundStyle()
{
	long result;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Slide::SetBackgroundStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Slide::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x7f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Slide::PublishSlides(LPCTSTR SlideLibraryUrl, BOOL Overwrite, BOOL UseSlideOrder)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x7f8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SlideLibraryUrl, Overwrite, UseSlideOrder);
}


/////////////////////////////////////////////////////////////////////////////
// SlideRange properties

/////////////////////////////////////////////////////////////////////////////
// SlideRange operations

LPDISPATCH SlideRange::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetHeadersFooters()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetSlideShowTransition()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetColorScheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::SetColorScheme(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH SlideRange::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString SlideRange::GetName()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void SlideRange::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long SlideRange::GetSlideID()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long SlideRange::GetPrintSteps()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideRange::Select()
{
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideRange::Cut()
{
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SlideRange::Copy()
{
	InvokeHelper(0x7dd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long SlideRange::GetLayout()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideRange::SetLayout(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH SlideRange::Duplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::Delete()
{
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH SlideRange::GetTags()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideRange::GetSlideIndex()
{
	long result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long SlideRange::GetSlideNumber()
{
	long result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long SlideRange::GetDisplayMasterShapes()
{
	long result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideRange::SetDisplayMasterShapes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideRange::GetFollowMasterBackground()
{
	long result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideRange::SetFollowMasterBackground(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH SlideRange::GetNotesPage()
{
	LPDISPATCH result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::Export(LPCTSTR FileName, LPCTSTR FilterName, long ScaleWidth, long ScaleHeight)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7e9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, FilterName, ScaleWidth, ScaleHeight);
}

LPDISPATCH SlideRange::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

long SlideRange::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideRange::GetDesign()
{
	LPDISPATCH result;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::SetDesign(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void SlideRange::MoveTo(long toPos)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ee, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 toPos);
}

LPDISPATCH SlideRange::GetTimeLine()
{
	LPDISPATCH result;
	InvokeHelper(0x7ef, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::ApplyTemplate(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

LPDISPATCH SlideRange::GetCustomLayout()
{
	LPDISPATCH result;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::SetCustomLayout(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void SlideRange::ApplyTheme(LPCTSTR themeName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 themeName);
}

LPDISPATCH SlideRange::GetThemeColorScheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::ApplyThemeColorScheme(LPCTSTR themeColorSchemeName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 themeColorSchemeName);
}

long SlideRange::GetBackgroundStyle()
{
	long result;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideRange::SetBackgroundStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH SlideRange::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x7f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void SlideRange::PublishSlides(LPCTSTR SlideLibraryUrl, BOOL Overwrite, BOOL UseSlideOrder)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x7f8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SlideLibraryUrl, Overwrite, UseSlideOrder);
}


/////////////////////////////////////////////////////////////////////////////
// _Master properties

/////////////////////////////////////////////////////////////////////////////
// _Master operations

LPDISPATCH _Master::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetHeadersFooters()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetColorScheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Master::SetColorScheme(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Master::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Master::GetName()
{
	CString result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Master::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Master::Delete()
{
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float _Master::GetHeight()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float _Master::GetWidth()
{
	float result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetTextStyles()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetDesign()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetTimeLine()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetSlideShowTransition()
{
	LPDISPATCH result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetCustomLayouts()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Master::GetTheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Master::ApplyTheme(LPCTSTR themeName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 themeName);
}

long _Master::GetBackgroundStyle()
{
	long result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Master::SetBackgroundStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Master::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ColorSchemes properties

/////////////////////////////////////////////////////////////////////////////
// ColorSchemes operations

long ColorSchemes::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorSchemes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorSchemes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorSchemes::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH ColorSchemes::Add(LPDISPATCH Scheme)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Scheme);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ColorScheme properties

/////////////////////////////////////////////////////////////////////////////
// ColorScheme operations

long ColorScheme::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorScheme::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorScheme::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorScheme::Colors(long SchemeColor)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SchemeColor);
	return result;
}

void ColorScheme::Delete()
{
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// RGBColor properties

/////////////////////////////////////////////////////////////////////////////
// RGBColor operations

LPDISPATCH RGBColor::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH RGBColor::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long RGBColor::GetRgb()
{
	long result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void RGBColor::SetRgb(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// SlideShowTransition properties

/////////////////////////////////////////////////////////////////////////////
// SlideShowTransition operations

LPDISPATCH SlideShowTransition::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SlideShowTransition::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowTransition::GetAdvanceOnClick()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetAdvanceOnClick(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowTransition::GetAdvanceOnTime()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetAdvanceOnTime(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float SlideShowTransition::GetAdvanceTime()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetAdvanceTime(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long SlideShowTransition::GetEntryEffect()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetEntryEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowTransition::GetHidden()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetHidden(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long SlideShowTransition::GetLoopSoundUntilNext()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetLoopSoundUntilNext(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH SlideShowTransition::GetSoundEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SlideShowTransition::GetSpeed()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SlideShowTransition::SetSpeed(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// SoundEffect properties

/////////////////////////////////////////////////////////////////////////////
// SoundEffect operations

LPDISPATCH SoundEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SoundEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString SoundEffect::GetName()
{
	CString result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void SoundEffect::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long SoundEffect::GetType()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SoundEffect::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void SoundEffect::ImportFromFile(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void SoundEffect::Play()
{
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// SoundFormat properties

/////////////////////////////////////////////////////////////////////////////
// SoundFormat operations

void SoundFormat::Play()
{
	InvokeHelper(0x7d0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void SoundFormat::Import(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

long SoundFormat::Export(LPCTSTR FileName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		FileName);
	return result;
}

long SoundFormat::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString SoundFormat::GetSourceFullName()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HeadersFooters properties

/////////////////////////////////////////////////////////////////////////////
// HeadersFooters operations

LPDISPATCH HeadersFooters::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::GetDateAndTime()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::GetSlideNumber()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::GetHeader()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::GetFooter()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HeadersFooters::GetDisplayOnTitleSlide()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void HeadersFooters::SetDisplayOnTitleSlide(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void HeadersFooters::Clear()
{
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Shapes properties

/////////////////////////////////////////////////////////////////////////////
// Shapes operations

LPDISPATCH Shapes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shapes::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shapes::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN Shapes::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::AddCallout(long Type, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::AddConnector(long Type, float BeginX, float BeginY, float EndX, float EndY)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, BeginX, BeginY, EndX, EndY);
	return result;
}

LPDISPATCH Shapes::AddCurve(const VARIANT& SafeArrayOfPoints)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&SafeArrayOfPoints);
	return result;
}

LPDISPATCH Shapes::AddLabel(long Orientation, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Orientation, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::AddLine(float BeginX, float BeginY, float EndX, float EndY)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeginX, BeginY, EndX, EndY);
	return result;
}

LPDISPATCH Shapes::AddPicture(LPCTSTR FileName, long LinkToFile, long SaveWithDocument, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, LinkToFile, SaveWithDocument, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::AddPolyline(const VARIANT& SafeArrayOfPoints)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&SafeArrayOfPoints);
	return result;
}

LPDISPATCH Shapes::AddShape(long Type, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::AddTextEffect(long PresetTextEffect, LPCTSTR Text, LPCTSTR FontName, float FontSize, long FontBold, long FontItalic, float Left, float Top)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_R4 VTS_I4 VTS_I4 VTS_R4 VTS_R4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		PresetTextEffect, Text, FontName, FontSize, FontBold, FontItalic, Left, Top);
	return result;
}

LPDISPATCH Shapes::AddTextbox(long Orientation, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Orientation, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::BuildFreeform(long EditingType, float X1, float Y1)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		EditingType, X1, Y1);
	return result;
}

void Shapes::SelectAll()
{
	InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Shapes::Range(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

long Shapes::GetHasTitle()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::AddTitle()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::GetTitle()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::GetPlaceholders()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::AddOLEObject(float Left, float Top, float Width, float Height, LPCTSTR ClassName, LPCTSTR FileName, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_BSTR VTS_BSTR VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Left, Top, Width, Height, ClassName, FileName, DisplayAsIcon, IconFileName, IconIndex, IconLabel, Link);
	return result;
}

LPDISPATCH Shapes::AddComment(float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x7d9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::AddPlaceholder(long Type, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::AddMediaObject(LPCTSTR FileName, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::Paste()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shapes::AddTable(long NumRows, long NumColumns, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x7dd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		NumRows, NumColumns, Left, Top, Width, Height);
	return result;
}

LPDISPATCH Shapes::PasteSpecial(long DataType, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DataType, DisplayAsIcon, IconFileName, IconIndex, IconLabel, Link);
	return result;
}

LPDISPATCH Shapes::AddChart(long Type, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Left, Top, Width, Height);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Placeholders properties

/////////////////////////////////////////////////////////////////////////////
// Placeholders operations

long Placeholders::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Placeholders::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Placeholders::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Placeholders::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Placeholders::FindByName(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// PlaceholderFormat properties

/////////////////////////////////////////////////////////////////////////////
// PlaceholderFormat operations

LPDISPATCH PlaceholderFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PlaceholderFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PlaceholderFormat::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString PlaceholderFormat::GetName()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void PlaceholderFormat::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long PlaceholderFormat::GetContainedType()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// FreeformBuilder properties

/////////////////////////////////////////////////////////////////////////////
// FreeformBuilder operations

LPDISPATCH FreeformBuilder::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long FreeformBuilder::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH FreeformBuilder::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void FreeformBuilder::AddNodes(long SegmentType, long EditingType, float X1, float Y1, float X2, float Y2, float X3, float Y3)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SegmentType, EditingType, X1, Y1, X2, Y2, X3, Y3);
}

LPDISPATCH FreeformBuilder::ConvertToShape()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Shape properties

/////////////////////////////////////////////////////////////////////////////
// Shape operations

LPDISPATCH Shape::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Shape::Apply()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Shape::Delete()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Shape::Flip(long FlipCmd)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FlipCmd);
}

void Shape::IncrementLeft(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void Shape::IncrementRotation(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void Shape::IncrementTop(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void Shape::PickUp()
{
	InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Shape::RerouteConnections()
{
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Shape::ScaleHeight(float Factor, long RelativeToOriginalSize, long fScale)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4 VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Factor, RelativeToOriginalSize, fScale);
}

void Shape::ScaleWidth(float Factor, long RelativeToOriginalSize, long fScale)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4 VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Factor, RelativeToOriginalSize, fScale);
}

void Shape::SetShapesDefaultProperties()
{
	InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Shape::Ungroup()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Shape::ZOrder(long ZOrderCmd)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ZOrderCmd);
}

LPDISPATCH Shape::GetAdjustments()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetAutoShapeType()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Shape::SetAutoShapeType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Shape::GetBlackWhiteMode()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Shape::SetBlackWhiteMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Shape::GetCallout()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetConnectionSiteCount()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Shape::GetConnector()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetConnectorFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetGroupItems()
{
	LPDISPATCH result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Shape::GetHeight()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Shape::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Shape::GetHorizontalFlip()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Shape::GetLeft()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Shape::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Shape::GetLine()
{
	LPDISPATCH result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetLockAspectRatio()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Shape::SetLockAspectRatio(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Shape::GetName()
{
	CString result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Shape::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Shape::GetNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Shape::GetRotation()
{
	float result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Shape::SetRotation(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Shape::GetPictureFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetShadow()
{
	LPDISPATCH result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetTextEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetTextFrame()
{
	LPDISPATCH result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetThreeD()
{
	LPDISPATCH result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Shape::GetTop()
{
	float result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Shape::SetTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Shape::GetType()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Shape::GetVerticalFlip()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT Shape::GetVertices()
{
	VARIANT result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Shape::GetVisible()
{
	long result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Shape::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Shape::GetWidth()
{
	float result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Shape::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Shape::GetZOrderPosition()
{
	long result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetOLEFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetLinkFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetPlaceholderFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetAnimationSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetActionSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetTags()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Shape::Cut()
{
	InvokeHelper(0x7d9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Shape::Copy()
{
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Shape::Select(long Replace)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Replace);
}

LPDISPATCH Shape::Duplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetMediaType()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Shape::GetHasTextFrame()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString Shape::GetAlternativeText()
{
	CString result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Shape::SetAlternativeText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Shape::GetHasTable()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetTable()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetChild()
{
	long result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetParentGroup()
{
	LPDISPATCH result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetId()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetTextFrame2()
{
	LPDISPATCH result;
	InvokeHelper(0x91, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Shape::GetHasChart()
{
	long result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Shape::GetShapeStyle()
{
	long result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Shape::SetShapeStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x96, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Shape::GetBackgroundStyle()
{
	long result;
	InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Shape::SetBackgroundStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x97, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Shape::GetSoftEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetGlow()
{
	LPDISPATCH result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetReflection()
{
	LPDISPATCH result;
	InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Shape::GetChart()
{
	LPDISPATCH result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ShapeRange properties

/////////////////////////////////////////////////////////////////////////////
// ShapeRange operations

LPDISPATCH ShapeRange::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ShapeRange::Apply()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ShapeRange::Delete()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ShapeRange::Flip(long FlipCmd)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FlipCmd);
}

void ShapeRange::IncrementLeft(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ShapeRange::IncrementRotation(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ShapeRange::IncrementTop(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ShapeRange::PickUp()
{
	InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ShapeRange::RerouteConnections()
{
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ShapeRange::ScaleHeight(float Factor, long RelativeToOriginalSize, long fScale)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4 VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Factor, RelativeToOriginalSize, fScale);
}

void ShapeRange::ScaleWidth(float Factor, long RelativeToOriginalSize, long fScale)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4 VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Factor, RelativeToOriginalSize, fScale);
}

void ShapeRange::SetShapesDefaultProperties()
{
	InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH ShapeRange::Ungroup()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ShapeRange::ZOrder(long ZOrderCmd)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ZOrderCmd);
}

LPDISPATCH ShapeRange::GetAdjustments()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetAutoShapeType()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetAutoShapeType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ShapeRange::GetBlackWhiteMode()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetBlackWhiteMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH ShapeRange::GetCallout()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetConnectionSiteCount()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetConnector()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetConnectorFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetGroupItems()
{
	LPDISPATCH result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float ShapeRange::GetHeight()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ShapeRange::GetHorizontalFlip()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float ShapeRange::GetLeft()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH ShapeRange::GetLine()
{
	LPDISPATCH result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetLockAspectRatio()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetLockAspectRatio(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString ShapeRange::GetName()
{
	CString result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH ShapeRange::GetNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float ShapeRange::GetRotation()
{
	float result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetRotation(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH ShapeRange::GetPictureFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetShadow()
{
	LPDISPATCH result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetTextEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetTextFrame()
{
	LPDISPATCH result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetThreeD()
{
	LPDISPATCH result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float ShapeRange::GetTop()
{
	float result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ShapeRange::GetType()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetVerticalFlip()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT ShapeRange::GetVertices()
{
	VARIANT result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetVisible()
{
	long result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ShapeRange::GetWidth()
{
	float result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ShapeRange::GetZOrderPosition()
{
	long result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetOLEFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetLinkFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetPlaceholderFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetAnimationSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetActionSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetTags()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ShapeRange::Cut()
{
	InvokeHelper(0x7d9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ShapeRange::Copy()
{
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ShapeRange::Select(long Replace)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Replace);
}

LPDISPATCH ShapeRange::Duplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetMediaType()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetHasTextFrame()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

long ShapeRange::GetCount()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::Group()
{
	LPDISPATCH result;
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::Regroup()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ShapeRange::Align(long AlignCmd, long RelativeTo)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 AlignCmd, RelativeTo);
}

void ShapeRange::Distribute(long DistributeCmd, long RelativeTo)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DistributeCmd, RelativeTo);
}

CString ShapeRange::GetAlternativeText()
{
	CString result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetAlternativeText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long ShapeRange::GetHasTable()
{
	long result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetTable()
{
	LPDISPATCH result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetChild()
{
	long result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetParentGroup()
{
	LPDISPATCH result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetId()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetTextFrame2()
{
	LPDISPATCH result;
	InvokeHelper(0x91, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetHasChart()
{
	long result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ShapeRange::GetShapeStyle()
{
	long result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetShapeStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x96, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ShapeRange::GetBackgroundStyle()
{
	long result;
	InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShapeRange::SetBackgroundStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x97, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH ShapeRange::GetSoftEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetGlow()
{
	LPDISPATCH result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetReflection()
{
	LPDISPATCH result;
	InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeRange::GetChart()
{
	LPDISPATCH result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// GroupShapes properties

/////////////////////////////////////////////////////////////////////////////
// GroupShapes operations

LPDISPATCH GroupShapes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long GroupShapes::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH GroupShapes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long GroupShapes::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH GroupShapes::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN GroupShapes::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH GroupShapes::Range(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Adjustments properties

/////////////////////////////////////////////////////////////////////////////
// Adjustments operations

LPDISPATCH Adjustments::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Adjustments::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Adjustments::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Adjustments::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Adjustments::GetItem(long Index)
{
	float result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, parms,
		Index);
	return result;
}

void Adjustments::SetItem(long Index, float newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_R4;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Index, newValue);
}


/////////////////////////////////////////////////////////////////////////////
// PictureFormat properties

/////////////////////////////////////////////////////////////////////////////
// PictureFormat operations

LPDISPATCH PictureFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PictureFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH PictureFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void PictureFormat::IncrementBrightness(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void PictureFormat::IncrementContrast(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

float PictureFormat::GetBrightness()
{
	float result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetBrightness(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long PictureFormat::GetColorType()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetColorType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float PictureFormat::GetContrast()
{
	float result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetContrast(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float PictureFormat::GetCropBottom()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetCropBottom(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float PictureFormat::GetCropLeft()
{
	float result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetCropLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float PictureFormat::GetCropRight()
{
	float result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetCropRight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float PictureFormat::GetCropTop()
{
	float result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetCropTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long PictureFormat::GetTransparencyColor()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetTransparencyColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PictureFormat::GetTransparentBackground()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PictureFormat::SetTransparentBackground(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// FillFormat properties

/////////////////////////////////////////////////////////////////////////////
// FillFormat operations

LPDISPATCH FillFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long FillFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH FillFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void FillFormat::Background()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void FillFormat::OneColorGradient(long Style, long Variant, float Degree)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Variant, Degree);
}

void FillFormat::Patterned(long Pattern)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Pattern);
}

void FillFormat::PresetGradient(long Style, long Variant, long PresetGradientType)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Variant, PresetGradientType);
}

void FillFormat::PresetTextured(long PresetTexture)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PresetTexture);
}

void FillFormat::Solid()
{
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void FillFormat::TwoColorGradient(long Style, long Variant)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Variant);
}

void FillFormat::UserPicture(LPCTSTR PictureFile)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PictureFile);
}

void FillFormat::UserTextured(LPCTSTR TextureFile)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 TextureFile);
}

LPDISPATCH FillFormat::GetBackColor()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void FillFormat::SetBackColor(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH FillFormat::GetForeColor()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void FillFormat::SetForeColor(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long FillFormat::GetGradientColorType()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float FillFormat::GetGradientDegree()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

long FillFormat::GetGradientStyle()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long FillFormat::GetGradientVariant()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long FillFormat::GetPattern()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long FillFormat::GetPresetGradientType()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long FillFormat::GetPresetTexture()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString FillFormat::GetTextureName()
{
	CString result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long FillFormat::GetTextureType()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float FillFormat::GetTransparency()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTransparency(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long FillFormat::GetType()
{
	long result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long FillFormat::GetVisible()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH FillFormat::GetGradientStops()
{
	LPDISPATCH result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float FillFormat::GetTextureOffsetX()
{
	float result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTextureOffsetX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float FillFormat::GetTextureOffsetY()
{
	float result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTextureOffsetY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long FillFormat::GetTextureAlignment()
{
	long result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTextureAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float FillFormat::GetTextureHorizontalScale()
{
	float result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTextureHorizontalScale(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float FillFormat::GetTextureVerticalScale()
{
	float result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTextureVerticalScale(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long FillFormat::GetTextureTile()
{
	long result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetTextureTile(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long FillFormat::GetRotateWithObject()
{
	long result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FillFormat::SetRotateWithObject(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// LineFormat properties

/////////////////////////////////////////////////////////////////////////////
// LineFormat operations

LPDISPATCH LineFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long LineFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH LineFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH LineFormat::GetBackColor()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void LineFormat::SetBackColor(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long LineFormat::GetBeginArrowheadLength()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetBeginArrowheadLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetBeginArrowheadStyle()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetBeginArrowheadStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetBeginArrowheadWidth()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetBeginArrowheadWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetDashStyle()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetDashStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetEndArrowheadLength()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetEndArrowheadLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetEndArrowheadStyle()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetEndArrowheadStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetEndArrowheadWidth()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetEndArrowheadWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH LineFormat::GetForeColor()
{
	LPDISPATCH result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void LineFormat::SetForeColor(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long LineFormat::GetPattern()
{
	long result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetPattern(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LineFormat::GetStyle()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float LineFormat::GetTransparency()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetTransparency(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long LineFormat::GetVisible()
{
	long result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float LineFormat::GetWeight()
{
	float result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetWeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long LineFormat::GetInsetPen()
{
	long result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LineFormat::SetInsetPen(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ShadowFormat properties

/////////////////////////////////////////////////////////////////////////////
// ShadowFormat operations

LPDISPATCH ShadowFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShadowFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShadowFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ShadowFormat::IncrementOffsetX(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ShadowFormat::IncrementOffsetY(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

LPDISPATCH ShadowFormat::GetForeColor()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetForeColor(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ShadowFormat::GetObscured()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetObscured(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ShadowFormat::GetOffsetX()
{
	float result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetOffsetX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ShadowFormat::GetOffsetY()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetOffsetY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ShadowFormat::GetTransparency()
{
	float result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetTransparency(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ShadowFormat::GetType()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ShadowFormat::GetVisible()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ShadowFormat::GetStyle()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ShadowFormat::GetBlur()
{
	float result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetBlur(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ShadowFormat::GetSize()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ShadowFormat::GetRotateWithShape()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ShadowFormat::SetRotateWithShape(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ConnectorFormat properties

/////////////////////////////////////////////////////////////////////////////
// ConnectorFormat operations

LPDISPATCH ConnectorFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ConnectorFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ConnectorFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ConnectorFormat::BeginConnect(LPDISPATCH ConnectedShape, long ConnectionSite)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ConnectedShape, ConnectionSite);
}

void ConnectorFormat::BeginDisconnect()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ConnectorFormat::EndConnect(LPDISPATCH ConnectedShape, long ConnectionSite)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ConnectedShape, ConnectionSite);
}

void ConnectorFormat::EndDisconnect()
{
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long ConnectorFormat::GetBeginConnected()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ConnectorFormat::GetBeginConnectedShape()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ConnectorFormat::GetBeginConnectionSite()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ConnectorFormat::GetEndConnected()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ConnectorFormat::GetEndConnectedShape()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ConnectorFormat::GetEndConnectionSite()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ConnectorFormat::GetType()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ConnectorFormat::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// TextEffectFormat properties

/////////////////////////////////////////////////////////////////////////////
// TextEffectFormat operations

LPDISPATCH TextEffectFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextEffectFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextEffectFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::ToggleVerticalText()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long TextEffectFormat::GetAlignment()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextEffectFormat::GetFontBold()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetFontBold(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextEffectFormat::GetFontItalic()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetFontItalic(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString TextEffectFormat::GetFontName()
{
	CString result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetFontName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

float TextEffectFormat::GetFontSize()
{
	float result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetFontSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long TextEffectFormat::GetKernedPairs()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetKernedPairs(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextEffectFormat::GetNormalizedHeight()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetNormalizedHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextEffectFormat::GetPresetShape()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetPresetShape(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextEffectFormat::GetPresetTextEffect()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetPresetTextEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextEffectFormat::GetRotatedChars()
{
	long result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetRotatedChars(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString TextEffectFormat::GetText()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

float TextEffectFormat::GetTracking()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextEffectFormat::SetTracking(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// ThreeDFormat properties

/////////////////////////////////////////////////////////////////////////////
// ThreeDFormat operations

LPDISPATCH ThreeDFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ThreeDFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ThreeDFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::IncrementRotationX(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ThreeDFormat::IncrementRotationY(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ThreeDFormat::ResetRotation()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ThreeDFormat::SetThreeDFormat(long PresetThreeDFormat)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PresetThreeDFormat);
}

void ThreeDFormat::SetExtrusionDirection(long PresetExtrusionDirection)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PresetExtrusionDirection);
}

float ThreeDFormat::GetDepth()
{
	float result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetDepth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH ThreeDFormat::GetExtrusionColor()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ThreeDFormat::GetExtrusionColorType()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetExtrusionColorType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ThreeDFormat::GetPerspective()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetPerspective(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ThreeDFormat::GetPresetExtrusionDirection()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ThreeDFormat::GetPresetLightingDirection()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetPresetLightingDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ThreeDFormat::GetPresetLightingSoftness()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetPresetLightingSoftness(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ThreeDFormat::GetPresetMaterial()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetPresetMaterial(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ThreeDFormat::GetPresetThreeDFormat()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float ThreeDFormat::GetRotationX()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetRotationX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ThreeDFormat::GetRotationY()
{
	float result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetRotationY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ThreeDFormat::GetVisible()
{
	long result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void ThreeDFormat::SetPresetCamera(long PresetCamera)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PresetCamera);
}

void ThreeDFormat::IncrementRotationZ(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ThreeDFormat::IncrementRotationHorizontal(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

void ThreeDFormat::IncrementRotationVertical(float Increment)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Increment);
}

long ThreeDFormat::GetPresetLighting()
{
	long result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetPresetLighting(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ThreeDFormat::GetZ()
{
	float result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetZ(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ThreeDFormat::GetBevelTopType()
{
	long result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetBevelTopType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ThreeDFormat::GetBevelTopInset()
{
	float result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetBevelTopInset(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ThreeDFormat::GetBevelTopDepth()
{
	float result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetBevelTopDepth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ThreeDFormat::GetBevelBottomType()
{
	long result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetBevelBottomType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ThreeDFormat::GetBevelBottomInset()
{
	float result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetBevelBottomInset(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ThreeDFormat::GetBevelBottomDepth()
{
	float result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetBevelBottomDepth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ThreeDFormat::GetPresetCamera()
{
	long result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float ThreeDFormat::GetRotationZ()
{
	float result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetRotationZ(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ThreeDFormat::GetContourWidth()
{
	float result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetContourWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH ThreeDFormat::GetContourColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float ThreeDFormat::GetFieldOfView()
{
	float result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetFieldOfView(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ThreeDFormat::GetProjectText()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetProjectText(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ThreeDFormat::GetLightAngle()
{
	float result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ThreeDFormat::SetLightAngle(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// TextFrame properties

/////////////////////////////////////////////////////////////////////////////
// TextFrame operations

LPDISPATCH TextFrame::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextFrame::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float TextFrame::GetMarginBottom()
{
	float result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetMarginBottom(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float TextFrame::GetMarginLeft()
{
	float result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetMarginLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float TextFrame::GetMarginRight()
{
	float result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetMarginRight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float TextFrame::GetMarginTop()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetMarginTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long TextFrame::GetOrientation()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame::GetHasText()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame::GetTextRange()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame::GetRuler()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextFrame::GetHorizontalAnchor()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetHorizontalAnchor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame::GetVerticalAnchor()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetVerticalAnchor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame::GetAutoSize()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetAutoSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame::GetWordWrap()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void TextFrame::DeleteText()
{
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CalloutFormat properties

/////////////////////////////////////////////////////////////////////////////
// CalloutFormat operations

LPDISPATCH CalloutFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long CalloutFormat::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CalloutFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void CalloutFormat::AutomaticLength()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CalloutFormat::CustomDrop(float Drop)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Drop);
}

void CalloutFormat::CustomLength(float Length)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Length);
}

void CalloutFormat::PresetDrop(long DropType)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DropType);
}

long CalloutFormat::GetAccent()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CalloutFormat::SetAccent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CalloutFormat::GetAngle()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CalloutFormat::SetAngle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CalloutFormat::GetAutoAttach()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CalloutFormat::SetAutoAttach(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CalloutFormat::GetAutoLength()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CalloutFormat::GetBorder()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CalloutFormat::SetBorder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float CalloutFormat::GetDrop()
{
	float result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

long CalloutFormat::GetDropType()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float CalloutFormat::GetGap()
{
	float result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CalloutFormat::SetGap(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float CalloutFormat::GetLength()
{
	float result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

long CalloutFormat::GetType()
{
	long result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CalloutFormat::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ShapeNodes properties

/////////////////////////////////////////////////////////////////////////////
// ShapeNodes operations

LPDISPATCH ShapeNodes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeNodes::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeNodes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeNodes::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeNodes::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN ShapeNodes::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void ShapeNodes::Delete(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

void ShapeNodes::Insert(long Index, long SegmentType, long EditingType, float X1, float Y1, float X2, float Y2, float X3, float Y3)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index, SegmentType, EditingType, X1, Y1, X2, Y2, X3, Y3);
}

void ShapeNodes::SetEditingType(long Index, long EditingType)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index, EditingType);
}

void ShapeNodes::SetPosition(long Index, float X1, float Y1)
{
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index, X1, Y1);
}

void ShapeNodes::SetSegmentType(long Index, long SegmentType)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index, SegmentType);
}


/////////////////////////////////////////////////////////////////////////////
// ShapeNode properties

/////////////////////////////////////////////////////////////////////////////
// ShapeNode operations

LPDISPATCH ShapeNode::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeNode::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ShapeNode::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ShapeNode::GetEditingType()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT ShapeNode::GetPoints()
{
	VARIANT result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long ShapeNode::GetSegmentType()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// OLEFormat properties

/////////////////////////////////////////////////////////////////////////////
// OLEFormat operations

LPDISPATCH OLEFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH OLEFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH OLEFormat::GetObjectVerbs()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH OLEFormat::GetObject()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString OLEFormat::GetProgID()
{
	CString result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long OLEFormat::GetFollowColors()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void OLEFormat::SetFollowColors(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void OLEFormat::DoVerb(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

void OLEFormat::Activate()
{
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// LinkFormat properties

/////////////////////////////////////////////////////////////////////////////
// LinkFormat operations

LPDISPATCH LinkFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH LinkFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString LinkFormat::GetSourceFullName()
{
	CString result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void LinkFormat::SetSourceFullName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long LinkFormat::GetAutoUpdate()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LinkFormat::SetAutoUpdate(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void LinkFormat::Update()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void LinkFormat::BreakLink()
{
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// ObjectVerbs properties

/////////////////////////////////////////////////////////////////////////////
// ObjectVerbs operations

long ObjectVerbs::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ObjectVerbs::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ObjectVerbs::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ObjectVerbs::Item(long Index)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// AnimationSettings properties

/////////////////////////////////////////////////////////////////////////////
// AnimationSettings operations

LPDISPATCH AnimationSettings::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationSettings::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationSettings::GetDimColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationSettings::GetSoundEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long AnimationSettings::GetEntryEffect()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetEntryEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetAfterEffect()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAfterEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetAnimationOrder()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAnimationOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetAdvanceMode()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAdvanceMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float AnimationSettings::GetAdvanceTime()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAdvanceTime(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH AnimationSettings::GetPlaySettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long AnimationSettings::GetTextLevelEffect()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetTextLevelEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetTextUnitEffect()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetTextUnitEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetAnimate()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAnimate(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetAnimateBackground()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAnimateBackground(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetAnimateTextInReverse()
{
	long result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetAnimateTextInReverse(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationSettings::GetChartUnitEffect()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationSettings::SetChartUnitEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ActionSettings properties

/////////////////////////////////////////////////////////////////////////////
// ActionSettings operations

long ActionSettings::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ActionSettings::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ActionSettings::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ActionSettings::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ActionSetting properties

/////////////////////////////////////////////////////////////////////////////
// ActionSetting operations

LPDISPATCH ActionSetting::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ActionSetting::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ActionSetting::GetAction()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ActionSetting::SetAction(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString ActionSetting::GetActionVerb()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ActionSetting::SetActionVerb(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long ActionSetting::GetAnimateAction()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ActionSetting::SetAnimateAction(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString ActionSetting::GetRun()
{
	CString result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ActionSetting::SetRun(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString ActionSetting::GetSlideShowName()
{
	CString result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ActionSetting::SetSlideShowName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH ActionSetting::GetHyperlink()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ActionSetting::GetSoundEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ActionSetting::GetShowAndReturn()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ActionSetting::SetShowAndReturn(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// PlaySettings properties

/////////////////////////////////////////////////////////////////////////////
// PlaySettings operations

LPDISPATCH PlaySettings::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PlaySettings::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString PlaySettings::GetActionVerb()
{
	CString result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetActionVerb(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long PlaySettings::GetHideWhileNotPlaying()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetHideWhileNotPlaying(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PlaySettings::GetLoopUntilStopped()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetLoopUntilStopped(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PlaySettings::GetPlayOnEntry()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetPlayOnEntry(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PlaySettings::GetRewindMovie()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetRewindMovie(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PlaySettings::GetPauseAnimation()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetPauseAnimation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PlaySettings::GetStopAfterSlides()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlaySettings::SetStopAfterSlides(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// TextRange properties

/////////////////////////////////////////////////////////////////////////////
// TextRange operations

long TextRange::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextRange::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextRange::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextRange::GetActionSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextRange::GetStart()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long TextRange::GetLength()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float TextRange::GetBoundLeft()
{
	float result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float TextRange::GetBoundTop()
{
	float result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float TextRange::GetBoundWidth()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float TextRange::GetBoundHeight()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextRange::Paragraphs(long Start, long Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, Length);
	return result;
}

LPDISPATCH TextRange::Sentences(long Start, long Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, Length);
	return result;
}

LPDISPATCH TextRange::Words(long Start, long Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, Length);
	return result;
}

LPDISPATCH TextRange::Characters(long Start, long Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, Length);
	return result;
}

LPDISPATCH TextRange::Lines(long Start, long Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, Length);
	return result;
}

LPDISPATCH TextRange::Runs(long Start, long Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7df, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, Length);
	return result;
}

LPDISPATCH TextRange::TrimText()
{
	LPDISPATCH result;
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString TextRange::GetText()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void TextRange::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH TextRange::InsertAfter(LPCTSTR NewText)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		NewText);
	return result;
}

LPDISPATCH TextRange::InsertBefore(LPCTSTR NewText)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		NewText);
	return result;
}

LPDISPATCH TextRange::InsertDateTime(long DateTimeFormat, long InsertAsField)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DateTimeFormat, InsertAsField);
	return result;
}

LPDISPATCH TextRange::InsertSlideNumber()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextRange::InsertSymbol(LPCTSTR FontName, long CharNumber, long Unicode)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FontName, CharNumber, Unicode);
	return result;
}

LPDISPATCH TextRange::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextRange::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextRange::GetIndentLevel()
{
	long result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextRange::SetIndentLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void TextRange::Select()
{
	InvokeHelper(0x7e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void TextRange::Cut()
{
	InvokeHelper(0x7ea, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void TextRange::Copy()
{
	InvokeHelper(0x7eb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void TextRange::Delete()
{
	InvokeHelper(0x7ec, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH TextRange::Paste()
{
	LPDISPATCH result;
	InvokeHelper(0x7ed, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void TextRange::ChangeCase(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ee, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void TextRange::AddPeriods()
{
	InvokeHelper(0x7ef, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void TextRange::RemovePeriods()
{
	InvokeHelper(0x7f0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH TextRange::Find(LPCTSTR FindWhat, long After, long MatchCase, long WholeWords)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7f1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FindWhat, After, MatchCase, WholeWords);
	return result;
}

LPDISPATCH TextRange::Replace(LPCTSTR FindWhat, LPCTSTR ReplaceWhat, long After, long MatchCase, long WholeWords)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7f2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FindWhat, ReplaceWhat, After, MatchCase, WholeWords);
	return result;
}

void TextRange::RotatedBounds(float* X1, float* Y1, float* X2, float* Y2, float* X3, float* Y3, float* x4, float* y4)
{
	static BYTE parms[] =
		VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4;
	InvokeHelper(0x7f3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 X1, Y1, X2, Y2, X3, Y3, x4, y4);
}

long TextRange::GetLanguageID()
{
	long result;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextRange::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void TextRange::RtlRun()
{
	InvokeHelper(0x7f5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void TextRange::LtrRun()
{
	InvokeHelper(0x7f6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH TextRange::PasteSpecial(long DataType, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0x7f7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DataType, DisplayAsIcon, IconFileName, IconIndex, IconLabel, Link);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Ruler properties

/////////////////////////////////////////////////////////////////////////////
// Ruler operations

LPDISPATCH Ruler::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Ruler::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Ruler::GetTabStops()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Ruler::GetLevels()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// RulerLevels properties

/////////////////////////////////////////////////////////////////////////////
// RulerLevels operations

long RulerLevels::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH RulerLevels::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH RulerLevels::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH RulerLevels::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// RulerLevel properties

/////////////////////////////////////////////////////////////////////////////
// RulerLevel operations

LPDISPATCH RulerLevel::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH RulerLevel::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float RulerLevel::GetFirstMargin()
{
	float result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void RulerLevel::SetFirstMargin(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float RulerLevel::GetLeftMargin()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void RulerLevel::SetLeftMargin(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// TabStops properties

/////////////////////////////////////////////////////////////////////////////
// TabStops operations

long TabStops::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TabStops::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TabStops::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TabStops::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

float TabStops::GetDefaultSpacing()
{
	float result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TabStops::SetDefaultSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH TabStops::Add(long Type, float Position)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Position);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TabStop properties

/////////////////////////////////////////////////////////////////////////////
// TabStop operations

LPDISPATCH TabStop::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TabStop::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TabStop::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TabStop::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float TabStop::GetPosition()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TabStop::SetPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void TabStop::Clear()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Font properties

/////////////////////////////////////////////////////////////////////////////
// Font operations

LPDISPATCH Font::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Font::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Font::GetColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Font::GetBold()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetBold(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Font::GetItalic()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetItalic(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Font::GetShadow()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetShadow(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Font::GetEmboss()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetEmboss(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Font::GetUnderline()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetUnderline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Font::GetSubscript()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetSubscript(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Font::GetSuperscript()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetSuperscript(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Font::GetBaselineOffset()
{
	float result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Font::SetBaselineOffset(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Font::GetEmbedded()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Font::GetEmbeddable()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Font::GetSize()
{
	float result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Font::SetSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString Font::GetName()
{
	CString result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Font::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Font::GetNameFarEast()
{
	CString result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Font::SetNameFarEast(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Font::GetNameAscii()
{
	CString result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Font::SetNameAscii(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Font::GetAutoRotateNumbers()
{
	long result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Font::SetAutoRotateNumbers(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Font::GetNameOther()
{
	CString result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Font::SetNameOther(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Font::GetNameComplexScript()
{
	CString result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Font::SetNameComplexScript(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ParagraphFormat properties

/////////////////////////////////////////////////////////////////////////////
// ParagraphFormat operations

LPDISPATCH ParagraphFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ParagraphFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ParagraphFormat::GetAlignment()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH ParagraphFormat::GetBullet()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ParagraphFormat::GetLineRuleBefore()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetLineRuleBefore(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ParagraphFormat::GetLineRuleAfter()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetLineRuleAfter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ParagraphFormat::GetLineRuleWithin()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetLineRuleWithin(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float ParagraphFormat::GetSpaceBefore()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetSpaceBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ParagraphFormat::GetSpaceAfter()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetSpaceAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ParagraphFormat::GetSpaceWithin()
{
	float result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetSpaceWithin(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long ParagraphFormat::GetBaseLineAlignment()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetBaseLineAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ParagraphFormat::GetFarEastLineBreakControl()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetFarEastLineBreakControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ParagraphFormat::GetWordWrap()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ParagraphFormat::GetHangingPunctuation()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetHangingPunctuation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ParagraphFormat::GetTextDirection()
{
	long result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ParagraphFormat::SetTextDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// BulletFormat properties

/////////////////////////////////////////////////////////////////////////////
// BulletFormat operations

LPDISPATCH BulletFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH BulletFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long BulletFormat::GetCharacter()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetCharacter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float BulletFormat::GetRelativeSize()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetRelativeSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long BulletFormat::GetUseTextColor()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetUseTextColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long BulletFormat::GetUseTextFont()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetUseTextFont(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH BulletFormat::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long BulletFormat::GetType()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long BulletFormat::GetStyle()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long BulletFormat::GetStartValue()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void BulletFormat::SetStartValue(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void BulletFormat::Picture(LPCTSTR Picture)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Picture);
}

long BulletFormat::GetNumber()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TextStyles properties

/////////////////////////////////////////////////////////////////////////////
// TextStyles operations

long TextStyles::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyles::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyles::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyles::Item(long Type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TextStyle properties

/////////////////////////////////////////////////////////////////////////////
// TextStyle operations

LPDISPATCH TextStyle::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyle::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyle::GetRuler()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyle::GetTextFrame()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyle::GetLevels()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TextStyleLevels properties

/////////////////////////////////////////////////////////////////////////////
// TextStyleLevels operations

long TextStyleLevels::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyleLevels::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyleLevels::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyleLevels::Item(long Level)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Level);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TextStyleLevel properties

/////////////////////////////////////////////////////////////////////////////
// TextStyleLevel operations

LPDISPATCH TextStyleLevel::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyleLevel::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyleLevel::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextStyleLevel::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HeaderFooter properties

/////////////////////////////////////////////////////////////////////////////
// HeaderFooter operations

LPDISPATCH HeaderFooter::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeaderFooter::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HeaderFooter::GetVisible()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void HeaderFooter::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString HeaderFooter::GetText()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void HeaderFooter::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long HeaderFooter::GetUseFormat()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void HeaderFooter::SetUseFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long HeaderFooter::GetFormat()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void HeaderFooter::SetFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// _Presentation properties

/////////////////////////////////////////////////////////////////////////////
// _Presentation operations

LPDISPATCH _Presentation::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetSlideMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetTitleMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Presentation::GetHasTitleMaster()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::AddTitleMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::ApplyTemplate(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

CString _Presentation::GetTemplateName()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetNotesMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetHandoutMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetSlides()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetColorSchemes()
{
	LPDISPATCH result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetExtraColors()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetSlideShowSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetFonts()
{
	LPDISPATCH result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetTags()
{
	LPDISPATCH result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetDefaultShape()
{
	LPDISPATCH result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetBuiltInDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetCustomDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetVBProject()
{
	LPDISPATCH result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Presentation::GetReadOnly()
{
	long result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString _Presentation::GetFullName()
{
	CString result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Presentation::GetName()
{
	CString result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Presentation::GetPath()
{
	CString result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long _Presentation::GetSaved()
{
	long result;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetSaved(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Presentation::GetLayoutDirection()
{
	long result;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetLayoutDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Presentation::NewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x7ed, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::FollowHyperlink(LPCTSTR Address, LPCTSTR SubAddress, BOOL NewWindow, BOOL AddHistory, LPCTSTR ExtraInfo, long Method, LPCTSTR HeaderInfo)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL VTS_BOOL VTS_BSTR VTS_I4 VTS_BSTR;
	InvokeHelper(0x7ee, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Address, SubAddress, NewWindow, AddHistory, ExtraInfo, Method, HeaderInfo);
}

void _Presentation::AddToFavorites()
{
	InvokeHelper(0x7ef, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Presentation::GetPrintOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x7f1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::PrintOut(long From, long To, LPCTSTR PrintToFile, long Copies, long Collate)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7f2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 From, To, PrintToFile, Copies, Collate);
}

void _Presentation::Save()
{
	InvokeHelper(0x7f3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Presentation::SaveAs(LPCTSTR FileName, long FileFormat, long EmbedTrueTypeFonts)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7f4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, FileFormat, EmbedTrueTypeFonts);
}

void _Presentation::SaveCopyAs(LPCTSTR FileName, long FileFormat, long EmbedTrueTypeFonts)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7f5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, FileFormat, EmbedTrueTypeFonts);
}

void _Presentation::Export(LPCTSTR Path, LPCTSTR FilterName, long ScaleWidth, long ScaleHeight)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7f6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Path, FilterName, ScaleWidth, ScaleHeight);
}

void _Presentation::Close()
{
	InvokeHelper(0x7f7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Presentation::GetContainer()
{
	LPDISPATCH result;
	InvokeHelper(0x7f9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Presentation::GetDisplayComments()
{
	long result;
	InvokeHelper(0x7fa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetDisplayComments(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Presentation::GetFarEastLineBreakLevel()
{
	long result;
	InvokeHelper(0x7fb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetFarEastLineBreakLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _Presentation::GetNoLineBreakBefore()
{
	CString result;
	InvokeHelper(0x7fc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Presentation::SetNoLineBreakBefore(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7fc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Presentation::GetNoLineBreakAfter()
{
	CString result;
	InvokeHelper(0x7fd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Presentation::SetNoLineBreakAfter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7fd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Presentation::UpdateLinks()
{
	InvokeHelper(0x7fe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Presentation::GetSlideShowWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x7ff, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Presentation::GetFarEastLineBreakLanguage()
{
	long result;
	InvokeHelper(0x800, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetFarEastLineBreakLanguage(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x800, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _Presentation::WebPagePreview()
{
	InvokeHelper(0x801, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Presentation::GetDefaultLanguageID()
{
	long result;
	InvokeHelper(0x802, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetDefaultLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x802, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Presentation::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x803, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetPublishObjects()
{
	LPDISPATCH result;
	InvokeHelper(0x804, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x805, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::ReloadAs(long cp)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x807, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 cp);
}

long _Presentation::GetEnvelopeVisible()
{
	long result;
	InvokeHelper(0x809, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetEnvelopeVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x809, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Presentation::GetVBASigned()
{
	long result;
	InvokeHelper(0x80b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Presentation::GetSnapToGrid()
{
	long result;
	InvokeHelper(0x80d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetSnapToGrid(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x80d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Presentation::GetGridDistance()
{
	float result;
	InvokeHelper(0x80e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetGridDistance(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Presentation::GetDesigns()
{
	LPDISPATCH result;
	InvokeHelper(0x80f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::CheckIn(BOOL SaveChanges, const VARIANT& Comments, const VARIANT& MakePublic)
{
	static BYTE parms[] =
		VTS_BOOL VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x811, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, &Comments, &MakePublic);
}

BOOL _Presentation::CanCheckIn()
{
	BOOL result;
	InvokeHelper(0x812, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetSignatures()
{
	LPDISPATCH result;
	InvokeHelper(0x813, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Presentation::GetRemovePersonalInformation()
{
	long result;
	InvokeHelper(0x814, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Presentation::SetRemovePersonalInformation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x814, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _Presentation::GetPasswordEncryptionProvider()
{
	CString result;
	InvokeHelper(0x81b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Presentation::GetPasswordEncryptionAlgorithm()
{
	CString result;
	InvokeHelper(0x81c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long _Presentation::GetPasswordEncryptionKeyLength()
{
	long result;
	InvokeHelper(0x81d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Presentation::GetPasswordEncryptionFileProperties()
{
	BOOL result;
	InvokeHelper(0x81e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Presentation::SetPasswordEncryptionOptions(LPCTSTR PasswordEncryptionProvider, LPCTSTR PasswordEncryptionAlgorithm, long PasswordEncryptionKeyLength, BOOL PasswordEncryptionFileProperties)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_BOOL;
	InvokeHelper(0x81f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PasswordEncryptionProvider, PasswordEncryptionAlgorithm, PasswordEncryptionKeyLength, PasswordEncryptionFileProperties);
}

CString _Presentation::GetPassword()
{
	CString result;
	InvokeHelper(0x820, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Presentation::SetPassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x820, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Presentation::GetWritePassword()
{
	CString result;
	InvokeHelper(0x821, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Presentation::SetWritePassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x821, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Presentation::GetPermission()
{
	LPDISPATCH result;
	InvokeHelper(0x822, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetSharedWorkspace()
{
	LPDISPATCH result;
	InvokeHelper(0x823, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetSync()
{
	LPDISPATCH result;
	InvokeHelper(0x824, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::SendFaxOverInternet(LPCTSTR Recipients, LPCTSTR Subject, BOOL ShowMessage)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x825, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Recipients, Subject, ShowMessage);
}

LPDISPATCH _Presentation::GetDocumentLibraryVersions()
{
	LPDISPATCH result;
	InvokeHelper(0x826, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetContentTypeProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x827, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::RemoveDocumentInformation(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x82e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void _Presentation::CheckInWithVersion(BOOL SaveChanges, const VARIANT& Comments, const VARIANT& MakePublic, const VARIANT& VersionType)
{
	static BYTE parms[] =
		VTS_BOOL VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x82f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, &Comments, &MakePublic, &VersionType);
}

void _Presentation::ExportAsFixedFormat(LPCTSTR Path, long FixedFormatType, long Intent, long FrameSlides, long HandoutOrder, long OutputType, long PrintHiddenSlides, LPDISPATCH PrintRange, long RangeType, LPCTSTR SlideShowName, BOOL IncludeDocProperties, 
		BOOL KeepIRMSettings, BOOL DocStructureTags, BOOL BitmapMissingFonts, BOOL UseISO19005_1, const VARIANT& ExternalExporter)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_DISPATCH VTS_I4 VTS_BSTR VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_VARIANT;
	InvokeHelper(0x830, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Path, FixedFormatType, Intent, FrameSlides, HandoutOrder, OutputType, PrintHiddenSlides, PrintRange, RangeType, SlideShowName, IncludeDocProperties, KeepIRMSettings, DocStructureTags, BitmapMissingFonts, UseISO19005_1, &ExternalExporter);
}

LPDISPATCH _Presentation::GetServerPolicy()
{
	LPDISPATCH result;
	InvokeHelper(0x831, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetWorkflowTasks()
{
	LPDISPATCH result;
	InvokeHelper(0x832, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetWorkflowTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x833, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::LockServerFile()
{
	InvokeHelper(0x834, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Presentation::GetDocumentInspectors()
{
	LPDISPATCH result;
	InvokeHelper(0x835, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Presentation::GetHasVBProject()
{
	BOOL result;
	InvokeHelper(0x836, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetCustomXMLParts()
{
	LPDISPATCH result;
	InvokeHelper(0x837, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Presentation::GetFinal()
{
	BOOL result;
	InvokeHelper(0x838, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Presentation::SetFinal(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x838, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Presentation::ApplyTheme(LPCTSTR themeName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x839, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 themeName);
}

LPDISPATCH _Presentation::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x83a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Presentation::GetResearch()
{
	LPDISPATCH result;
	InvokeHelper(0x83b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Presentation::PublishSlides(LPCTSTR SlideLibraryUrl, BOOL Overwrite, BOOL UseSlideOrder)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x83c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SlideLibraryUrl, Overwrite, UseSlideOrder);
}

CString _Presentation::GetEncryptionProvider()
{
	CString result;
	InvokeHelper(0x83d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Presentation::SetEncryptionProvider(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x83d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Presentation::Convert()
{
	InvokeHelper(0x83e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Tags properties

/////////////////////////////////////////////////////////////////////////////
// Tags operations

long Tags::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tags::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tags::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Tags::Item(LPCTSTR Name)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Name);
	return result;
}

void Tags::Add(LPCTSTR Name, LPCTSTR Value)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, Value);
}

void Tags::Delete(LPCTSTR Name)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name);
}

CString Tags::Name(long Index)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Index);
	return result;
}

CString Tags::Value(long Index)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// OCXExtender properties

/////////////////////////////////////////////////////////////////////////////
// OCXExtender operations

BOOL OCXExtender::GetVisible()
{
	BOOL result;
	InvokeHelper(0x80010007, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void OCXExtender::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x80010007, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float OCXExtender::GetLeft()
{
	float result;
	InvokeHelper(0x80010003, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void OCXExtender::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80010003, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float OCXExtender::GetTop()
{
	float result;
	InvokeHelper(0x80010004, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void OCXExtender::SetTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80010004, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float OCXExtender::GetHeight()
{
	float result;
	InvokeHelper(0x80010005, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void OCXExtender::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80010005, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float OCXExtender::GetWidth()
{
	float result;
	InvokeHelper(0x80010006, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void OCXExtender::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80010006, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long OCXExtender::GetZOrderPosition()
{
	long result;
	InvokeHelper(0x800100e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString OCXExtender::GetName()
{
	CString result;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void OCXExtender::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Table properties

/////////////////////////////////////////////////////////////////////////////
// Table operations

LPDISPATCH Table::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::Cell(long Row, long Column)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Row, Column);
	return result;
}

long Table::GetTableDirection()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::SetTableDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Table::GetFirstRow()
{
	BOOL result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetFirstRow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetLastRow()
{
	BOOL result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetLastRow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetFirstCol()
{
	BOOL result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetFirstCol(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetLastCol()
{
	BOOL result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetLastCol(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetHorizBanding()
{
	BOOL result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetHorizBanding(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetVertBanding()
{
	BOOL result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetVertBanding(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Table::GetStyle()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Table::ScaleProportionally(float scale)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 scale);
}

void Table::ApplyStyle(LPCTSTR StyleID, BOOL SaveFormatting)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 StyleID, SaveFormatting);
}


/////////////////////////////////////////////////////////////////////////////
// Columns properties

/////////////////////////////////////////////////////////////////////////////
// Columns operations

long Columns::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Columns::Add(long BeforeColumn)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeColumn);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Column properties

/////////////////////////////////////////////////////////////////////////////
// Column operations

LPDISPATCH Column::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Column::Select()
{
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Column::Delete()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float Column::GetWidth()
{
	float result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Column::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// Rows properties

/////////////////////////////////////////////////////////////////////////////
// Rows operations

long Rows::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Rows::Add(long BeforeRow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeRow);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Row properties

/////////////////////////////////////////////////////////////////////////////
// Row operations

LPDISPATCH Row::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Row::Select()
{
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Row::Delete()
{
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float Row::GetHeight()
{
	float result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// CellRange properties

/////////////////////////////////////////////////////////////////////////////
// CellRange operations

long CellRange::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CellRange::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CellRange::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CellRange::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH CellRange::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Cell properties

/////////////////////////////////////////////////////////////////////////////
// Cell operations

LPDISPATCH Cell::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetShape()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Cell::Merge(LPDISPATCH MergeTo)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 MergeTo);
}

void Cell::Split(long NumRows, long NumColumns)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows, NumColumns);
}

void Cell::Select()
{
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL Cell::GetSelected()
{
	BOOL result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Borders properties

/////////////////////////////////////////////////////////////////////////////
// Borders operations

long Borders::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Borders::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Borders::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Borders::Item(long BorderType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BorderType);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Panes properties

/////////////////////////////////////////////////////////////////////////////
// Panes operations

long Panes::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Panes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Panes::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Panes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Pane properties

/////////////////////////////////////////////////////////////////////////////
// Pane operations

LPDISPATCH Pane::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Pane::Activate()
{
	InvokeHelper(0x7d1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Pane::GetActive()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Pane::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Pane::GetViewType()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DefaultWebOptions properties

/////////////////////////////////////////////////////////////////////////////
// DefaultWebOptions operations

long DefaultWebOptions::GetIncludeNavigation()
{
	long result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetIncludeNavigation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetFrameColors()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetFrameColors(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetResizeGraphics()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetResizeGraphics(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetShowSlideAnimation()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetShowSlideAnimation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetOrganizeInFolder()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetOrganizeInFolder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetUseLongFileNames()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetUseLongFileNames(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetRelyOnVML()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetRelyOnVML(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetAllowPNG()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetAllowPNG(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetScreenSize()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetScreenSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetEncoding()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetUpdateLinksOnSave()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetUpdateLinksOnSave(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetCheckIfOfficeIsHTMLEditor()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetCheckIfOfficeIsHTMLEditor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetAlwaysSaveInDefaultEncoding()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetAlwaysSaveInDefaultEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH DefaultWebOptions::GetFonts()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DefaultWebOptions::GetFolderSuffix()
{
	CString result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long DefaultWebOptions::GetTargetBrowser()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetTargetBrowser(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetSaveNewWebPagesAsWebArchives()
{
	long result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetSaveNewWebPagesAsWebArchives(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long DefaultWebOptions::GetHTMLVersion()
{
	long result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DefaultWebOptions::SetHTMLVersion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// WebOptions properties

/////////////////////////////////////////////////////////////////////////////
// WebOptions operations

long WebOptions::GetIncludeNavigation()
{
	long result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetIncludeNavigation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetFrameColors()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetFrameColors(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetResizeGraphics()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetResizeGraphics(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetShowSlideAnimation()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetShowSlideAnimation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetOrganizeInFolder()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetOrganizeInFolder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetUseLongFileNames()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetUseLongFileNames(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetRelyOnVML()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetRelyOnVML(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetAllowPNG()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetAllowPNG(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetScreenSize()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetScreenSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetEncoding()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString WebOptions::GetFolderSuffix()
{
	CString result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WebOptions::UseDefaultFolderSuffix()
{
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long WebOptions::GetTargetBrowser()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetTargetBrowser(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WebOptions::GetHTMLVersion()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WebOptions::SetHTMLVersion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// PublishObjects properties

/////////////////////////////////////////////////////////////////////////////
// PublishObjects operations

long PublishObjects::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH PublishObjects::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PublishObjects::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PublishObjects::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// PublishObject properties

/////////////////////////////////////////////////////////////////////////////
// PublishObject operations

LPDISPATCH PublishObject::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PublishObject::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PublishObject::GetHTMLVersion()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PublishObject::SetHTMLVersion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PublishObject::GetSourceType()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PublishObject::SetSourceType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PublishObject::GetRangeStart()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PublishObject::SetRangeStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long PublishObject::GetRangeEnd()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PublishObject::SetRangeEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString PublishObject::GetSlideShowName()
{
	CString result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void PublishObject::SetSlideShowName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long PublishObject::GetSpeakerNotes()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PublishObject::SetSpeakerNotes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString PublishObject::GetFileName()
{
	CString result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void PublishObject::SetFileName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void PublishObject::Publish()
{
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// _PowerRex properties

/////////////////////////////////////////////////////////////////////////////
// _PowerRex operations


/////////////////////////////////////////////////////////////////////////////
// Comments properties

/////////////////////////////////////////////////////////////////////////////
// Comments operations

long Comments::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Comments::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Comments::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Comments::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Comments::Add(float Left, float Top, LPCTSTR Author, LPCTSTR AuthorInitials, LPCTSTR Text)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Left, Top, Author, AuthorInitials, Text);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Comment properties

/////////////////////////////////////////////////////////////////////////////
// Comment operations

LPDISPATCH Comment::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Comment::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Comment::GetAuthor()
{
	CString result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Comment::GetAuthorInitials()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Comment::GetText()
{
	CString result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

DATE Comment::GetDateTime()
{
	DATE result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

long Comment::GetAuthorIndex()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Comment::GetLeft()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float Comment::GetTop()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Comment::Delete()
{
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Designs properties

/////////////////////////////////////////////////////////////////////////////
// Designs operations

long Designs::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Designs::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Designs::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Designs::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH Designs::Add(LPCTSTR designName, long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		designName, Index);
	return result;
}

LPDISPATCH Designs::Load(LPCTSTR TemplateName, long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		TemplateName, Index);
	return result;
}

LPDISPATCH Designs::Clone(LPDISPATCH pOriginal, long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		pOriginal, Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Design properties

/////////////////////////////////////////////////////////////////////////////
// Design operations

LPDISPATCH Design::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Design::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Design::GetSlideMaster()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Design::GetIndex()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString Design::GetName()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Design::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Design::GetPreserved()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Design::SetPreserved(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Design::MoveTo(long toPos)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 toPos);
}

void Design::Delete()
{
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// DiagramNode properties

/////////////////////////////////////////////////////////////////////////////
// DiagramNode operations

LPDISPATCH DiagramNode::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DiagramNode::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::AddNode(long Pos, long NodeType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Pos, NodeType);
	return result;
}

void DiagramNode::Delete()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void DiagramNode::MoveNode(LPDISPATCH TargetNode, long Pos)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 TargetNode, Pos);
}

void DiagramNode::ReplaceNode(LPDISPATCH TargetNode)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 TargetNode);
}

void DiagramNode::SwapNode(LPDISPATCH TargetNode, BOOL SwapChildren)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 TargetNode, SwapChildren);
}

LPDISPATCH DiagramNode::CloneNode(BOOL CopyChildren, LPDISPATCH TargetNode, long Pos)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BOOL VTS_DISPATCH VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		CopyChildren, TargetNode, Pos);
	return result;
}

void DiagramNode::TransferChildren(LPDISPATCH ReceivingNode)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ReceivingNode);
}

LPDISPATCH DiagramNode::NextNode()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::PrevNode()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::GetChildren()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::GetShape()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::GetRoot()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNode::GetDiagram()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DiagramNode::GetLayout()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DiagramNode::SetLayout(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH DiagramNode::GetTextShape()
{
	LPDISPATCH result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DiagramNodeChildren properties

/////////////////////////////////////////////////////////////////////////////
// DiagramNodeChildren operations

LPDISPATCH DiagramNodeChildren::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DiagramNodeChildren::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPUNKNOWN DiagramNodeChildren::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNodeChildren::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH DiagramNodeChildren::AddNode(const VARIANT& Index, long NodeType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index, NodeType);
	return result;
}

void DiagramNodeChildren::SelectAll()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH DiagramNodeChildren::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DiagramNodeChildren::GetCount()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNodeChildren::GetFirstChild()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNodeChildren::GetLastChild()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DiagramNodes properties

/////////////////////////////////////////////////////////////////////////////
// DiagramNodes operations

LPDISPATCH DiagramNodes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DiagramNodes::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPUNKNOWN DiagramNodes::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH DiagramNodes::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void DiagramNodes::SelectAll()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH DiagramNodes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DiagramNodes::GetCount()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Diagram properties

/////////////////////////////////////////////////////////////////////////////
// Diagram operations

LPDISPATCH Diagram::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Diagram::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Diagram::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Diagram::GetNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Diagram::GetType()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Diagram::GetAutoLayout()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Diagram::SetAutoLayout(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Diagram::GetReverse()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Diagram::SetReverse(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Diagram::GetAutoFormat()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Diagram::SetAutoFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Diagram::Convert(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void Diagram::FitText()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// TimeLine properties

/////////////////////////////////////////////////////////////////////////////
// TimeLine operations

LPDISPATCH TimeLine::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TimeLine::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TimeLine::GetMainSequence()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TimeLine::GetInteractiveSequences()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Sequences properties

/////////////////////////////////////////////////////////////////////////////
// Sequences operations

long Sequences::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sequences::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sequences::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sequences::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Sequences::Add(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Sequence properties

/////////////////////////////////////////////////////////////////////////////
// Sequence operations

long Sequence::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sequence::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sequence::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sequence::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Sequence::AddEffect(LPDISPATCH Shape, long effectId, long Level, long trigger, long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Shape, effectId, Level, trigger, Index);
	return result;
}

LPDISPATCH Sequence::Clone(LPDISPATCH Effect, long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Effect, Index);
	return result;
}

LPDISPATCH Sequence::FindFirstAnimationFor(LPDISPATCH Shape)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Shape);
	return result;
}

LPDISPATCH Sequence::FindFirstAnimationForClick(long click)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		click);
	return result;
}

LPDISPATCH Sequence::ConvertToBuildLevel(LPDISPATCH Effect, long Level)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Effect, Level);
	return result;
}

LPDISPATCH Sequence::ConvertToAfterEffect(LPDISPATCH Effect, long After, long DimColor, long DimSchemeColor)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Effect, After, DimColor, DimSchemeColor);
	return result;
}

LPDISPATCH Sequence::ConvertToAnimateBackground(LPDISPATCH Effect, long AnimateBackground)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Effect, AnimateBackground);
	return result;
}

LPDISPATCH Sequence::ConvertToAnimateInReverse(LPDISPATCH Effect, long animateInReverse)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Effect, animateInReverse);
	return result;
}

LPDISPATCH Sequence::ConvertToTextUnitEffect(LPDISPATCH Effect, long unitEffect)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x7db, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Effect, unitEffect);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Effect properties

/////////////////////////////////////////////////////////////////////////////
// Effect operations

LPDISPATCH Effect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Effect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Effect::GetShape()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Effect::SetShape(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void Effect::MoveTo(long toPos)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 toPos);
}

void Effect::MoveBefore(LPDISPATCH Effect)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Effect);
}

void Effect::MoveAfter(LPDISPATCH Effect)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Effect);
}

void Effect::Delete()
{
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Effect::GetIndex()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Effect::GetTiming()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Effect::GetEffectType()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Effect::SetEffectType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Effect::GetEffectParameters()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Effect::GetTextRangeStart()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Effect::GetTextRangeLength()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Effect::GetParagraph()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Effect::SetParagraph(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Effect::GetDisplayName()
{
	CString result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Effect::GetExit()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Effect::SetExit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Effect::GetBehaviors()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Effect::GetEffectInformation()
{
	LPDISPATCH result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Timing properties

/////////////////////////////////////////////////////////////////////////////
// Timing operations

LPDISPATCH Timing::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Timing::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Timing::GetDuration()
{
	float result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Timing::SetDuration(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Timing::GetTriggerType()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetTriggerType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Timing::GetTriggerDelayTime()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Timing::SetTriggerDelayTime(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Timing::GetTriggerShape()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Timing::SetTriggerShape(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Timing::GetRepeatCount()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetRepeatCount(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Timing::GetRepeatDuration()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Timing::SetRepeatDuration(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Timing::GetSpeed()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Timing::SetSpeed(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Timing::GetAccelerate()
{
	float result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Timing::SetAccelerate(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Timing::GetDecelerate()
{
	float result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Timing::SetDecelerate(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Timing::GetAutoReverse()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetAutoReverse(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Timing::GetSmoothStart()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetSmoothStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Timing::GetSmoothEnd()
{
	long result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetSmoothEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Timing::GetRewindAtEnd()
{
	long result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetRewindAtEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Timing::GetRestart()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Timing::SetRestart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// EffectParameters properties

/////////////////////////////////////////////////////////////////////////////
// EffectParameters operations

LPDISPATCH EffectParameters::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH EffectParameters::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long EffectParameters::GetDirection()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void EffectParameters::SetDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float EffectParameters::GetAmount()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void EffectParameters::SetAmount(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float EffectParameters::GetSize()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void EffectParameters::SetSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH EffectParameters::GetColor2()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long EffectParameters::GetRelative()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void EffectParameters::SetRelative(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString EffectParameters::GetFontName()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void EffectParameters::SetFontName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// EffectInformation properties

/////////////////////////////////////////////////////////////////////////////
// EffectInformation operations

LPDISPATCH EffectInformation::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH EffectInformation::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long EffectInformation::GetAfterEffect()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long EffectInformation::GetAnimateBackground()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long EffectInformation::GetAnimateTextInReverse()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long EffectInformation::GetBuildByLevelEffect()
{
	long result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH EffectInformation::GetDim()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH EffectInformation::GetPlaySettings()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH EffectInformation::GetSoundEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long EffectInformation::GetTextUnitEffect()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// AnimationBehaviors properties

/////////////////////////////////////////////////////////////////////////////
// AnimationBehaviors operations

long AnimationBehaviors::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehaviors::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehaviors::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehaviors::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH AnimationBehaviors::Add(long Type, long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// AnimationBehavior properties

/////////////////////////////////////////////////////////////////////////////
// AnimationBehavior operations

LPDISPATCH AnimationBehavior::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long AnimationBehavior::GetAdditive()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationBehavior::SetAdditive(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationBehavior::GetAccumulate()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationBehavior::SetAccumulate(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long AnimationBehavior::GetType()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationBehavior::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH AnimationBehavior::GetMotionEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetColorEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetScaleEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetRotationEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetPropertyEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetTiming()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void AnimationBehavior::Delete()
{
	InvokeHelper(0x7dc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH AnimationBehavior::GetCommandEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetFilterEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationBehavior::GetSetEffect()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// MotionEffect properties

/////////////////////////////////////////////////////////////////////////////
// MotionEffect operations

LPDISPATCH MotionEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH MotionEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float MotionEffect::GetByX()
{
	float result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetByX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float MotionEffect::GetByY()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetByY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float MotionEffect::GetFromX()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetFromX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float MotionEffect::GetFromY()
{
	float result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetFromY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float MotionEffect::GetToX()
{
	float result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetToX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float MotionEffect::GetToY()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetToY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString MotionEffect::GetPath()
{
	CString result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void MotionEffect::SetPath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ColorEffect properties

/////////////////////////////////////////////////////////////////////////////
// ColorEffect operations

LPDISPATCH ColorEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorEffect::GetBy()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorEffect::GetFrom()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ColorEffect::GetTo()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ScaleEffect properties

/////////////////////////////////////////////////////////////////////////////
// ScaleEffect operations

LPDISPATCH ScaleEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ScaleEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float ScaleEffect::GetByX()
{
	float result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ScaleEffect::SetByX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ScaleEffect::GetByY()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ScaleEffect::SetByY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ScaleEffect::GetFromX()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ScaleEffect::SetFromX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ScaleEffect::GetFromY()
{
	float result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ScaleEffect::SetFromY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ScaleEffect::GetToX()
{
	float result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ScaleEffect::SetToX(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float ScaleEffect::GetToY()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void ScaleEffect::SetToY(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// RotationEffect properties

/////////////////////////////////////////////////////////////////////////////
// RotationEffect operations

LPDISPATCH RotationEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH RotationEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float RotationEffect::GetBy()
{
	float result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void RotationEffect::SetBy(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float RotationEffect::GetFrom()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void RotationEffect::SetFrom(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float RotationEffect::GetTo()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void RotationEffect::SetTo(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// PropertyEffect properties

/////////////////////////////////////////////////////////////////////////////
// PropertyEffect operations

LPDISPATCH PropertyEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH PropertyEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PropertyEffect::GetProperty_()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PropertyEffect::SetProperty_(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH PropertyEffect::GetPoints()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT PropertyEffect::GetFrom()
{
	VARIANT result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void PropertyEffect::SetFrom(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT PropertyEffect::GetTo()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void PropertyEffect::SetTo(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}


/////////////////////////////////////////////////////////////////////////////
// AnimationPoints properties

/////////////////////////////////////////////////////////////////////////////
// AnimationPoints operations

long AnimationPoints::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationPoints::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationPoints::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationPoints::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH AnimationPoints::Add(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

long AnimationPoints::GetSmooth()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AnimationPoints::SetSmooth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// AnimationPoint properties

/////////////////////////////////////////////////////////////////////////////
// AnimationPoint operations

LPDISPATCH AnimationPoint::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH AnimationPoint::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void AnimationPoint::Delete()
{
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float AnimationPoint::GetTime()
{
	float result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void AnimationPoint::SetTime(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT AnimationPoint::GetValue()
{
	VARIANT result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void AnimationPoint::SetValue(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

CString AnimationPoint::GetFormula()
{
	CString result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void AnimationPoint::SetFormula(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// CanvasShapes properties

/////////////////////////////////////////////////////////////////////////////
// CanvasShapes operations

LPDISPATCH CanvasShapes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long CanvasShapes::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CanvasShapes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long CanvasShapes::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CanvasShapes::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN CanvasShapes::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH CanvasShapes::AddCallout(long Type, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Left, Top, Width, Height);
	return result;
}

LPDISPATCH CanvasShapes::AddConnector(long Type, float BeginX, float BeginY, float EndX, float EndY)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, BeginX, BeginY, EndX, EndY);
	return result;
}

LPDISPATCH CanvasShapes::AddCurve(const VARIANT& SafeArrayOfPoints)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&SafeArrayOfPoints);
	return result;
}

LPDISPATCH CanvasShapes::AddLabel(long Orientation, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Orientation, Left, Top, Width, Height);
	return result;
}

LPDISPATCH CanvasShapes::AddLine(float BeginX, float BeginY, float EndX, float EndY)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeginX, BeginY, EndX, EndY);
	return result;
}

LPDISPATCH CanvasShapes::AddPicture(LPCTSTR FileName, long LinkToFile, long SaveWithDocument, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, LinkToFile, SaveWithDocument, Left, Top, Width, Height);
	return result;
}

LPDISPATCH CanvasShapes::AddPolyline(const VARIANT& SafeArrayOfPoints)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&SafeArrayOfPoints);
	return result;
}

LPDISPATCH CanvasShapes::AddShape(long Type, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, Left, Top, Width, Height);
	return result;
}

LPDISPATCH CanvasShapes::AddTextEffect(long PresetTextEffect, LPCTSTR Text, LPCTSTR FontName, float FontSize, long FontBold, long FontItalic, float Left, float Top)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_R4 VTS_I4 VTS_I4 VTS_R4 VTS_R4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		PresetTextEffect, Text, FontName, FontSize, FontBold, FontItalic, Left, Top);
	return result;
}

LPDISPATCH CanvasShapes::AddTextbox(long Orientation, float Left, float Top, float Width, float Height)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Orientation, Left, Top, Width, Height);
	return result;
}

LPDISPATCH CanvasShapes::BuildFreeform(long EditingType, float X1, float Y1)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_R4 VTS_R4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		EditingType, X1, Y1);
	return result;
}

LPDISPATCH CanvasShapes::Range(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void CanvasShapes::SelectAll()
{
	InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH CanvasShapes::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// AutoCorrect properties

/////////////////////////////////////////////////////////////////////////////
// AutoCorrect operations

BOOL AutoCorrect::GetDisplayAutoCorrectOptions()
{
	BOOL result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void AutoCorrect::SetDisplayAutoCorrectOptions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL AutoCorrect::GetDisplayAutoLayoutOptions()
{
	BOOL result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void AutoCorrect::SetDisplayAutoLayoutOptions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Options properties

/////////////////////////////////////////////////////////////////////////////
// Options operations

long Options::GetDisplayPasteOptions()
{
	long result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDisplayPasteOptions(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetDoNotPromptForConvert()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDoNotPromptForConvert(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// CommandEffect properties

/////////////////////////////////////////////////////////////////////////////
// CommandEffect operations

LPDISPATCH CommandEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CommandEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long CommandEffect::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CommandEffect::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CommandEffect::GetCommand()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CommandEffect::SetCommand(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// FilterEffect properties

/////////////////////////////////////////////////////////////////////////////
// FilterEffect operations

LPDISPATCH FilterEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH FilterEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long FilterEffect::GetType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FilterEffect::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long FilterEffect::GetSubtype()
{
	long result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FilterEffect::SetSubtype(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long FilterEffect::GetReveal()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void FilterEffect::SetReveal(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// SetEffect properties

/////////////////////////////////////////////////////////////////////////////
// SetEffect operations

LPDISPATCH SetEffect::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SetEffect::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SetEffect::GetProperty_()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void SetEffect::SetProperty_(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT SetEffect::GetTo()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void SetEffect::SetTo(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}


/////////////////////////////////////////////////////////////////////////////
// CustomLayouts properties

/////////////////////////////////////////////////////////////////////////////
// CustomLayouts operations

long CustomLayouts::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayouts::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayouts::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayouts::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH CustomLayouts::Add(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH CustomLayouts::Paste(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CustomLayout properties

/////////////////////////////////////////////////////////////////////////////
// CustomLayout operations

LPDISPATCH CustomLayout::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetHeadersFooters()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString CustomLayout::GetName()
{
	CString result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CustomLayout::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void CustomLayout::Delete()
{
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float CustomLayout::GetHeight()
{
	float result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

float CustomLayout::GetWidth()
{
	float result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetDesign()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetTimeLine()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetSlideShowTransition()
{
	LPDISPATCH result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString CustomLayout::GetMatchingName()
{
	CString result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CustomLayout::SetMatchingName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CustomLayout::GetPreserved()
{
	long result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CustomLayout::SetPreserved(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CustomLayout::GetIndex()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CustomLayout::Select()
{
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CustomLayout::Cut()
{
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CustomLayout::Copy()
{
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH CustomLayout::Duplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void CustomLayout::MoveTo(long toPos)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 toPos);
}

long CustomLayout::GetDisplayMasterShapes()
{
	long result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CustomLayout::SetDisplayMasterShapes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CustomLayout::GetFollowMasterBackground()
{
	long result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CustomLayout::SetFollowMasterBackground(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH CustomLayout::GetThemeColorScheme()
{
	LPDISPATCH result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomLayout::GetCustomerData()
{
	LPDISPATCH result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TableStyle properties

/////////////////////////////////////////////////////////////////////////////
// TableStyle operations

CString TableStyle::GetName()
{
	CString result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString TableStyle::GetId()
{
	CString result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// CustomerData properties

/////////////////////////////////////////////////////////////////////////////
// CustomerData operations

long CustomerData::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomerData::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomerData::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH CustomerData::Item(LPCTSTR Id)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Id);
	return result;
}

LPDISPATCH CustomerData::Add()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void CustomerData::Delete(LPCTSTR Id)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Id);
}


/////////////////////////////////////////////////////////////////////////////
// Research properties

/////////////////////////////////////////////////////////////////////////////
// Research operations

LPDISPATCH Research::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Research::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Research::Query(LPCTSTR ServiceID, VARIANT* QueryString, VARIANT* QueryLanguage, BOOL UseSelection, BOOL LaunchQuery)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_BOOL VTS_BOOL;
	InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ServiceID, QueryString, QueryLanguage, UseSelection, LaunchQuery);
}

void Research::SetLanguagePair(VARIANT* Language1, VARIANT* Language2)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Language1, Language2);
}

BOOL Research::IsResearchService(LPCTSTR ServiceID)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		ServiceID);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TableBackground properties

/////////////////////////////////////////////////////////////////////////////
// TableBackground operations

LPDISPATCH TableBackground::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TableBackground::GetPicture()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TableBackground::GetReflection()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TableBackground::GetShadow()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TextFrame2 properties

/////////////////////////////////////////////////////////////////////////////
// TextFrame2 operations

LPDISPATCH TextFrame2::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextFrame2::GetCreator()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame2::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float TextFrame2::GetMarginBottom()
{
	float result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetMarginBottom(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float TextFrame2::GetMarginLeft()
{
	float result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetMarginLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float TextFrame2::GetMarginRight()
{
	float result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetMarginRight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float TextFrame2::GetMarginTop()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetMarginTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long TextFrame2::GetOrientation()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetHorizontalAnchor()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetHorizontalAnchor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetVerticalAnchor()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetVerticalAnchor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetPathFormat()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetPathFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetWarpFormat()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetWarpFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetWordArtFormat()
{
	long result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetWordArtFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetWordWrap()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TextFrame2::GetAutoSize()
{
	long result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TextFrame2::SetAutoSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH TextFrame2::GetThreeD()
{
	LPDISPATCH result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TextFrame2::GetHasText()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame2::GetTextRange()
{
	LPDISPATCH result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame2::GetColumn()
{
	LPDISPATCH result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH TextFrame2::GetRuler()
{
	LPDISPATCH result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void TextFrame2::DeleteText()
{
	InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// FileConverters properties

/////////////////////////////////////////////////////////////////////////////
// FileConverters operations

long FileConverters::GetCount()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH FileConverters::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// FileConverter properties

/////////////////////////////////////////////////////////////////////////////
// FileConverter operations

LPDISPATCH FileConverter::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL FileConverter::GetCanOpen()
{
	BOOL result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL FileConverter::GetCanSave()
{
	BOOL result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString FileConverter::GetClassName()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH FileConverter::GetCreator()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString FileConverter::GetExtensions()
{
	CString result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString FileConverter::GetFormatName()
{
	CString result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString FileConverter::GetName()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH FileConverter::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString FileConverter::GetPath()
{
	CString result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long FileConverter::GetOpenFormat()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long FileConverter::GetSaveFormat()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Axes properties

/////////////////////////////////////////////////////////////////////////////
// Axes operations

long Axes::GetCount()
{
	long result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Axes::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axes::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axes::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axes::Item(long Type, long AxisGroup)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, AxisGroup);
	return result;
}

LPUNKNOWN Axes::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axes::_Default(long Type, long AxisGroup)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, AxisGroup);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Axis properties

/////////////////////////////////////////////////////////////////////////////
// Axis operations

BOOL Axis::GetAxisBetweenCategories()
{
	BOOL result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetAxisBetweenCategories(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Axis::GetAxisGroup()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axis::GetAxisTitle()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Axis::GetCategoryNames()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Axis::SetCategoryNames(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long Axis::GetCrosses()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetCrosses(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double Axis::GetCrossesAt()
{
	double result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetCrossesAt(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT Axis::Delete()
{
	VARIANT result;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Axis::GetHasMajorGridlines()
{
	BOOL result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetHasMajorGridlines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Axis::GetHasMinorGridlines()
{
	BOOL result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetHasMinorGridlines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Axis::GetHasTitle()
{
	BOOL result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetHasTitle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Axis::GetMajorGridlines()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Axis::GetMajorTickMark()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetMajorTickMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double Axis::GetMajorUnit()
{
	double result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetMajorUnit(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double Axis::GetLogBase()
{
	double result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetLogBase(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Axis::GetTickLabelSpacingIsAuto()
{
	BOOL result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetTickLabelSpacingIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Axis::GetMajorUnitIsAuto()
{
	BOOL result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetMajorUnitIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double Axis::GetMaximumScale()
{
	double result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetMaximumScale(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Axis::GetMaximumScaleIsAuto()
{
	BOOL result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetMaximumScaleIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double Axis::GetMinimumScale()
{
	double result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetMinimumScale(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Axis::GetMinimumScaleIsAuto()
{
	BOOL result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetMinimumScaleIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Axis::GetMinorGridlines()
{
	LPDISPATCH result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Axis::GetMinorTickMark()
{
	long result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetMinorTickMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double Axis::GetMinorUnit()
{
	double result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetMinorUnit(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Axis::GetMinorUnitIsAuto()
{
	BOOL result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetMinorUnitIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Axis::GetReversePlotOrder()
{
	BOOL result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetReversePlotOrder(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Axis::GetScaleType()
{
	long result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetScaleType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Axis::Select()
{
	VARIANT result;
	InvokeHelper(0x7eb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Axis::GetTickLabelPosition()
{
	long result;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetTickLabelPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Axis::GetTickLabels()
{
	LPDISPATCH result;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Axis::GetTickLabelSpacing()
{
	long result;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetTickLabelSpacing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Axis::GetTickMarkSpacing()
{
	long result;
	InvokeHelper(0x7ef, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetTickMarkSpacing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ef, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Axis::GetType()
{
	long result;
	InvokeHelper(0x7f0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Axis::GetBaseUnit()
{
	long result;
	InvokeHelper(0x7f1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetBaseUnit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Axis::GetBaseUnitIsAuto()
{
	BOOL result;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetBaseUnitIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Axis::GetMajorUnitScale()
{
	long result;
	InvokeHelper(0x7f3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetMajorUnitScale(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Axis::GetMinorUnitScale()
{
	long result;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetMinorUnitScale(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Axis::GetCategoryType()
{
	long result;
	InvokeHelper(0x7f5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetCategoryType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double Axis::GetLeft()
{
	double result;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double Axis::GetTop()
{
	double result;
	InvokeHelper(0x7f7, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double Axis::GetWidth()
{
	double result;
	InvokeHelper(0x7f8, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double Axis::GetHeight()
{
	double result;
	InvokeHelper(0x7f9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

long Axis::GetDisplayUnit()
{
	long result;
	InvokeHelper(0x7fa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Axis::SetDisplayUnit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double Axis::GetDisplayUnitCustom()
{
	double result;
	InvokeHelper(0x7fb, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Axis::SetDisplayUnitCustom(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7fb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Axis::GetHasDisplayUnitLabel()
{
	BOOL result;
	InvokeHelper(0x7fc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Axis::SetHasDisplayUnitLabel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7fc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Axis::GetDisplayUnitLabel()
{
	LPDISPATCH result;
	InvokeHelper(0x7fd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axis::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x7fe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axis::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7ff, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Axis::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axis::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Axis::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x800, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// AxisTitle properties

/////////////////////////////////////////////////////////////////////////////
// AxisTitle operations

void AxisTitle::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString AxisTitle::GetCaption()
{
	CString result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH AxisTitle::GetCharacters(const VARIANT& Start, const VARIANT& Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Start, &Length);
	return result;
}

void AxisTitle::SetHorizontalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT AxisTitle::GetHorizontalAlignment()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double AxisTitle::GetLeft()
{
	double result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void AxisTitle::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void AxisTitle::SetOrientation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT AxisTitle::GetOrientation()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL AxisTitle::GetShadow()
{
	BOOL result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void AxisTitle::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void AxisTitle::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString AxisTitle::GetText()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

double AxisTitle::GetTop()
{
	double result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void AxisTitle::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void AxisTitle::SetVerticalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT AxisTitle::GetVerticalAlignment()
{
	VARIANT result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT AxisTitle::Delete()
{
	VARIANT result;
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString AxisTitle::GetName()
{
	CString result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH AxisTitle::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT AxisTitle::Select()
{
	VARIANT result;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL AxisTitle::GetIncludeInLayout()
{
	BOOL result;
	InvokeHelper(0x972, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void AxisTitle::SetIncludeInLayout(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x972, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long AxisTitle::GetPosition()
{
	long result;
	InvokeHelper(0x687, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AxisTitle::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x687, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH AxisTitle::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long AxisTitle::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH AxisTitle::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long AxisTitle::GetReadingOrder()
{
	long result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void AxisTitle::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Chart properties

/////////////////////////////////////////////////////////////////////////////
// Chart operations

LPDISPATCH Chart::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Chart::ApplyDataLabels(long Type, const VARIANT& LegendKey, const VARIANT& AutoText, const VARIANT& HasLeaderLines, const VARIANT& ShowSeriesName, const VARIANT& ShowCategoryName, const VARIANT& ShowValue, const VARIANT& ShowPercentage, 
		const VARIANT& ShowBubbleSize, const VARIANT& Separator)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x782, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, &LegendKey, &AutoText, &HasLeaderLines, &ShowSeriesName, &ShowCategoryName, &ShowValue, &ShowPercentage, &ShowBubbleSize, &Separator);
}

long Chart::GetChartType()
{
	long result;
	InvokeHelper(0x578, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetChartType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x578, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Chart::GetHasDataTable()
{
	BOOL result;
	InvokeHelper(0x574, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Chart::SetHasDataTable(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x574, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void Chart::GetChartElement(long X, long Y, long* ElementID, long* Arg1, long* Arg2)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_PI4 VTS_PI4 VTS_PI4;
	InvokeHelper(0x581, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 X, Y, ElementID, Arg1, Arg2);
}

void Chart::SetSourceData(LPCTSTR Source, const VARIANT& PlotBy)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper(0x585, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, &PlotBy);
}

long Chart::GetPlotBy()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetPlotBy(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Chart::SetBackgroundPicture(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

LPDISPATCH Chart::GetDataTable()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Chart::Paste(const VARIANT& Type)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Type);
}

long Chart::GetBarShape()
{
	long result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetBarShape(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Chart::SetDefaultChart(const VARIANT& Name)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Name);
}

void Chart::ApplyChartTemplate(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void Chart::SaveChartTemplate(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

LPDISPATCH Chart::GetSideWall()
{
	LPDISPATCH result;
	InvokeHelper(0x949, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Chart::GetBackWall()
{
	LPDISPATCH result;
	InvokeHelper(0x94a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Chart::GetChartStyle()
{
	VARIANT result;
	InvokeHelper(0x9a1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Chart::SetChartStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9a1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void Chart::ClearToMatchStyle()
{
	InvokeHelper(0x9a2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Chart::SetShowDataLabelsOverMaximum(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Chart::GetShowDataLabelsOverMaximum()
{
	BOOL result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Chart::ApplyLayout(long Layout, const VARIANT& ChartType)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper(0x9a4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Layout, &ChartType);
}

void Chart::Refresh()
{
	InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Chart::GetChartData()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Chart::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Chart::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Chart::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Chart::SetAutoScaling(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Chart::GetAutoScaling()
{
	BOOL result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Chart::Axes(const VARIANT& Type, long AxisGroup)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Type, AxisGroup);
	return result;
}

LPDISPATCH Chart::GetChartArea()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Chart::ChartGroups(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH Chart::GetChartTitle()
{
	LPDISPATCH result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Chart::ChartWizard(const VARIANT& Source, const VARIANT& Gallery, const VARIANT& Format, const VARIANT& PlotBy, const VARIANT& CategoryLabels, const VARIANT& SeriesLabels, const VARIANT& HasLegend, const VARIANT& Title, 
		const VARIANT& CategoryTitle, const VARIANT& ValueTitle, const VARIANT& ExtraTitle)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7e4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Source, &Gallery, &Format, &PlotBy, &CategoryLabels, &SeriesLabels, &HasLegend, &Title, &CategoryTitle, &ValueTitle, &ExtraTitle);
}

void Chart::Copy(const VARIANT& Before, const VARIANT& After)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Before, &After);
}

void Chart::CopyPicture(long Appearance, long Format, long Size)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7e6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Appearance, Format, Size);
}

void Chart::Delete()
{
	InvokeHelper(0x7e8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Chart::GetDepthPercent()
{
	long result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetDepthPercent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Chart::GetDisplayBlanksAs()
{
	long result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetDisplayBlanksAs(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Chart::GetElevation()
{
	long result;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetElevation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Chart::Export(LPCTSTR FileName, const VARIANT& FilterName, const VARIANT& Interactive)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7ec, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FileName, &FilterName, &Interactive);
	return result;
}

LPDISPATCH Chart::GetFloor()
{
	LPDISPATCH result;
	InvokeHelper(0x7ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Chart::GetGapDepth()
{
	long result;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetGapDepth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Chart::GetHasAxis(const VARIANT& Index1, const VARIANT& Index2)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7ef, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index1, &Index2);
	return result;
}

void Chart::SetHasAxis(const VARIANT& Index1, const VARIANT& Index2, const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7ef, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &Index1, &Index2, &newValue);
}

BOOL Chart::GetHasLegend()
{
	BOOL result;
	InvokeHelper(0x7f0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Chart::SetHasLegend(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7f0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Chart::GetHasTitle()
{
	BOOL result;
	InvokeHelper(0x7f1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Chart::SetHasTitle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7f1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Chart::GetHeightPercent()
{
	long result;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetHeightPercent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Chart::GetLegend()
{
	LPDISPATCH result;
	InvokeHelper(0x7f3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Chart::GetName()
{
	CString result;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Chart::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7f4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Chart::GetPerspective()
{
	long result;
	InvokeHelper(0x7f5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Chart::SetPerspective(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7f5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Chart::GetPlotArea()
{
	LPDISPATCH result;
	InvokeHelper(0x7f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Chart::GetPlotVisibleOnly()
{
	BOOL result;
	InvokeHelper(0x7f7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Chart::SetPlotVisibleOnly(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7f7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT Chart::GetRightAngleAxes()
{
	VARIANT result;
	InvokeHelper(0x7f8, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Chart::SetRightAngleAxes(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7f8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Chart::GetRotation()
{
	VARIANT result;
	InvokeHelper(0x7f9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Chart::SetRotation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7f9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void Chart::Select(const VARIANT& Replace)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7fa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Replace);
}

LPDISPATCH Chart::SeriesCollection(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7fb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void Chart::SetElement(long Element)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7fc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Element);
}

LPDISPATCH Chart::GetWalls()
{
	LPDISPATCH result;
	InvokeHelper(0x7ff, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartBorder properties

/////////////////////////////////////////////////////////////////////////////
// ChartBorder operations

void ChartBorder::SetColor(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartBorder::GetColor()
{
	VARIANT result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartBorder::SetColorIndex(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartBorder::GetColorIndex()
{
	VARIANT result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartBorder::SetLineStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartBorder::GetLineStyle()
{
	VARIANT result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartBorder::SetWeight(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartBorder::GetWeight()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long ChartBorder::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartBorder::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartBorder::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartCharacters properties

/////////////////////////////////////////////////////////////////////////////
// ChartCharacters operations

LPDISPATCH ChartCharacters::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ChartCharacters::GetCaption()
{
	CString result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ChartCharacters::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long ChartCharacters::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT ChartCharacters::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartCharacters::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT ChartCharacters::Insert(LPCTSTR String)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xfc, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		String);
	return result;
}

CString ChartCharacters::GetText()
{
	CString result;
	InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ChartCharacters::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString ChartCharacters::GetPhoneticCharacters()
{
	CString result;
	InvokeHelper(0x5f2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ChartCharacters::SetPhoneticCharacters(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5f2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long ChartCharacters::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartCharacters::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartArea properties

/////////////////////////////////////////////////////////////////////////////
// ChartArea operations

CString ChartArea::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT ChartArea::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartArea::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT ChartArea::Clear()
{
	VARIANT result;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT ChartArea::ClearContents()
{
	VARIANT result;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT ChartArea::Copy()
{
	VARIANT result;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL ChartArea::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartArea::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT ChartArea::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double ChartArea::GetHeight()
{
	double result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void ChartArea::SetHeight(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double ChartArea::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void ChartArea::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double ChartArea::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void ChartArea::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double ChartArea::GetWidth()
{
	double result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void ChartArea::SetWidth(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH ChartArea::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartArea::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartArea::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartColorFormat properties

/////////////////////////////////////////////////////////////////////////////
// ChartColorFormat operations

LPDISPATCH ChartColorFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartColorFormat::GetSchemeColor()
{
	long result;
	InvokeHelper(0x66e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartColorFormat::SetSchemeColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartColorFormat::Get_Default()
{
	long result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartColorFormat::GetType()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartColorFormat::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartColorFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartColorFormat::GetRgb()
{
	long result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartData properties

/////////////////////////////////////////////////////////////////////////////
// ChartData operations

LPDISPATCH ChartData::GetWorkbook()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ChartData::Activate()
{
	InvokeHelper(0x7d2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL ChartData::GetIsLinked()
{
	BOOL result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartData::BreakLink()
{
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// ChartFillFormat properties

/////////////////////////////////////////////////////////////////////////////
// ChartFillFormat operations

void ChartFillFormat::Solid()
{
	InvokeHelper(0x7d1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ChartFillFormat::UserTextured(LPCTSTR TextureFile)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 TextureFile);
}

LPDISPATCH ChartFillFormat::GetBackColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFillFormat::GetForeColor()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float ChartFillFormat::GetGradientDegree()
{
	float result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

CString ChartFillFormat::GetTextureName()
{
	CString result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long ChartFillFormat::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFillFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFillFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ChartFillFormat::OneColorGradient(long Style, long Variant, float Degree)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_R4;
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Variant, Degree);
}

long ChartFillFormat::GetGradientColorType()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartFillFormat::GetGradientStyle()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartFillFormat::GetGradientVariant()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartFillFormat::GetPattern()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartFillFormat::Patterned(long Pattern)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Pattern);
}

void ChartFillFormat::PresetGradient(long Style, long Variant, long PresetGradientType)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Variant, PresetGradientType);
}

long ChartFillFormat::GetPresetGradientType()
{
	long result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartFillFormat::GetPresetTexture()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartFillFormat::PresetTextured(long PresetTexture)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PresetTexture);
}

long ChartFillFormat::GetTextureType()
{
	long result;
	InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartFillFormat::TwoColorGradient(long Style, long Variant)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x7e3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Variant);
}

long ChartFillFormat::GetType()
{
	long result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartFillFormat::UserPicture(const VARIANT& PictureFile, const VARIANT& PictureFormat, const VARIANT& PictureStackUnit, const VARIANT& PicturePlacement)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &PictureFile, &PictureFormat, &PictureStackUnit, &PicturePlacement);
}

long ChartFillFormat::GetVisible()
{
	long result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartFillFormat::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ChartFormat properties

/////////////////////////////////////////////////////////////////////////////
// ChartFormat operations

LPDISPATCH ChartFormat::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetGlow()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetLine()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetPictureFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetShadow()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetSoftEdge()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetTextFrame2()
{
	LPDISPATCH result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetThreeD()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartFormat::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartGroup properties

/////////////////////////////////////////////////////////////////////////////
// ChartGroup operations

LPDISPATCH ChartGroup::GetDownBars()
{
	LPDISPATCH result;
	InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroup::GetDropLines()
{
	LPDISPATCH result;
	InvokeHelper(0x60020001, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetHasDropLines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x60020002, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetHasDropLines()
{
	BOOL result;
	InvokeHelper(0x60020002, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetHasHiLoLines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x60020004, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetHasHiLoLines()
{
	BOOL result;
	InvokeHelper(0x60020004, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetHasRadarAxisLabels(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x60020006, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetHasRadarAxisLabels()
{
	BOOL result;
	InvokeHelper(0x60020006, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetHasSeriesLines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x60020008, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetHasSeriesLines()
{
	BOOL result;
	InvokeHelper(0x60020008, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetHasUpDownBars(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6002000a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetHasUpDownBars()
{
	BOOL result;
	InvokeHelper(0x6002000a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroup::GetHiLoLines()
{
	LPDISPATCH result;
	InvokeHelper(0x6002000c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroup::SeriesCollection(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x6002000d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH ChartGroup::GetSeriesLines()
{
	LPDISPATCH result;
	InvokeHelper(0x6002000e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroup::GetUpBars()
{
	LPDISPATCH result;
	InvokeHelper(0x6002000f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetVaryByCategories(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x60020010, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetVaryByCategories()
{
	BOOL result;
	InvokeHelper(0x60020010, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long ChartGroup::GetSizeRepresents()
{
	long result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetSizeRepresents(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void ChartGroup::SetShowNegativeBubbles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL ChartGroup::GetShowNegativeBubbles()
{
	BOOL result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetSplitType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartGroup::GetSplitType()
{
	long result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT ChartGroup::GetSplitValue()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetSplitValue(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL ChartGroup::GetHas3DShading()
{
	BOOL result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetHas3DShading(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long ChartGroup::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroup::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroup::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartGroup::GetAxisGroup()
{
	long result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetAxisGroup(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartGroup::GetBubbleScale()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetBubbleScale(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartGroup::GetDoughnutHoleSize()
{
	long result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetDoughnutHoleSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartGroup::GetFirstSliceAngle()
{
	long result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetFirstSliceAngle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartGroup::GetGapWidth()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetGapWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long ChartGroup::GetIndex()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ChartGroup::GetOverlap()
{
	long result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetOverlap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH ChartGroup::GetRadarAxisLabels()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartGroup::GetSecondPlotSize()
{
	long result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartGroup::SetSecondPlotSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// ChartGroups properties

/////////////////////////////////////////////////////////////////////////////
// ChartGroups operations

LPDISPATCH ChartGroups::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartGroups::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroups::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN ChartGroups::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long ChartGroups::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartGroups::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartTitle properties

/////////////////////////////////////////////////////////////////////////////
// ChartTitle operations

void ChartTitle::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString ChartTitle::GetCaption()
{
	CString result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartTitle::GetCharacters(const VARIANT& Start, const VARIANT& Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Start, &Length);
	return result;
}

void ChartTitle::SetHorizontalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartTitle::GetHorizontalAlignment()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double ChartTitle::GetLeft()
{
	double result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void ChartTitle::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void ChartTitle::SetOrientation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartTitle::GetOrientation()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL ChartTitle::GetShadow()
{
	BOOL result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartTitle::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void ChartTitle::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString ChartTitle::GetText()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

double ChartTitle::GetTop()
{
	double result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void ChartTitle::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void ChartTitle::SetVerticalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartTitle::GetVerticalAlignment()
{
	VARIANT result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT ChartTitle::Delete()
{
	VARIANT result;
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString ChartTitle::GetName()
{
	CString result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartTitle::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT ChartTitle::Select()
{
	VARIANT result;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL ChartTitle::GetIncludeInLayout()
{
	BOOL result;
	InvokeHelper(0x972, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void ChartTitle::SetIncludeInLayout(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x972, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long ChartTitle::GetPosition()
{
	long result;
	InvokeHelper(0x687, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartTitle::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x687, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH ChartTitle::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartTitle::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartTitle::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ChartTitle::GetReadingOrder()
{
	long result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ChartTitle::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Corners properties

/////////////////////////////////////////////////////////////////////////////
// Corners operations

long Corners::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Corners::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DataLabel properties

/////////////////////////////////////////////////////////////////////////////
// DataLabel operations

LPDISPATCH DataLabel::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DataLabel::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT DataLabel::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT DataLabel::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString DataLabel::GetCaption()
{
	CString result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void DataLabel::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH DataLabel::GetCharacters(const VARIANT& Start, const VARIANT& Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x25b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Start, &Length);
	return result;
}

VARIANT DataLabel::GetHorizontalAlignment()
{
	VARIANT result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabel::SetHorizontalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

double DataLabel::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void DataLabel::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT DataLabel::GetOrientation()
{
	VARIANT result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabel::SetOrientation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL DataLabel::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString DataLabel::GetText()
{
	CString result;
	InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void DataLabel::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

double DataLabel::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void DataLabel::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT DataLabel::GetVerticalAlignment()
{
	VARIANT result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabel::SetVerticalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long DataLabel::GetReadingOrder()
{
	long result;
	InvokeHelper(0x3cf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DataLabel::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3cf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL DataLabel::GetAutoText()
{
	BOOL result;
	InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetAutoText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString DataLabel::GetNumberFormat()
{
	CString result;
	InvokeHelper(0xc1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void DataLabel::SetNumberFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL DataLabel::GetNumberFormatLinked()
{
	BOOL result;
	InvokeHelper(0xc2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetNumberFormatLinked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT DataLabel::GetNumberFormatLocal()
{
	VARIANT result;
	InvokeHelper(0x449, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabel::SetNumberFormatLocal(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x449, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL DataLabel::GetShowLegendKey()
{
	BOOL result;
	InvokeHelper(0xab, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShowLegendKey(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long DataLabel::GetPosition()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DataLabel::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL DataLabel::GetShowSeriesName()
{
	BOOL result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShowSeriesName(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabel::GetShowCategoryName()
{
	BOOL result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShowCategoryName(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabel::GetShowValue()
{
	BOOL result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShowValue(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabel::GetShowPercentage()
{
	BOOL result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShowPercentage(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabel::GetShowBubbleSize()
{
	BOOL result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabel::SetShowBubbleSize(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT DataLabel::GetSeparator()
{
	VARIANT result;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabel::SetSeparator(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

LPDISPATCH DataLabel::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DataLabel::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataLabel::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DataLabels properties

/////////////////////////////////////////////////////////////////////////////
// DataLabels operations

LPDISPATCH DataLabels::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString DataLabels::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT DataLabels::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT DataLabels::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT DataLabels::GetHorizontalAlignment()
{
	VARIANT result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabels::SetHorizontalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT DataLabels::GetOrientation()
{
	VARIANT result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabels::SetOrientation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL DataLabels::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT DataLabels::GetVerticalAlignment()
{
	VARIANT result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabels::SetVerticalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long DataLabels::GetReadingOrder()
{
	long result;
	InvokeHelper(0x3cf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DataLabels::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3cf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL DataLabels::GetAutoText()
{
	BOOL result;
	InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetAutoText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString DataLabels::GetNumberFormat()
{
	CString result;
	InvokeHelper(0xc1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void DataLabels::SetNumberFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL DataLabels::GetNumberFormatLinked()
{
	BOOL result;
	InvokeHelper(0xc2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetNumberFormatLinked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT DataLabels::GetNumberFormatLocal()
{
	VARIANT result;
	InvokeHelper(0x449, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabels::SetNumberFormatLocal(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x449, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL DataLabels::GetShowLegendKey()
{
	BOOL result;
	InvokeHelper(0xab, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShowLegendKey(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long DataLabels::GetPosition()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DataLabels::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL DataLabels::GetShowSeriesName()
{
	BOOL result;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShowSeriesName(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabels::GetShowCategoryName()
{
	BOOL result;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShowCategoryName(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabels::GetShowValue()
{
	BOOL result;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShowValue(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabels::GetShowPercentage()
{
	BOOL result;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShowPercentage(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataLabels::GetShowBubbleSize()
{
	BOOL result;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataLabels::SetShowBubbleSize(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT DataLabels::GetSeparator()
{
	VARIANT result;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void DataLabels::SetSeparator(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long DataLabels::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataLabels::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN DataLabels::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataLabels::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DataLabels::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataLabels::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataLabels::_Default(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DataTable properties

/////////////////////////////////////////////////////////////////////////////
// DataTable operations

void DataTable::SetShowLegendKey(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataTable::GetShowLegendKey()
{
	BOOL result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataTable::SetHasBorderHorizontal(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataTable::GetHasBorderHorizontal()
{
	BOOL result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataTable::SetHasBorderVertical(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataTable::GetHasBorderVertical()
{
	BOOL result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DataTable::SetHasBorderOutline(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL DataTable::GetHasBorderOutline()
{
	BOOL result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataTable::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataTable::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void DataTable::Select()
{
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void DataTable::Delete()
{
	InvokeHelper(0x7d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH DataTable::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataTable::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DataTable::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DataTable::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DisplayUnitLabel properties

/////////////////////////////////////////////////////////////////////////////
// DisplayUnitLabel operations

void DisplayUnitLabel::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString DisplayUnitLabel::GetCaption()
{
	CString result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DisplayUnitLabel::GetCharacters(const VARIANT& Start, const VARIANT& Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Start, &Length);
	return result;
}

void DisplayUnitLabel::SetHorizontalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT DisplayUnitLabel::GetHorizontalAlignment()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double DisplayUnitLabel::GetLeft()
{
	double result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void DisplayUnitLabel::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void DisplayUnitLabel::SetOrientation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT DisplayUnitLabel::GetOrientation()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL DisplayUnitLabel::GetShadow()
{
	BOOL result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void DisplayUnitLabel::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void DisplayUnitLabel::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString DisplayUnitLabel::GetText()
{
	CString result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

double DisplayUnitLabel::GetTop()
{
	double result;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void DisplayUnitLabel::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void DisplayUnitLabel::SetVerticalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT DisplayUnitLabel::GetVerticalAlignment()
{
	VARIANT result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT DisplayUnitLabel::Delete()
{
	VARIANT result;
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString DisplayUnitLabel::GetName()
{
	CString result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DisplayUnitLabel::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT DisplayUnitLabel::Select()
{
	VARIANT result;
	InvokeHelper(0x7e2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long DisplayUnitLabel::GetPosition()
{
	long result;
	InvokeHelper(0x687, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DisplayUnitLabel::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x687, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH DisplayUnitLabel::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DisplayUnitLabel::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DisplayUnitLabel::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DisplayUnitLabel::GetReadingOrder()
{
	long result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void DisplayUnitLabel::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// DownBars properties

/////////////////////////////////////////////////////////////////////////////
// DownBars operations

CString DownBars::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT DownBars::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH DownBars::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT DownBars::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH DownBars::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DownBars::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DownBars::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// DropLines properties

/////////////////////////////////////////////////////////////////////////////
// DropLines operations

CString DropLines::GetName()
{
	CString result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH DropLines::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DropLines::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH DropLines::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long DropLines::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH DropLines::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT DropLines::Delete()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT DropLines::Select()
{
	VARIANT result;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ErrorBars properties

/////////////////////////////////////////////////////////////////////////////
// ErrorBars operations

LPDISPATCH ErrorBars::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString ErrorBars::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT ErrorBars::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH ErrorBars::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT ErrorBars::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT ErrorBars::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long ErrorBars::GetEndStyle()
{
	long result;
	InvokeHelper(0x464, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void ErrorBars::SetEndStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x464, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH ErrorBars::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long ErrorBars::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ErrorBars::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Floor properties

/////////////////////////////////////////////////////////////////////////////
// Floor operations

CString Floor::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Floor::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Floor::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Floor::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Floor::GetPictureType()
{
	VARIANT result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Floor::SetPictureType(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void Floor::Paste()
{
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Floor::GetThickness()
{
	long result;
	InvokeHelper(0x973, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Floor::SetThickness(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x973, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Floor::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Floor::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Floor::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ChartFont properties

/////////////////////////////////////////////////////////////////////////////
// ChartFont operations

void ChartFont::SetBackground(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetBackground()
{
	VARIANT result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetBold(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetBold()
{
	VARIANT result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetColor(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetColor()
{
	VARIANT result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetColorIndex(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetColorIndex()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetFontStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetFontStyle()
{
	VARIANT result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetItalic(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetItalic()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetName(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetName()
{
	VARIANT result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetSize(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetSize()
{
	VARIANT result;
	InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetStrikethrough(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetStrikethrough()
{
	VARIANT result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetSubscript(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetSubscript()
{
	VARIANT result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetSuperscript(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetSuperscript()
{
	VARIANT result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void ChartFont::SetUnderline(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT ChartFont::GetUnderline()
{
	VARIANT result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long ChartFont::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFont::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH ChartFont::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Gridlines properties

/////////////////////////////////////////////////////////////////////////////
// Gridlines operations

CString Gridlines::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Gridlines::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Gridlines::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Gridlines::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Gridlines::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Gridlines::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Gridlines::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Gridlines::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HiLoLines properties

/////////////////////////////////////////////////////////////////////////////
// HiLoLines operations

LPDISPATCH HiLoLines::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString HiLoLines::GetName()
{
	CString result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH HiLoLines::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HiLoLines::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HiLoLines::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH HiLoLines::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT HiLoLines::Delete()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT HiLoLines::Select()
{
	VARIANT result;
	InvokeHelper(0x7d7, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Interior properties

/////////////////////////////////////////////////////////////////////////////
// Interior operations

void Interior::SetColor(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Interior::GetColor()
{
	VARIANT result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Interior::SetColorIndex(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Interior::GetColorIndex()
{
	VARIANT result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Interior::SetInvertIfNegative(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Interior::GetInvertIfNegative()
{
	VARIANT result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Interior::SetPattern(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Interior::GetPattern()
{
	VARIANT result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Interior::SetPatternColor(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Interior::GetPatternColor()
{
	VARIANT result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Interior::SetPatternColorIndex(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Interior::GetPatternColorIndex()
{
	VARIANT result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Interior::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Interior::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Interior::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// LeaderLines properties

/////////////////////////////////////////////////////////////////////////////
// LeaderLines operations

void LeaderLines::Select()
{
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH LeaderLines::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void LeaderLines::Delete()
{
	InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH LeaderLines::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long LeaderLines::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH LeaderLines::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH LeaderLines::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Legend properties

/////////////////////////////////////////////////////////////////////////////
// Legend operations

LPDISPATCH Legend::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Legend::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Legend::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Legend::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Legend::LegendEntries(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

long Legend::GetPosition()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Legend::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Legend::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Legend::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT Legend::Clear()
{
	VARIANT result;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double Legend::GetHeight()
{
	double result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Legend::SetHeight(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double Legend::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Legend::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double Legend::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Legend::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double Legend::GetWidth()
{
	double result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Legend::SetWidth(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Legend::GetIncludeInLayout()
{
	BOOL result;
	InvokeHelper(0x972, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Legend::SetIncludeInLayout(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x972, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Legend::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Legend::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Legend::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// LegendEntries properties

/////////////////////////////////////////////////////////////////////////////
// LegendEntries operations

LPDISPATCH LegendEntries::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long LegendEntries::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntries::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN LegendEntries::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long LegendEntries::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntries::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntries::_Default(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// LegendEntry properties

/////////////////////////////////////////////////////////////////////////////
// LegendEntry operations

LPDISPATCH LegendEntry::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT LegendEntry::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntry::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long LegendEntry::GetIndex()
{
	long result;
	InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntry::GetLegendKey()
{
	LPDISPATCH result;
	InvokeHelper(0xae, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT LegendEntry::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double LegendEntry::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double LegendEntry::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double LegendEntry::GetWidth()
{
	double result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double LegendEntry::GetHeight()
{
	double result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntry::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long LegendEntry::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH LegendEntry::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// LegendKey properties

/////////////////////////////////////////////////////////////////////////////
// LegendKey operations

LPDISPATCH LegendKey::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT LegendKey::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT LegendKey::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL LegendKey::GetInvertIfNegative()
{
	BOOL result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void LegendKey::SetInvertIfNegative(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long LegendKey::GetMarkerBackgroundColor()
{
	long result;
	InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetMarkerBackgroundColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LegendKey::GetMarkerBackgroundColorIndex()
{
	long result;
	InvokeHelper(0x4a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetMarkerBackgroundColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LegendKey::GetMarkerForegroundColor()
{
	long result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetMarkerForegroundColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LegendKey::GetMarkerForegroundColorIndex()
{
	long result;
	InvokeHelper(0x4c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetMarkerForegroundColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LegendKey::GetMarkerSize()
{
	long result;
	InvokeHelper(0xe7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetMarkerSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LegendKey::GetMarkerStyle()
{
	long result;
	InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetMarkerStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long LegendKey::GetPictureType()
{
	long result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void LegendKey::SetPictureType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL LegendKey::GetSmooth()
{
	BOOL result;
	InvokeHelper(0xa3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void LegendKey::SetSmooth(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double LegendKey::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double LegendKey::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double LegendKey::GetWidth()
{
	double result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double LegendKey::GetHeight()
{
	double result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL LegendKey::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void LegendKey::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH LegendKey::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long LegendKey::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

double LegendKey::GetPictureUnit2()
{
	double result;
	InvokeHelper(0xa59, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void LegendKey::SetPictureUnit2(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xa59, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH LegendKey::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// PlotArea properties

/////////////////////////////////////////////////////////////////////////////
// PlotArea operations

CString PlotArea::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT PlotArea::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH PlotArea::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT PlotArea::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

double PlotArea::GetHeight()
{
	double result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetHeight(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetWidth()
{
	double result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetWidth(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetInsideLeft()
{
	double result;
	InvokeHelper(0x683, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetInsideLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x683, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetInsideTop()
{
	double result;
	InvokeHelper(0x684, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetInsideTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x684, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetInsideWidth()
{
	double result;
	InvokeHelper(0x685, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetInsideWidth(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x685, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double PlotArea::GetInsideHeight()
{
	double result;
	InvokeHelper(0x686, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void PlotArea::SetInsideHeight(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x686, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long PlotArea::GetPosition()
{
	long result;
	InvokeHelper(0x687, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void PlotArea::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x687, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH PlotArea::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long PlotArea::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH PlotArea::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Point properties

/////////////////////////////////////////////////////////////////////////////
// Point operations

LPDISPATCH Point::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Point::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Point::Copy()
{
	VARIANT result;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Point::GetDataLabel()
{
	LPDISPATCH result;
	InvokeHelper(0x9e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Point::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Point::GetExplosion()
{
	long result;
	InvokeHelper(0xb6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetExplosion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Point::GetHasDataLabel()
{
	BOOL result;
	InvokeHelper(0x4d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetHasDataLabel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Point::GetInvertIfNegative()
{
	BOOL result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetInvertIfNegative(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Point::GetMarkerBackgroundColor()
{
	long result;
	InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetMarkerBackgroundColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Point::GetMarkerBackgroundColorIndex()
{
	long result;
	InvokeHelper(0x4a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetMarkerBackgroundColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Point::GetMarkerForegroundColor()
{
	long result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetMarkerForegroundColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Point::GetMarkerForegroundColorIndex()
{
	long result;
	InvokeHelper(0x4c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetMarkerForegroundColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Point::GetMarkerSize()
{
	long result;
	InvokeHelper(0xe7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetMarkerSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Point::GetMarkerStyle()
{
	long result;
	InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetMarkerStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Point::Paste()
{
	VARIANT result;
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Point::GetPictureType()
{
	long result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Point::SetPictureType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Point::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Point::GetApplyPictToSides()
{
	BOOL result;
	InvokeHelper(0x67b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetApplyPictToSides(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Point::GetApplyPictToFront()
{
	BOOL result;
	InvokeHelper(0x67c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetApplyPictToFront(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Point::GetApplyPictToEnd()
{
	BOOL result;
	InvokeHelper(0x67d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetApplyPictToEnd(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Point::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Point::GetSecondaryPlot()
{
	BOOL result;
	InvokeHelper(0x67e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetSecondaryPlot(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Point::GetHas3DEffect()
{
	BOOL result;
	InvokeHelper(0x681, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Point::SetHas3DEffect(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x681, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Point::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Point::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

double Point::GetPictureUnit2()
{
	double result;
	InvokeHelper(0xa59, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Point::SetPictureUnit2(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xa59, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Point::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Point::ApplyDataLabels(long Type, const VARIANT& LegendKey, const VARIANT& AutoText, const VARIANT& HasLeaderLines, const VARIANT& ShowSeriesName, const VARIANT& ShowCategoryName, const VARIANT& ShowValue, const VARIANT& ShowPercentage, 
		const VARIANT& ShowBubbleSize, const VARIANT& Separator)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Type, &LegendKey, &AutoText, &HasLeaderLines, &ShowSeriesName, &ShowCategoryName, &ShowValue, &ShowPercentage, &ShowBubbleSize, &Separator);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Points properties

/////////////////////////////////////////////////////////////////////////////
// Points operations

LPDISPATCH Points::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Points::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Points::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPUNKNOWN Points::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Points::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Points::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Points::_Default(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Series properties

/////////////////////////////////////////////////////////////////////////////
// Series operations

LPDISPATCH Series::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Series::GetAxisGroup()
{
	long result;
	InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetAxisGroup(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Series::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Series::Copy()
{
	VARIANT result;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Series::DataLabels(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

VARIANT Series::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Series::ErrorBar(long Direction, long Include, long Type, const VARIANT& Amount, const VARIANT& MinusValues)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x98, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Direction, Include, Type, &Amount, &MinusValues);
	return result;
}

LPDISPATCH Series::GetErrorBars()
{
	LPDISPATCH result;
	InvokeHelper(0x9f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Series::GetExplosion()
{
	long result;
	InvokeHelper(0xb6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetExplosion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Series::GetFormula()
{
	CString result;
	InvokeHelper(0x105, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Series::SetFormula(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x105, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Series::GetFormulaLocal()
{
	CString result;
	InvokeHelper(0x107, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Series::SetFormulaLocal(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x107, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Series::GetFormulaR1C1()
{
	CString result;
	InvokeHelper(0x108, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Series::SetFormulaR1C1(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x108, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Series::GetFormulaR1C1Local()
{
	CString result;
	InvokeHelper(0x109, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Series::SetFormulaR1C1Local(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x109, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL Series::GetHasDataLabels()
{
	BOOL result;
	InvokeHelper(0x4e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetHasDataLabels(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetHasErrorBars()
{
	BOOL result;
	InvokeHelper(0xa0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetHasErrorBars(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetInvertIfNegative()
{
	BOOL result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetInvertIfNegative(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Series::GetMarkerBackgroundColor()
{
	long result;
	InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetMarkerBackgroundColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetMarkerBackgroundColorIndex()
{
	long result;
	InvokeHelper(0x4a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetMarkerBackgroundColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetMarkerForegroundColor()
{
	long result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetMarkerForegroundColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetMarkerForegroundColorIndex()
{
	long result;
	InvokeHelper(0x4c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetMarkerForegroundColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetMarkerSize()
{
	long result;
	InvokeHelper(0xe7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetMarkerSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetMarkerStyle()
{
	long result;
	InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetMarkerStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Series::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Series::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

VARIANT Series::Paste()
{
	VARIANT result;
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Series::GetPictureType()
{
	long result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetPictureType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetPlotOrder()
{
	long result;
	InvokeHelper(0xe4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetPlotOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Series::Points(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x46, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

VARIANT Series::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Series::GetSmooth()
{
	BOOL result;
	InvokeHelper(0xa3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetSmooth(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Series::Trendlines(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

long Series::GetType()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Series::GetChartType()
{
	long result;
	InvokeHelper(0x578, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetChartType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x578, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Series::GetValues()
{
	VARIANT result;
	InvokeHelper(0xa4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Series::SetValues(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xa4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Series::GetXValues()
{
	VARIANT result;
	InvokeHelper(0x457, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Series::SetXValues(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x457, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Series::GetBubbleSizes()
{
	VARIANT result;
	InvokeHelper(0x680, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Series::SetBubbleSizes(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x680, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long Series::GetBarShape()
{
	long result;
	InvokeHelper(0x57b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Series::SetBarShape(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x57b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Series::GetApplyPictToSides()
{
	BOOL result;
	InvokeHelper(0x67b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetApplyPictToSides(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetApplyPictToFront()
{
	BOOL result;
	InvokeHelper(0x67c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetApplyPictToFront(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetApplyPictToEnd()
{
	BOOL result;
	InvokeHelper(0x67d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetApplyPictToEnd(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetHas3DEffect()
{
	BOOL result;
	InvokeHelper(0x681, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetHas3DEffect(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x681, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetShadow()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Series::GetHasLeaderLines()
{
	BOOL result;
	InvokeHelper(0x572, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Series::SetHasLeaderLines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x572, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Series::GetLeaderLines()
{
	LPDISPATCH result;
	InvokeHelper(0x682, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Series::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Series::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

double Series::GetPictureUnit2()
{
	double result;
	InvokeHelper(0xa59, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Series::SetPictureUnit2(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xa59, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Series::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Series::ApplyDataLabels(long Type, const VARIANT& LegendKey, const VARIANT& AutoText, const VARIANT& HasLeaderLines, const VARIANT& ShowSeriesName, const VARIANT& ShowCategoryName, const VARIANT& ShowValue, const VARIANT& ShowPercentage, 
		const VARIANT& ShowBubbleSize, const VARIANT& Separator)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7d4, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Type, &LegendKey, &AutoText, &HasLeaderLines, &ShowSeriesName, &ShowCategoryName, &ShowValue, &ShowPercentage, &ShowBubbleSize, &Separator);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// SeriesCollection properties

/////////////////////////////////////////////////////////////////////////////
// SeriesCollection operations

LPDISPATCH SeriesCollection::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SeriesCollection::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT SeriesCollection::Extend(const VARIANT& Source, const VARIANT& Rowcol, const VARIANT& CategoryLabels)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xe3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Source, &Rowcol, &CategoryLabels);
	return result;
}

LPDISPATCH SeriesCollection::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN SeriesCollection::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesCollection::NewSeries()
{
	LPDISPATCH result;
	InvokeHelper(0x45d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SeriesCollection::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesCollection::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesCollection::Add(const VARIANT& Source, long Rowcol, const VARIANT& SeriesLabels, const VARIANT& CategoryLabels, const VARIANT& Replace)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7d2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Source, Rowcol, &SeriesLabels, &CategoryLabels, &Replace);
	return result;
}

LPDISPATCH SeriesCollection::_Default(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// SeriesLines properties

/////////////////////////////////////////////////////////////////////////////
// SeriesLines operations

CString SeriesLines::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT SeriesLines::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesLines::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesLines::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT SeriesLines::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesLines::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long SeriesLines::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH SeriesLines::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// TickLabels properties

/////////////////////////////////////////////////////////////////////////////
// TickLabels operations

LPDISPATCH TickLabels::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT TickLabels::Delete()
{
	VARIANT result;
	InvokeHelper(0x7d2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH TickLabels::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString TickLabels::GetName()
{
	CString result;
	InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString TickLabels::GetNumberFormat()
{
	CString result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void TickLabels::SetNumberFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL TickLabels::GetNumberFormatLinked()
{
	BOOL result;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void TickLabels::SetNumberFormatLinked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT TickLabels::GetNumberFormatLocal()
{
	VARIANT result;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void TickLabels::SetNumberFormatLocal(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long TickLabels::GetOrientation()
{
	long result;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TickLabels::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT TickLabels::Select()
{
	VARIANT result;
	InvokeHelper(0x7d9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long TickLabels::GetDepth()
{
	long result;
	InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long TickLabels::GetOffset()
{
	long result;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TickLabels::SetOffset(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL TickLabels::GetMultiLevel()
{
	BOOL result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void TickLabels::SetMultiLevel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH TickLabels::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TickLabels::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH TickLabels::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long TickLabels::GetAlignment()
{
	long result;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TickLabels::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long TickLabels::GetReadingOrder()
{
	long result;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void TickLabels::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Trendline properties

/////////////////////////////////////////////////////////////////////////////
// Trendline operations

LPDISPATCH Trendline::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Trendline::GetBorder()
{
	LPDISPATCH result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Trendline::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Trendline::GetDataLabel()
{
	LPDISPATCH result;
	InvokeHelper(0x9e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Trendline::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Trendline::GetDisplayEquation()
{
	BOOL result;
	InvokeHelper(0xbe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Trendline::SetDisplayEquation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xbe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Trendline::GetDisplayRSquared()
{
	BOOL result;
	InvokeHelper(0xbd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Trendline::SetDisplayRSquared(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xbd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Trendline::GetIndex()
{
	long result;
	InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

double Trendline::GetIntercept()
{
	double result;
	InvokeHelper(0xba, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Trendline::SetIntercept(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Trendline::GetInterceptIsAuto()
{
	BOOL result;
	InvokeHelper(0xbb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Trendline::SetInterceptIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xbb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Trendline::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Trendline::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL Trendline::GetNameIsAuto()
{
	BOOL result;
	InvokeHelper(0xbc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Trendline::SetNameIsAuto(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xbc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Trendline::GetOrder()
{
	long result;
	InvokeHelper(0xc0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Trendline::SetOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Trendline::GetPeriod()
{
	long result;
	InvokeHelper(0xb8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Trendline::SetPeriod(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Trendline::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Trendline::GetType()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Trendline::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Trendline::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Trendline::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

double Trendline::GetBackward2()
{
	double result;
	InvokeHelper(0xa5a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Trendline::SetBackward2(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xa5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double Trendline::GetForward2()
{
	double result;
	InvokeHelper(0xa5b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void Trendline::SetForward2(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xa5b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Trendline::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Trendlines properties

/////////////////////////////////////////////////////////////////////////////
// Trendlines operations

LPDISPATCH Trendlines::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Trendlines::Add(long Type, const VARIANT& Order, const VARIANT& Period, const VARIANT& Forward, const VARIANT& Backward, const VARIANT& Intercept, const VARIANT& DisplayEquation, const VARIANT& DisplayRSquared, const VARIANT& Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, &Order, &Period, &Forward, &Backward, &Intercept, &DisplayEquation, &DisplayRSquared, &Name);
	return result;
}

long Trendlines::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Trendlines::Item(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN Trendlines::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Trendlines::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Trendlines::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Trendlines::_Default(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// UpBars properties

/////////////////////////////////////////////////////////////////////////////
// UpBars operations

CString UpBars::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT UpBars::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH UpBars::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT UpBars::Delete()
{
	VARIANT result;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH UpBars::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0x67f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH UpBars::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long UpBars::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH UpBars::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Walls properties

/////////////////////////////////////////////////////////////////////////////
// Walls operations

CString Walls::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT Walls::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Walls::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Walls::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Walls::GetPictureType()
{
	VARIANT result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Walls::SetPictureType(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void Walls::Paste()
{
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT Walls::GetPictureUnit()
{
	VARIANT result;
	InvokeHelper(0xa2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Walls::SetPictureUnit(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xa2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long Walls::GetThickness()
{
	long result;
	InvokeHelper(0x973, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Walls::SetThickness(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x973, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Walls::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Walls::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Walls::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}
