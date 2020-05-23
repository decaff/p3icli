// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// Collection wrapper class

class Collection : public COleDispatchDriver
{
public:
	Collection() {}		// Calls COleDispatchDriver default constructor
	Collection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Collection(const Collection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// _Application wrapper class

class _Application : public COleDispatchDriver
{
public:
	_Application() {}		// Calls COleDispatchDriver default constructor
	_Application(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Application(const _Application& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetPresentations();
	LPDISPATCH GetWindows();
	LPDISPATCH GetActiveWindow();
	LPDISPATCH GetActivePresentation();
	LPDISPATCH GetSlideShowWindows();
	LPDISPATCH GetCommandBars();
	CString GetPath();
	CString GetName();
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	LPDISPATCH GetAssistant();
	CString GetBuild();
	CString GetVersion();
	CString GetOperatingSystem();
	CString GetActivePrinter();
	long GetCreator();
	LPDISPATCH GetAddIns();
	LPDISPATCH GetVbe();
	void Help(LPCTSTR HelpFile, long ContextID);
	void Quit();
	// method 'Run' not emitted because of invalid return type or parameter type
	float GetLeft();
	void SetLeft(float newValue);
	float GetTop();
	void SetTop(float newValue);
	float GetWidth();
	void SetWidth(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	long GetWindowState();
	void SetWindowState(long nNewValue);
	long GetVisible();
	void SetVisible(long nNewValue);
	long GetActive();
	void Activate();
	LPDISPATCH GetAnswerWizard();
	LPDISPATCH GetCOMAddIns();
	CString GetProductCode();
	LPDISPATCH GetDefaultWebOptions();
	LPDISPATCH GetLanguageSettings();
	long GetShowWindowsInTaskbar();
	void SetShowWindowsInTaskbar(long nNewValue);
	long GetFeatureInstall();
	void SetFeatureInstall(long nNewValue);
	LPDISPATCH GetFileDialog(long Type);
	long GetDisplayGridLines();
	void SetDisplayGridLines(long nNewValue);
	long GetAutomationSecurity();
	void SetAutomationSecurity(long nNewValue);
	LPDISPATCH GetNewPresentation();
	long GetDisplayAlerts();
	void SetDisplayAlerts(long nNewValue);
	long GetShowStartupDialog();
	void SetShowStartupDialog(long nNewValue);
	LPDISPATCH GetAutoCorrect();
	LPDISPATCH GetOptions();
	BOOL GetDisplayDocumentInformationPanel();
	void SetDisplayDocumentInformationPanel(BOOL bNewValue);
	LPDISPATCH GetAssistance();
	long GetActiveEncryptionSession();
	LPDISPATCH GetFileConverters();
};
/////////////////////////////////////////////////////////////////////////////
// _Global wrapper class

class _Global : public COleDispatchDriver
{
public:
	_Global() {}		// Calls COleDispatchDriver default constructor
	_Global(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Global(const _Global& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetActivePresentation();
	LPDISPATCH GetActiveWindow();
	LPDISPATCH GetAddIns();
	LPDISPATCH GetApplication();
	LPDISPATCH GetAssistant();
	LPDISPATCH GetPresentations();
	LPDISPATCH GetSlideShowWindows();
	LPDISPATCH GetWindows();
	LPDISPATCH GetCommandBars();
	LPDISPATCH GetAnswerWizard();
	LPDISPATCH GetFileConverters();
};
/////////////////////////////////////////////////////////////////////////////
// ColorFormat wrapper class

class ColorFormat : public COleDispatchDriver
{
public:
	ColorFormat() {}		// Calls COleDispatchDriver default constructor
	ColorFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ColorFormat(const ColorFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetRgb();
	void SetRgb(long nNewValue);
	long GetType();
	long GetSchemeColor();
	void SetSchemeColor(long nNewValue);
	float GetTintAndShade();
	void SetTintAndShade(float newValue);
	long GetObjectThemeColor();
	void SetObjectThemeColor(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// SlideShowWindow wrapper class

class SlideShowWindow : public COleDispatchDriver
{
public:
	SlideShowWindow() {}		// Calls COleDispatchDriver default constructor
	SlideShowWindow(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SlideShowWindow(const SlideShowWindow& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetView();
	LPDISPATCH GetPresentation();
	long GetIsFullScreen();
	float GetLeft();
	void SetLeft(float newValue);
	float GetTop();
	void SetTop(float newValue);
	float GetWidth();
	void SetWidth(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	long GetActive();
	void Activate();
};
/////////////////////////////////////////////////////////////////////////////
// Selection wrapper class

class Selection : public COleDispatchDriver
{
public:
	Selection() {}		// Calls COleDispatchDriver default constructor
	Selection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Selection(const Selection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	void Cut();
	void Copy();
	void Delete();
	void Unselect();
	long GetType();
	LPDISPATCH GetSlideRange();
	LPDISPATCH GetShapeRange();
	LPDISPATCH GetTextRange();
	LPDISPATCH GetChildShapeRange();
	BOOL GetHasChildShapeRange();
};
/////////////////////////////////////////////////////////////////////////////
// DocumentWindows wrapper class

class DocumentWindows : public COleDispatchDriver
{
public:
	DocumentWindows() {}		// Calls COleDispatchDriver default constructor
	DocumentWindows(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DocumentWindows(const DocumentWindows& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	void Arrange(long arrangeStyle);
};
/////////////////////////////////////////////////////////////////////////////
// SlideShowWindows wrapper class

class SlideShowWindows : public COleDispatchDriver
{
public:
	SlideShowWindows() {}		// Calls COleDispatchDriver default constructor
	SlideShowWindows(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SlideShowWindows(const SlideShowWindows& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// DocumentWindow wrapper class

class DocumentWindow : public COleDispatchDriver
{
public:
	DocumentWindow() {}		// Calls COleDispatchDriver default constructor
	DocumentWindow(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DocumentWindow(const DocumentWindow& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetSelection();
	LPDISPATCH GetView();
	LPDISPATCH GetPresentation();
	long GetViewType();
	void SetViewType(long nNewValue);
	long GetBlackAndWhite();
	void SetBlackAndWhite(long nNewValue);
	long GetActive();
	long GetWindowState();
	void SetWindowState(long nNewValue);
	CString GetCaption();
	float GetLeft();
	void SetLeft(float newValue);
	float GetTop();
	void SetTop(float newValue);
	float GetWidth();
	void SetWidth(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	void FitToPage();
	void Activate();
	void LargeScroll(long Down, long Up, long ToRight, long ToLeft);
	void SmallScroll(long Down, long Up, long ToRight, long ToLeft);
	LPDISPATCH NewWindow();
	void Close();
	LPDISPATCH GetActivePane();
	LPDISPATCH GetPanes();
	long GetSplitVertical();
	void SetSplitVertical(long nNewValue);
	long GetSplitHorizontal();
	void SetSplitHorizontal(long nNewValue);
	LPDISPATCH RangeFromPoint(long X, long Y);
	long PointsToScreenPixelsX(float Points);
	long PointsToScreenPixelsY(float Points);
	void ScrollIntoView(float Left, float Top, float Width, float Height, long Start);
};
/////////////////////////////////////////////////////////////////////////////
// View wrapper class

class View : public COleDispatchDriver
{
public:
	View() {}		// Calls COleDispatchDriver default constructor
	View(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	View(const View& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetType();
	long GetZoom();
	void SetZoom(long nNewValue);
	void Paste();
	LPDISPATCH GetSlide();
	void SetSlide(LPDISPATCH newValue);
	void GotoSlide(long Index);
	long GetDisplaySlideMiniature();
	void SetDisplaySlideMiniature(long nNewValue);
	long GetZoomToFit();
	void SetZoomToFit(long nNewValue);
	void PasteSpecial(long DataType, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link);
	LPDISPATCH GetPrintOptions();
	void PrintOut(long From, long To, LPCTSTR PrintToFile, long Copies, long Collate);
};
/////////////////////////////////////////////////////////////////////////////
// SlideShowView wrapper class

class SlideShowView : public COleDispatchDriver
{
public:
	SlideShowView() {}		// Calls COleDispatchDriver default constructor
	SlideShowView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SlideShowView(const SlideShowView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetZoom();
	LPDISPATCH GetSlide();
	long GetPointerType();
	void SetPointerType(long nNewValue);
	long GetState();
	void SetState(long nNewValue);
	long GetAcceleratorsEnabled();
	void SetAcceleratorsEnabled(long nNewValue);
	float GetPresentationElapsedTime();
	float GetSlideElapsedTime();
	void SetSlideElapsedTime(float newValue);
	LPDISPATCH GetLastSlideViewed();
	long GetAdvanceMode();
	LPDISPATCH GetPointerColor();
	long GetIsNamedShow();
	CString GetSlideShowName();
	void DrawLine(float BeginX, float BeginY, float EndX, float EndY);
	void EraseDrawing();
	void First();
	void Last();
	void Next();
	void Previous();
	void GotoSlide(long Index, long ResetSlide);
	void GotoNamedShow(LPCTSTR SlideShowName);
	void EndNamedShow();
	void ResetSlideTime();
	void Exit();
	long GetCurrentShowPosition();
	void GotoClick(long Index);
	long GetClickIndex();
	long GetClickCount();
	BOOL FirstAnimationIsAutomatic();
};
/////////////////////////////////////////////////////////////////////////////
// SlideShowSettings wrapper class

class SlideShowSettings : public COleDispatchDriver
{
public:
	SlideShowSettings() {}		// Calls COleDispatchDriver default constructor
	SlideShowSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SlideShowSettings(const SlideShowSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetPointerColor();
	LPDISPATCH GetNamedSlideShows();
	long GetStartingSlide();
	void SetStartingSlide(long nNewValue);
	long GetEndingSlide();
	void SetEndingSlide(long nNewValue);
	long GetAdvanceMode();
	void SetAdvanceMode(long nNewValue);
	LPDISPATCH Run();
	long GetLoopUntilStopped();
	void SetLoopUntilStopped(long nNewValue);
	long GetShowType();
	void SetShowType(long nNewValue);
	long GetShowWithNarration();
	void SetShowWithNarration(long nNewValue);
	long GetShowWithAnimation();
	void SetShowWithAnimation(long nNewValue);
	CString GetSlideShowName();
	void SetSlideShowName(LPCTSTR lpszNewValue);
	long GetRangeType();
	void SetRangeType(long nNewValue);
	long GetShowScrollbar();
	void SetShowScrollbar(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// NamedSlideShows wrapper class

class NamedSlideShows : public COleDispatchDriver
{
public:
	NamedSlideShows() {}		// Calls COleDispatchDriver default constructor
	NamedSlideShows(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	NamedSlideShows(const NamedSlideShows& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR Name, const VARIANT& safeArrayOfSlideIDs);
};
/////////////////////////////////////////////////////////////////////////////
// NamedSlideShow wrapper class

class NamedSlideShow : public COleDispatchDriver
{
public:
	NamedSlideShow() {}		// Calls COleDispatchDriver default constructor
	NamedSlideShow(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	NamedSlideShow(const NamedSlideShow& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString GetName();
	void Delete();
	VARIANT GetSlideIDs();
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// PrintOptions wrapper class

class PrintOptions : public COleDispatchDriver
{
public:
	PrintOptions() {}		// Calls COleDispatchDriver default constructor
	PrintOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PrintOptions(const PrintOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetPrintColorType();
	void SetPrintColorType(long nNewValue);
	long GetCollate();
	void SetCollate(long nNewValue);
	long GetFitToPage();
	void SetFitToPage(long nNewValue);
	long GetFrameSlides();
	void SetFrameSlides(long nNewValue);
	long GetNumberOfCopies();
	void SetNumberOfCopies(long nNewValue);
	long GetOutputType();
	void SetOutputType(long nNewValue);
	LPDISPATCH GetParent();
	long GetPrintHiddenSlides();
	void SetPrintHiddenSlides(long nNewValue);
	long GetPrintInBackground();
	void SetPrintInBackground(long nNewValue);
	long GetRangeType();
	void SetRangeType(long nNewValue);
	LPDISPATCH GetRanges();
	long GetPrintFontsAsGraphics();
	void SetPrintFontsAsGraphics(long nNewValue);
	CString GetSlideShowName();
	void SetSlideShowName(LPCTSTR lpszNewValue);
	CString GetActivePrinter();
	void SetActivePrinter(LPCTSTR lpszNewValue);
	long GetHandoutOrder();
	void SetHandoutOrder(long nNewValue);
	long GetPrintComments();
	void SetPrintComments(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// PrintRanges wrapper class

class PrintRanges : public COleDispatchDriver
{
public:
	PrintRanges() {}		// Calls COleDispatchDriver default constructor
	PrintRanges(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PrintRanges(const PrintRanges& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH Add(long Start, long End);
	LPDISPATCH GetApplication();
	void ClearAll();
	LPDISPATCH Item(long Index);
	LPDISPATCH GetParent();
};
/////////////////////////////////////////////////////////////////////////////
// PrintRange wrapper class

class PrintRange : public COleDispatchDriver
{
public:
	PrintRange() {}		// Calls COleDispatchDriver default constructor
	PrintRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PrintRange(const PrintRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetStart();
	long GetEnd();
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// AddIns wrapper class

class AddIns : public COleDispatchDriver
{
public:
	AddIns() {}		// Calls COleDispatchDriver default constructor
	AddIns(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AddIns(const AddIns& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(VARIANT* Index);
	LPDISPATCH Add(LPCTSTR FileName);
	void Remove(VARIANT* Index);
};
/////////////////////////////////////////////////////////////////////////////
// AddIn wrapper class

class AddIn : public COleDispatchDriver
{
public:
	AddIn() {}		// Calls COleDispatchDriver default constructor
	AddIn(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AddIn(const AddIn& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString GetFullName();
	CString GetName();
	CString GetPath();
	long GetRegistered();
	void SetRegistered(long nNewValue);
	long GetAutoLoad();
	void SetAutoLoad(long nNewValue);
	long GetLoaded();
	void SetLoaded(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Presentations wrapper class

class Presentations : public COleDispatchDriver
{
public:
	Presentations() {}		// Calls COleDispatchDriver default constructor
	Presentations(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Presentations(const Presentations& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(const VARIANT& Index);
	LPDISPATCH Add(long WithWindow);
	LPDISPATCH Open(LPCTSTR FileName, long ReadOnly, long Untitled, long WithWindow);
	void CheckOut(LPCTSTR FileName);
	BOOL CanCheckOut(LPCTSTR FileName);
	LPDISPATCH Open2007(LPCTSTR FileName, long ReadOnly, long Untitled, long WithWindow, long OpenAndRepair);
};
/////////////////////////////////////////////////////////////////////////////
// Hyperlinks wrapper class

class Hyperlinks : public COleDispatchDriver
{
public:
	Hyperlinks() {}		// Calls COleDispatchDriver default constructor
	Hyperlinks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Hyperlinks(const Hyperlinks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// Hyperlink wrapper class

class Hyperlink : public COleDispatchDriver
{
public:
	Hyperlink() {}		// Calls COleDispatchDriver default constructor
	Hyperlink(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Hyperlink(const Hyperlink& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetType();
	CString GetAddress();
	void SetAddress(LPCTSTR lpszNewValue);
	CString GetSubAddress();
	void SetSubAddress(LPCTSTR lpszNewValue);
	void AddToFavorites();
	CString GetEmailSubject();
	void SetEmailSubject(LPCTSTR lpszNewValue);
	CString GetScreenTip();
	void SetScreenTip(LPCTSTR lpszNewValue);
	CString GetTextToDisplay();
	void SetTextToDisplay(LPCTSTR lpszNewValue);
	long GetShowAndReturn();
	void SetShowAndReturn(long nNewValue);
	void Follow();
	void CreateNewDocument(LPCTSTR FileName, long EditNow, long Overwrite);
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// PageSetup wrapper class

class PageSetup : public COleDispatchDriver
{
public:
	PageSetup() {}		// Calls COleDispatchDriver default constructor
	PageSetup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PageSetup(const PageSetup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetFirstSlideNumber();
	void SetFirstSlideNumber(long nNewValue);
	float GetSlideHeight();
	void SetSlideHeight(float newValue);
	float GetSlideWidth();
	void SetSlideWidth(float newValue);
	long GetSlideSize();
	void SetSlideSize(long nNewValue);
	long GetNotesOrientation();
	void SetNotesOrientation(long nNewValue);
	long GetSlideOrientation();
	void SetSlideOrientation(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Fonts wrapper class

class Fonts : public COleDispatchDriver
{
public:
	Fonts() {}		// Calls COleDispatchDriver default constructor
	Fonts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fonts(const Fonts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(const VARIANT& Index);
	void Replace(LPCTSTR Original, LPCTSTR Replacement);
};
/////////////////////////////////////////////////////////////////////////////
// ExtraColors wrapper class

class ExtraColors : public COleDispatchDriver
{
public:
	ExtraColors() {}		// Calls COleDispatchDriver default constructor
	ExtraColors(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ExtraColors(const ExtraColors& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long Item(long Index);
	void Add(long Type);
	void Clear();
};
/////////////////////////////////////////////////////////////////////////////
// Slides wrapper class

class Slides : public COleDispatchDriver
{
public:
	Slides() {}		// Calls COleDispatchDriver default constructor
	Slides(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Slides(const Slides& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(const VARIANT& Index);
	LPDISPATCH FindBySlideID(long SlideID);
	long InsertFromFile(LPCTSTR FileName, long Index, long SlideStart, long SlideEnd);
	LPDISPATCH Range(const VARIANT& Index);
	LPDISPATCH Paste(long Index);
	LPDISPATCH AddSlide(long Index, LPDISPATCH pCustomLayout);
};
/////////////////////////////////////////////////////////////////////////////
// _Slide wrapper class

class _Slide : public COleDispatchDriver
{
public:
	_Slide() {}		// Calls COleDispatchDriver default constructor
	_Slide(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Slide(const _Slide& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetShapes();
	LPDISPATCH GetHeadersFooters();
	LPDISPATCH GetSlideShowTransition();
	LPDISPATCH GetColorScheme();
	void SetColorScheme(LPDISPATCH newValue);
	LPDISPATCH GetBackground();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetSlideID();
	long GetPrintSteps();
	void Select();
	void Cut();
	void Copy();
	long GetLayout();
	void SetLayout(long nNewValue);
	LPDISPATCH Duplicate();
	void Delete();
	LPDISPATCH GetTags();
	long GetSlideIndex();
	long GetSlideNumber();
	long GetDisplayMasterShapes();
	void SetDisplayMasterShapes(long nNewValue);
	long GetFollowMasterBackground();
	void SetFollowMasterBackground(long nNewValue);
	LPDISPATCH GetNotesPage();
	LPDISPATCH GetMaster();
	LPDISPATCH GetHyperlinks();
	void Export(LPCTSTR FileName, LPCTSTR FilterName, long ScaleWidth, long ScaleHeight);
	LPDISPATCH GetComments();
	LPDISPATCH GetDesign();
	void SetDesign(LPDISPATCH newValue);
	void MoveTo(long toPos);
	LPDISPATCH GetTimeLine();
	void ApplyTemplate(LPCTSTR FileName);
	LPDISPATCH GetCustomLayout();
	void SetCustomLayout(LPDISPATCH newValue);
	void ApplyTheme(LPCTSTR themeName);
	LPDISPATCH GetThemeColorScheme();
	void ApplyThemeColorScheme(LPCTSTR themeColorSchemeName);
	long GetBackgroundStyle();
	void SetBackgroundStyle(long nNewValue);
	LPDISPATCH GetCustomerData();
	void PublishSlides(LPCTSTR SlideLibraryUrl, BOOL Overwrite, BOOL UseSlideOrder);
};
/////////////////////////////////////////////////////////////////////////////
// SlideRange wrapper class

class SlideRange : public COleDispatchDriver
{
public:
	SlideRange() {}		// Calls COleDispatchDriver default constructor
	SlideRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SlideRange(const SlideRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetShapes();
	LPDISPATCH GetHeadersFooters();
	LPDISPATCH GetSlideShowTransition();
	LPDISPATCH GetColorScheme();
	void SetColorScheme(LPDISPATCH newValue);
	LPDISPATCH GetBackground();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetSlideID();
	long GetPrintSteps();
	void Select();
	void Cut();
	void Copy();
	long GetLayout();
	void SetLayout(long nNewValue);
	LPDISPATCH Duplicate();
	void Delete();
	LPDISPATCH GetTags();
	long GetSlideIndex();
	long GetSlideNumber();
	long GetDisplayMasterShapes();
	void SetDisplayMasterShapes(long nNewValue);
	long GetFollowMasterBackground();
	void SetFollowMasterBackground(long nNewValue);
	LPDISPATCH GetNotesPage();
	LPDISPATCH GetMaster();
	LPDISPATCH GetHyperlinks();
	void Export(LPCTSTR FileName, LPCTSTR FilterName, long ScaleWidth, long ScaleHeight);
	LPDISPATCH Item(const VARIANT& Index);
	long GetCount();
	LPDISPATCH GetComments();
	LPDISPATCH GetDesign();
	void SetDesign(LPDISPATCH newValue);
	void MoveTo(long toPos);
	LPDISPATCH GetTimeLine();
	void ApplyTemplate(LPCTSTR FileName);
	LPDISPATCH GetCustomLayout();
	void SetCustomLayout(LPDISPATCH newValue);
	void ApplyTheme(LPCTSTR themeName);
	LPDISPATCH GetThemeColorScheme();
	void ApplyThemeColorScheme(LPCTSTR themeColorSchemeName);
	long GetBackgroundStyle();
	void SetBackgroundStyle(long nNewValue);
	LPDISPATCH GetCustomerData();
	void PublishSlides(LPCTSTR SlideLibraryUrl, BOOL Overwrite, BOOL UseSlideOrder);
};
/////////////////////////////////////////////////////////////////////////////
// _Master wrapper class

class _Master : public COleDispatchDriver
{
public:
	_Master() {}		// Calls COleDispatchDriver default constructor
	_Master(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Master(const _Master& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetShapes();
	LPDISPATCH GetHeadersFooters();
	LPDISPATCH GetColorScheme();
	void SetColorScheme(LPDISPATCH newValue);
	LPDISPATCH GetBackground();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void Delete();
	float GetHeight();
	float GetWidth();
	LPDISPATCH GetTextStyles();
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetDesign();
	LPDISPATCH GetTimeLine();
	LPDISPATCH GetSlideShowTransition();
	LPDISPATCH GetCustomLayouts();
	LPDISPATCH GetTheme();
	void ApplyTheme(LPCTSTR themeName);
	long GetBackgroundStyle();
	void SetBackgroundStyle(long nNewValue);
	LPDISPATCH GetCustomerData();
};
/////////////////////////////////////////////////////////////////////////////
// ColorSchemes wrapper class

class ColorSchemes : public COleDispatchDriver
{
public:
	ColorSchemes() {}		// Calls COleDispatchDriver default constructor
	ColorSchemes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ColorSchemes(const ColorSchemes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(LPDISPATCH Scheme);
};
/////////////////////////////////////////////////////////////////////////////
// ColorScheme wrapper class

class ColorScheme : public COleDispatchDriver
{
public:
	ColorScheme() {}		// Calls COleDispatchDriver default constructor
	ColorScheme(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ColorScheme(const ColorScheme& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Colors(long SchemeColor);
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// RGBColor wrapper class

class RGBColor : public COleDispatchDriver
{
public:
	RGBColor() {}		// Calls COleDispatchDriver default constructor
	RGBColor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	RGBColor(const RGBColor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetRgb();
	void SetRgb(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// SlideShowTransition wrapper class

class SlideShowTransition : public COleDispatchDriver
{
public:
	SlideShowTransition() {}		// Calls COleDispatchDriver default constructor
	SlideShowTransition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SlideShowTransition(const SlideShowTransition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetAdvanceOnClick();
	void SetAdvanceOnClick(long nNewValue);
	long GetAdvanceOnTime();
	void SetAdvanceOnTime(long nNewValue);
	float GetAdvanceTime();
	void SetAdvanceTime(float newValue);
	long GetEntryEffect();
	void SetEntryEffect(long nNewValue);
	long GetHidden();
	void SetHidden(long nNewValue);
	long GetLoopSoundUntilNext();
	void SetLoopSoundUntilNext(long nNewValue);
	LPDISPATCH GetSoundEffect();
	long GetSpeed();
	void SetSpeed(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// SoundEffect wrapper class

class SoundEffect : public COleDispatchDriver
{
public:
	SoundEffect() {}		// Calls COleDispatchDriver default constructor
	SoundEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SoundEffect(const SoundEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetType();
	void SetType(long nNewValue);
	void ImportFromFile(LPCTSTR FileName);
	void Play();
};
/////////////////////////////////////////////////////////////////////////////
// SoundFormat wrapper class

class SoundFormat : public COleDispatchDriver
{
public:
	SoundFormat() {}		// Calls COleDispatchDriver default constructor
	SoundFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SoundFormat(const SoundFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void Play();
	void Import(LPCTSTR FileName);
	long Export(LPCTSTR FileName);
	long GetType();
	CString GetSourceFullName();
};
/////////////////////////////////////////////////////////////////////////////
// HeadersFooters wrapper class

class HeadersFooters : public COleDispatchDriver
{
public:
	HeadersFooters() {}		// Calls COleDispatchDriver default constructor
	HeadersFooters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	HeadersFooters(const HeadersFooters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetDateAndTime();
	LPDISPATCH GetSlideNumber();
	LPDISPATCH GetHeader();
	LPDISPATCH GetFooter();
	long GetDisplayOnTitleSlide();
	void SetDisplayOnTitleSlide(long nNewValue);
	void Clear();
};
/////////////////////////////////////////////////////////////////////////////
// Shapes wrapper class

class Shapes : public COleDispatchDriver
{
public:
	Shapes() {}		// Calls COleDispatchDriver default constructor
	Shapes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Shapes(const Shapes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN Get_NewEnum();
	LPDISPATCH AddCallout(long Type, float Left, float Top, float Width, float Height);
	LPDISPATCH AddConnector(long Type, float BeginX, float BeginY, float EndX, float EndY);
	LPDISPATCH AddCurve(const VARIANT& SafeArrayOfPoints);
	LPDISPATCH AddLabel(long Orientation, float Left, float Top, float Width, float Height);
	LPDISPATCH AddLine(float BeginX, float BeginY, float EndX, float EndY);
	LPDISPATCH AddPicture(LPCTSTR FileName, long LinkToFile, long SaveWithDocument, float Left, float Top, float Width, float Height);
	LPDISPATCH AddPolyline(const VARIANT& SafeArrayOfPoints);
	LPDISPATCH AddShape(long Type, float Left, float Top, float Width, float Height);
	LPDISPATCH AddTextEffect(long PresetTextEffect, LPCTSTR Text, LPCTSTR FontName, float FontSize, long FontBold, long FontItalic, float Left, float Top);
	LPDISPATCH AddTextbox(long Orientation, float Left, float Top, float Width, float Height);
	LPDISPATCH BuildFreeform(long EditingType, float X1, float Y1);
	void SelectAll();
	LPDISPATCH Range(const VARIANT& Index);
	long GetHasTitle();
	LPDISPATCH AddTitle();
	LPDISPATCH GetTitle();
	LPDISPATCH GetPlaceholders();
	LPDISPATCH AddOLEObject(float Left, float Top, float Width, float Height, LPCTSTR ClassName, LPCTSTR FileName, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link);
	LPDISPATCH AddComment(float Left, float Top, float Width, float Height);
	LPDISPATCH AddPlaceholder(long Type, float Left, float Top, float Width, float Height);
	LPDISPATCH AddMediaObject(LPCTSTR FileName, float Left, float Top, float Width, float Height);
	LPDISPATCH Paste();
	LPDISPATCH AddTable(long NumRows, long NumColumns, float Left, float Top, float Width, float Height);
	LPDISPATCH PasteSpecial(long DataType, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link);
	LPDISPATCH AddChart(long Type, float Left, float Top, float Width, float Height);
};
/////////////////////////////////////////////////////////////////////////////
// Placeholders wrapper class

class Placeholders : public COleDispatchDriver
{
public:
	Placeholders() {}		// Calls COleDispatchDriver default constructor
	Placeholders(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Placeholders(const Placeholders& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH FindByName(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// PlaceholderFormat wrapper class

class PlaceholderFormat : public COleDispatchDriver
{
public:
	PlaceholderFormat() {}		// Calls COleDispatchDriver default constructor
	PlaceholderFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PlaceholderFormat(const PlaceholderFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetContainedType();
};
/////////////////////////////////////////////////////////////////////////////
// FreeformBuilder wrapper class

class FreeformBuilder : public COleDispatchDriver
{
public:
	FreeformBuilder() {}		// Calls COleDispatchDriver default constructor
	FreeformBuilder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	FreeformBuilder(const FreeformBuilder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void AddNodes(long SegmentType, long EditingType, float X1, float Y1, float X2, float Y2, float X3, float Y3);
	LPDISPATCH ConvertToShape();
};
/////////////////////////////////////////////////////////////////////////////
// Shape wrapper class

class Shape : public COleDispatchDriver
{
public:
	Shape() {}		// Calls COleDispatchDriver default constructor
	Shape(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Shape(const Shape& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void Apply();
	void Delete();
	void Flip(long FlipCmd);
	void IncrementLeft(float Increment);
	void IncrementRotation(float Increment);
	void IncrementTop(float Increment);
	void PickUp();
	void RerouteConnections();
	void ScaleHeight(float Factor, long RelativeToOriginalSize, long fScale);
	void ScaleWidth(float Factor, long RelativeToOriginalSize, long fScale);
	void SetShapesDefaultProperties();
	LPDISPATCH Ungroup();
	void ZOrder(long ZOrderCmd);
	LPDISPATCH GetAdjustments();
	long GetAutoShapeType();
	void SetAutoShapeType(long nNewValue);
	long GetBlackWhiteMode();
	void SetBlackWhiteMode(long nNewValue);
	LPDISPATCH GetCallout();
	long GetConnectionSiteCount();
	long GetConnector();
	LPDISPATCH GetConnectorFormat();
	LPDISPATCH GetFill();
	LPDISPATCH GetGroupItems();
	float GetHeight();
	void SetHeight(float newValue);
	long GetHorizontalFlip();
	float GetLeft();
	void SetLeft(float newValue);
	LPDISPATCH GetLine();
	long GetLockAspectRatio();
	void SetLockAspectRatio(long nNewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	LPDISPATCH GetNodes();
	float GetRotation();
	void SetRotation(float newValue);
	LPDISPATCH GetPictureFormat();
	LPDISPATCH GetShadow();
	LPDISPATCH GetTextEffect();
	LPDISPATCH GetTextFrame();
	LPDISPATCH GetThreeD();
	float GetTop();
	void SetTop(float newValue);
	long GetType();
	long GetVerticalFlip();
	VARIANT GetVertices();
	long GetVisible();
	void SetVisible(long nNewValue);
	float GetWidth();
	void SetWidth(float newValue);
	long GetZOrderPosition();
	LPDISPATCH GetOLEFormat();
	LPDISPATCH GetLinkFormat();
	LPDISPATCH GetPlaceholderFormat();
	LPDISPATCH GetAnimationSettings();
	LPDISPATCH GetActionSettings();
	LPDISPATCH GetTags();
	void Cut();
	void Copy();
	void Select(long Replace);
	LPDISPATCH Duplicate();
	long GetMediaType();
	long GetHasTextFrame();
	CString GetAlternativeText();
	void SetAlternativeText(LPCTSTR lpszNewValue);
	long GetHasTable();
	LPDISPATCH GetTable();
	long GetChild();
	LPDISPATCH GetParentGroup();
	long GetId();
	LPDISPATCH GetCustomerData();
	LPDISPATCH GetTextFrame2();
	long GetHasChart();
	long GetShapeStyle();
	void SetShapeStyle(long nNewValue);
	long GetBackgroundStyle();
	void SetBackgroundStyle(long nNewValue);
	LPDISPATCH GetSoftEdge();
	LPDISPATCH GetGlow();
	LPDISPATCH GetReflection();
	LPDISPATCH GetChart();
};
/////////////////////////////////////////////////////////////////////////////
// ShapeRange wrapper class

class ShapeRange : public COleDispatchDriver
{
public:
	ShapeRange() {}		// Calls COleDispatchDriver default constructor
	ShapeRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ShapeRange(const ShapeRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void Apply();
	void Delete();
	void Flip(long FlipCmd);
	void IncrementLeft(float Increment);
	void IncrementRotation(float Increment);
	void IncrementTop(float Increment);
	void PickUp();
	void RerouteConnections();
	void ScaleHeight(float Factor, long RelativeToOriginalSize, long fScale);
	void ScaleWidth(float Factor, long RelativeToOriginalSize, long fScale);
	void SetShapesDefaultProperties();
	LPDISPATCH Ungroup();
	void ZOrder(long ZOrderCmd);
	LPDISPATCH GetAdjustments();
	long GetAutoShapeType();
	void SetAutoShapeType(long nNewValue);
	long GetBlackWhiteMode();
	void SetBlackWhiteMode(long nNewValue);
	LPDISPATCH GetCallout();
	long GetConnectionSiteCount();
	long GetConnector();
	LPDISPATCH GetConnectorFormat();
	LPDISPATCH GetFill();
	LPDISPATCH GetGroupItems();
	float GetHeight();
	void SetHeight(float newValue);
	long GetHorizontalFlip();
	float GetLeft();
	void SetLeft(float newValue);
	LPDISPATCH GetLine();
	long GetLockAspectRatio();
	void SetLockAspectRatio(long nNewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	LPDISPATCH GetNodes();
	float GetRotation();
	void SetRotation(float newValue);
	LPDISPATCH GetPictureFormat();
	LPDISPATCH GetShadow();
	LPDISPATCH GetTextEffect();
	LPDISPATCH GetTextFrame();
	LPDISPATCH GetThreeD();
	float GetTop();
	void SetTop(float newValue);
	long GetType();
	long GetVerticalFlip();
	VARIANT GetVertices();
	long GetVisible();
	void SetVisible(long nNewValue);
	float GetWidth();
	void SetWidth(float newValue);
	long GetZOrderPosition();
	LPDISPATCH GetOLEFormat();
	LPDISPATCH GetLinkFormat();
	LPDISPATCH GetPlaceholderFormat();
	LPDISPATCH GetAnimationSettings();
	LPDISPATCH GetActionSettings();
	LPDISPATCH GetTags();
	void Cut();
	void Copy();
	void Select(long Replace);
	LPDISPATCH Duplicate();
	long GetMediaType();
	long GetHasTextFrame();
	LPDISPATCH Item(const VARIANT& Index);
	long GetCount();
	LPDISPATCH Group();
	LPDISPATCH Regroup();
	void Align(long AlignCmd, long RelativeTo);
	void Distribute(long DistributeCmd, long RelativeTo);
	CString GetAlternativeText();
	void SetAlternativeText(LPCTSTR lpszNewValue);
	long GetHasTable();
	LPDISPATCH GetTable();
	long GetChild();
	LPDISPATCH GetParentGroup();
	long GetId();
	LPDISPATCH GetCustomerData();
	LPDISPATCH GetTextFrame2();
	long GetHasChart();
	long GetShapeStyle();
	void SetShapeStyle(long nNewValue);
	long GetBackgroundStyle();
	void SetBackgroundStyle(long nNewValue);
	LPDISPATCH GetSoftEdge();
	LPDISPATCH GetGlow();
	LPDISPATCH GetReflection();
	LPDISPATCH GetChart();
};
/////////////////////////////////////////////////////////////////////////////
// GroupShapes wrapper class

class GroupShapes : public COleDispatchDriver
{
public:
	GroupShapes() {}		// Calls COleDispatchDriver default constructor
	GroupShapes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	GroupShapes(const GroupShapes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN Get_NewEnum();
	LPDISPATCH Range(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Adjustments wrapper class

class Adjustments : public COleDispatchDriver
{
public:
	Adjustments() {}		// Calls COleDispatchDriver default constructor
	Adjustments(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Adjustments(const Adjustments& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetCount();
	float GetItem(long Index);
	void SetItem(long Index, float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// PictureFormat wrapper class

class PictureFormat : public COleDispatchDriver
{
public:
	PictureFormat() {}		// Calls COleDispatchDriver default constructor
	PictureFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PictureFormat(const PictureFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void IncrementBrightness(float Increment);
	void IncrementContrast(float Increment);
	float GetBrightness();
	void SetBrightness(float newValue);
	long GetColorType();
	void SetColorType(long nNewValue);
	float GetContrast();
	void SetContrast(float newValue);
	float GetCropBottom();
	void SetCropBottom(float newValue);
	float GetCropLeft();
	void SetCropLeft(float newValue);
	float GetCropRight();
	void SetCropRight(float newValue);
	float GetCropTop();
	void SetCropTop(float newValue);
	long GetTransparencyColor();
	void SetTransparencyColor(long nNewValue);
	long GetTransparentBackground();
	void SetTransparentBackground(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// FillFormat wrapper class

class FillFormat : public COleDispatchDriver
{
public:
	FillFormat() {}		// Calls COleDispatchDriver default constructor
	FillFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	FillFormat(const FillFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void Background();
	void OneColorGradient(long Style, long Variant, float Degree);
	void Patterned(long Pattern);
	void PresetGradient(long Style, long Variant, long PresetGradientType);
	void PresetTextured(long PresetTexture);
	void Solid();
	void TwoColorGradient(long Style, long Variant);
	void UserPicture(LPCTSTR PictureFile);
	void UserTextured(LPCTSTR TextureFile);
	LPDISPATCH GetBackColor();
	void SetBackColor(LPDISPATCH newValue);
	LPDISPATCH GetForeColor();
	void SetForeColor(LPDISPATCH newValue);
	long GetGradientColorType();
	float GetGradientDegree();
	long GetGradientStyle();
	long GetGradientVariant();
	long GetPattern();
	long GetPresetGradientType();
	long GetPresetTexture();
	CString GetTextureName();
	long GetTextureType();
	float GetTransparency();
	void SetTransparency(float newValue);
	long GetType();
	long GetVisible();
	void SetVisible(long nNewValue);
	LPDISPATCH GetGradientStops();
	float GetTextureOffsetX();
	void SetTextureOffsetX(float newValue);
	float GetTextureOffsetY();
	void SetTextureOffsetY(float newValue);
	long GetTextureAlignment();
	void SetTextureAlignment(long nNewValue);
	float GetTextureHorizontalScale();
	void SetTextureHorizontalScale(float newValue);
	float GetTextureVerticalScale();
	void SetTextureVerticalScale(float newValue);
	long GetTextureTile();
	void SetTextureTile(long nNewValue);
	long GetRotateWithObject();
	void SetRotateWithObject(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// LineFormat wrapper class

class LineFormat : public COleDispatchDriver
{
public:
	LineFormat() {}		// Calls COleDispatchDriver default constructor
	LineFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	LineFormat(const LineFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetBackColor();
	void SetBackColor(LPDISPATCH newValue);
	long GetBeginArrowheadLength();
	void SetBeginArrowheadLength(long nNewValue);
	long GetBeginArrowheadStyle();
	void SetBeginArrowheadStyle(long nNewValue);
	long GetBeginArrowheadWidth();
	void SetBeginArrowheadWidth(long nNewValue);
	long GetDashStyle();
	void SetDashStyle(long nNewValue);
	long GetEndArrowheadLength();
	void SetEndArrowheadLength(long nNewValue);
	long GetEndArrowheadStyle();
	void SetEndArrowheadStyle(long nNewValue);
	long GetEndArrowheadWidth();
	void SetEndArrowheadWidth(long nNewValue);
	LPDISPATCH GetForeColor();
	void SetForeColor(LPDISPATCH newValue);
	long GetPattern();
	void SetPattern(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	float GetTransparency();
	void SetTransparency(float newValue);
	long GetVisible();
	void SetVisible(long nNewValue);
	float GetWeight();
	void SetWeight(float newValue);
	long GetInsetPen();
	void SetInsetPen(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ShadowFormat wrapper class

class ShadowFormat : public COleDispatchDriver
{
public:
	ShadowFormat() {}		// Calls COleDispatchDriver default constructor
	ShadowFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ShadowFormat(const ShadowFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void IncrementOffsetX(float Increment);
	void IncrementOffsetY(float Increment);
	LPDISPATCH GetForeColor();
	void SetForeColor(LPDISPATCH newValue);
	long GetObscured();
	void SetObscured(long nNewValue);
	float GetOffsetX();
	void SetOffsetX(float newValue);
	float GetOffsetY();
	void SetOffsetY(float newValue);
	float GetTransparency();
	void SetTransparency(float newValue);
	long GetType();
	void SetType(long nNewValue);
	long GetVisible();
	void SetVisible(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	float GetBlur();
	void SetBlur(float newValue);
	float GetSize();
	void SetSize(float newValue);
	long GetRotateWithShape();
	void SetRotateWithShape(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ConnectorFormat wrapper class

class ConnectorFormat : public COleDispatchDriver
{
public:
	ConnectorFormat() {}		// Calls COleDispatchDriver default constructor
	ConnectorFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ConnectorFormat(const ConnectorFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void BeginConnect(LPDISPATCH ConnectedShape, long ConnectionSite);
	void BeginDisconnect();
	void EndConnect(LPDISPATCH ConnectedShape, long ConnectionSite);
	void EndDisconnect();
	long GetBeginConnected();
	LPDISPATCH GetBeginConnectedShape();
	long GetBeginConnectionSite();
	long GetEndConnected();
	LPDISPATCH GetEndConnectedShape();
	long GetEndConnectionSite();
	long GetType();
	void SetType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// TextEffectFormat wrapper class

class TextEffectFormat : public COleDispatchDriver
{
public:
	TextEffectFormat() {}		// Calls COleDispatchDriver default constructor
	TextEffectFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextEffectFormat(const TextEffectFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void ToggleVerticalText();
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetFontBold();
	void SetFontBold(long nNewValue);
	long GetFontItalic();
	void SetFontItalic(long nNewValue);
	CString GetFontName();
	void SetFontName(LPCTSTR lpszNewValue);
	float GetFontSize();
	void SetFontSize(float newValue);
	long GetKernedPairs();
	void SetKernedPairs(long nNewValue);
	long GetNormalizedHeight();
	void SetNormalizedHeight(long nNewValue);
	long GetPresetShape();
	void SetPresetShape(long nNewValue);
	long GetPresetTextEffect();
	void SetPresetTextEffect(long nNewValue);
	long GetRotatedChars();
	void SetRotatedChars(long nNewValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	float GetTracking();
	void SetTracking(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ThreeDFormat wrapper class

class ThreeDFormat : public COleDispatchDriver
{
public:
	ThreeDFormat() {}		// Calls COleDispatchDriver default constructor
	ThreeDFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ThreeDFormat(const ThreeDFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void IncrementRotationX(float Increment);
	void IncrementRotationY(float Increment);
	void ResetRotation();
	void SetThreeDFormat(long PresetThreeDFormat);
	void SetExtrusionDirection(long PresetExtrusionDirection);
	float GetDepth();
	void SetDepth(float newValue);
	LPDISPATCH GetExtrusionColor();
	long GetExtrusionColorType();
	void SetExtrusionColorType(long nNewValue);
	long GetPerspective();
	void SetPerspective(long nNewValue);
	long GetPresetExtrusionDirection();
	long GetPresetLightingDirection();
	void SetPresetLightingDirection(long nNewValue);
	long GetPresetLightingSoftness();
	void SetPresetLightingSoftness(long nNewValue);
	long GetPresetMaterial();
	void SetPresetMaterial(long nNewValue);
	long GetPresetThreeDFormat();
	float GetRotationX();
	void SetRotationX(float newValue);
	float GetRotationY();
	void SetRotationY(float newValue);
	long GetVisible();
	void SetVisible(long nNewValue);
	void SetPresetCamera(long PresetCamera);
	void IncrementRotationZ(float Increment);
	void IncrementRotationHorizontal(float Increment);
	void IncrementRotationVertical(float Increment);
	long GetPresetLighting();
	void SetPresetLighting(long nNewValue);
	float GetZ();
	void SetZ(float newValue);
	long GetBevelTopType();
	void SetBevelTopType(long nNewValue);
	float GetBevelTopInset();
	void SetBevelTopInset(float newValue);
	float GetBevelTopDepth();
	void SetBevelTopDepth(float newValue);
	long GetBevelBottomType();
	void SetBevelBottomType(long nNewValue);
	float GetBevelBottomInset();
	void SetBevelBottomInset(float newValue);
	float GetBevelBottomDepth();
	void SetBevelBottomDepth(float newValue);
	long GetPresetCamera();
	float GetRotationZ();
	void SetRotationZ(float newValue);
	float GetContourWidth();
	void SetContourWidth(float newValue);
	LPDISPATCH GetContourColor();
	float GetFieldOfView();
	void SetFieldOfView(float newValue);
	long GetProjectText();
	void SetProjectText(long nNewValue);
	float GetLightAngle();
	void SetLightAngle(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// TextFrame wrapper class

class TextFrame : public COleDispatchDriver
{
public:
	TextFrame() {}		// Calls COleDispatchDriver default constructor
	TextFrame(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextFrame(const TextFrame& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	float GetMarginBottom();
	void SetMarginBottom(float newValue);
	float GetMarginLeft();
	void SetMarginLeft(float newValue);
	float GetMarginRight();
	void SetMarginRight(float newValue);
	float GetMarginTop();
	void SetMarginTop(float newValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	long GetHasText();
	LPDISPATCH GetTextRange();
	LPDISPATCH GetRuler();
	long GetHorizontalAnchor();
	void SetHorizontalAnchor(long nNewValue);
	long GetVerticalAnchor();
	void SetVerticalAnchor(long nNewValue);
	long GetAutoSize();
	void SetAutoSize(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	void DeleteText();
};
/////////////////////////////////////////////////////////////////////////////
// CalloutFormat wrapper class

class CalloutFormat : public COleDispatchDriver
{
public:
	CalloutFormat() {}		// Calls COleDispatchDriver default constructor
	CalloutFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CalloutFormat(const CalloutFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void AutomaticLength();
	void CustomDrop(float Drop);
	void CustomLength(float Length);
	void PresetDrop(long DropType);
	long GetAccent();
	void SetAccent(long nNewValue);
	long GetAngle();
	void SetAngle(long nNewValue);
	long GetAutoAttach();
	void SetAutoAttach(long nNewValue);
	long GetAutoLength();
	long GetBorder();
	void SetBorder(long nNewValue);
	float GetDrop();
	long GetDropType();
	float GetGap();
	void SetGap(float newValue);
	float GetLength();
	long GetType();
	void SetType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ShapeNodes wrapper class

class ShapeNodes : public COleDispatchDriver
{
public:
	ShapeNodes() {}		// Calls COleDispatchDriver default constructor
	ShapeNodes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ShapeNodes(const ShapeNodes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN Get_NewEnum();
	void Delete(long Index);
	void Insert(long Index, long SegmentType, long EditingType, float X1, float Y1, float X2, float Y2, float X3, float Y3);
	void SetEditingType(long Index, long EditingType);
	void SetPosition(long Index, float X1, float Y1);
	void SetSegmentType(long Index, long SegmentType);
};
/////////////////////////////////////////////////////////////////////////////
// ShapeNode wrapper class

class ShapeNode : public COleDispatchDriver
{
public:
	ShapeNode() {}		// Calls COleDispatchDriver default constructor
	ShapeNode(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ShapeNode(const ShapeNode& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetEditingType();
	VARIANT GetPoints();
	long GetSegmentType();
};
/////////////////////////////////////////////////////////////////////////////
// OLEFormat wrapper class

class OLEFormat : public COleDispatchDriver
{
public:
	OLEFormat() {}		// Calls COleDispatchDriver default constructor
	OLEFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	OLEFormat(const OLEFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetObjectVerbs();
	LPDISPATCH GetObject();
	CString GetProgID();
	long GetFollowColors();
	void SetFollowColors(long nNewValue);
	void DoVerb(long Index);
	void Activate();
};
/////////////////////////////////////////////////////////////////////////////
// LinkFormat wrapper class

class LinkFormat : public COleDispatchDriver
{
public:
	LinkFormat() {}		// Calls COleDispatchDriver default constructor
	LinkFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	LinkFormat(const LinkFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString GetSourceFullName();
	void SetSourceFullName(LPCTSTR lpszNewValue);
	long GetAutoUpdate();
	void SetAutoUpdate(long nNewValue);
	void Update();
	void BreakLink();
};
/////////////////////////////////////////////////////////////////////////////
// ObjectVerbs wrapper class

class ObjectVerbs : public COleDispatchDriver
{
public:
	ObjectVerbs() {}		// Calls COleDispatchDriver default constructor
	ObjectVerbs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ObjectVerbs(const ObjectVerbs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// AnimationSettings wrapper class

class AnimationSettings : public COleDispatchDriver
{
public:
	AnimationSettings() {}		// Calls COleDispatchDriver default constructor
	AnimationSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AnimationSettings(const AnimationSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetDimColor();
	LPDISPATCH GetSoundEffect();
	long GetEntryEffect();
	void SetEntryEffect(long nNewValue);
	long GetAfterEffect();
	void SetAfterEffect(long nNewValue);
	long GetAnimationOrder();
	void SetAnimationOrder(long nNewValue);
	long GetAdvanceMode();
	void SetAdvanceMode(long nNewValue);
	float GetAdvanceTime();
	void SetAdvanceTime(float newValue);
	LPDISPATCH GetPlaySettings();
	long GetTextLevelEffect();
	void SetTextLevelEffect(long nNewValue);
	long GetTextUnitEffect();
	void SetTextUnitEffect(long nNewValue);
	long GetAnimate();
	void SetAnimate(long nNewValue);
	long GetAnimateBackground();
	void SetAnimateBackground(long nNewValue);
	long GetAnimateTextInReverse();
	void SetAnimateTextInReverse(long nNewValue);
	long GetChartUnitEffect();
	void SetChartUnitEffect(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ActionSettings wrapper class

class ActionSettings : public COleDispatchDriver
{
public:
	ActionSettings() {}		// Calls COleDispatchDriver default constructor
	ActionSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ActionSettings(const ActionSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// ActionSetting wrapper class

class ActionSetting : public COleDispatchDriver
{
public:
	ActionSetting() {}		// Calls COleDispatchDriver default constructor
	ActionSetting(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ActionSetting(const ActionSetting& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetAction();
	void SetAction(long nNewValue);
	CString GetActionVerb();
	void SetActionVerb(LPCTSTR lpszNewValue);
	long GetAnimateAction();
	void SetAnimateAction(long nNewValue);
	CString GetRun();
	void SetRun(LPCTSTR lpszNewValue);
	CString GetSlideShowName();
	void SetSlideShowName(LPCTSTR lpszNewValue);
	LPDISPATCH GetHyperlink();
	LPDISPATCH GetSoundEffect();
	long GetShowAndReturn();
	void SetShowAndReturn(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// PlaySettings wrapper class

class PlaySettings : public COleDispatchDriver
{
public:
	PlaySettings() {}		// Calls COleDispatchDriver default constructor
	PlaySettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PlaySettings(const PlaySettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString GetActionVerb();
	void SetActionVerb(LPCTSTR lpszNewValue);
	long GetHideWhileNotPlaying();
	void SetHideWhileNotPlaying(long nNewValue);
	long GetLoopUntilStopped();
	void SetLoopUntilStopped(long nNewValue);
	long GetPlayOnEntry();
	void SetPlayOnEntry(long nNewValue);
	long GetRewindMovie();
	void SetRewindMovie(long nNewValue);
	long GetPauseAnimation();
	void SetPauseAnimation(long nNewValue);
	long GetStopAfterSlides();
	void SetStopAfterSlides(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// TextRange wrapper class

class TextRange : public COleDispatchDriver
{
public:
	TextRange() {}		// Calls COleDispatchDriver default constructor
	TextRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextRange(const TextRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetActionSettings();
	long GetStart();
	long GetLength();
	float GetBoundLeft();
	float GetBoundTop();
	float GetBoundWidth();
	float GetBoundHeight();
	LPDISPATCH Paragraphs(long Start, long Length);
	LPDISPATCH Sentences(long Start, long Length);
	LPDISPATCH Words(long Start, long Length);
	LPDISPATCH Characters(long Start, long Length);
	LPDISPATCH Lines(long Start, long Length);
	LPDISPATCH Runs(long Start, long Length);
	LPDISPATCH TrimText();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	LPDISPATCH InsertAfter(LPCTSTR NewText);
	LPDISPATCH InsertBefore(LPCTSTR NewText);
	LPDISPATCH InsertDateTime(long DateTimeFormat, long InsertAsField);
	LPDISPATCH InsertSlideNumber();
	LPDISPATCH InsertSymbol(LPCTSTR FontName, long CharNumber, long Unicode);
	LPDISPATCH GetFont();
	LPDISPATCH GetParagraphFormat();
	long GetIndentLevel();
	void SetIndentLevel(long nNewValue);
	void Select();
	void Cut();
	void Copy();
	void Delete();
	LPDISPATCH Paste();
	void ChangeCase(long Type);
	void AddPeriods();
	void RemovePeriods();
	LPDISPATCH Find(LPCTSTR FindWhat, long After, long MatchCase, long WholeWords);
	LPDISPATCH Replace(LPCTSTR FindWhat, LPCTSTR ReplaceWhat, long After, long MatchCase, long WholeWords);
	void RotatedBounds(float* X1, float* Y1, float* X2, float* Y2, float* X3, float* Y3, float* x4, float* y4);
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	void RtlRun();
	void LtrRun();
	LPDISPATCH PasteSpecial(long DataType, long DisplayAsIcon, LPCTSTR IconFileName, long IconIndex, LPCTSTR IconLabel, long Link);
};
/////////////////////////////////////////////////////////////////////////////
// Ruler wrapper class

class Ruler : public COleDispatchDriver
{
public:
	Ruler() {}		// Calls COleDispatchDriver default constructor
	Ruler(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Ruler(const Ruler& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetTabStops();
	LPDISPATCH GetLevels();
};
/////////////////////////////////////////////////////////////////////////////
// RulerLevels wrapper class

class RulerLevels : public COleDispatchDriver
{
public:
	RulerLevels() {}		// Calls COleDispatchDriver default constructor
	RulerLevels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	RulerLevels(const RulerLevels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// RulerLevel wrapper class

class RulerLevel : public COleDispatchDriver
{
public:
	RulerLevel() {}		// Calls COleDispatchDriver default constructor
	RulerLevel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	RulerLevel(const RulerLevel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	float GetFirstMargin();
	void SetFirstMargin(float newValue);
	float GetLeftMargin();
	void SetLeftMargin(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// TabStops wrapper class

class TabStops : public COleDispatchDriver
{
public:
	TabStops() {}		// Calls COleDispatchDriver default constructor
	TabStops(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TabStops(const TabStops& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	float GetDefaultSpacing();
	void SetDefaultSpacing(float newValue);
	LPDISPATCH Add(long Type, float Position);
};
/////////////////////////////////////////////////////////////////////////////
// TabStop wrapper class

class TabStop : public COleDispatchDriver
{
public:
	TabStop() {}		// Calls COleDispatchDriver default constructor
	TabStop(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TabStop(const TabStop& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetType();
	void SetType(long nNewValue);
	float GetPosition();
	void SetPosition(float newValue);
	void Clear();
};
/////////////////////////////////////////////////////////////////////////////
// Font wrapper class

class Font : public COleDispatchDriver
{
public:
	Font() {}		// Calls COleDispatchDriver default constructor
	Font(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Font(const Font& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetColor();
	long GetBold();
	void SetBold(long nNewValue);
	long GetItalic();
	void SetItalic(long nNewValue);
	long GetShadow();
	void SetShadow(long nNewValue);
	long GetEmboss();
	void SetEmboss(long nNewValue);
	long GetUnderline();
	void SetUnderline(long nNewValue);
	long GetSubscript();
	void SetSubscript(long nNewValue);
	long GetSuperscript();
	void SetSuperscript(long nNewValue);
	float GetBaselineOffset();
	void SetBaselineOffset(float newValue);
	long GetEmbedded();
	long GetEmbeddable();
	float GetSize();
	void SetSize(float newValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	CString GetNameFarEast();
	void SetNameFarEast(LPCTSTR lpszNewValue);
	CString GetNameAscii();
	void SetNameAscii(LPCTSTR lpszNewValue);
	long GetAutoRotateNumbers();
	void SetAutoRotateNumbers(long nNewValue);
	CString GetNameOther();
	void SetNameOther(LPCTSTR lpszNewValue);
	CString GetNameComplexScript();
	void SetNameComplexScript(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ParagraphFormat wrapper class

class ParagraphFormat : public COleDispatchDriver
{
public:
	ParagraphFormat() {}		// Calls COleDispatchDriver default constructor
	ParagraphFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ParagraphFormat(const ParagraphFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetAlignment();
	void SetAlignment(long nNewValue);
	LPDISPATCH GetBullet();
	long GetLineRuleBefore();
	void SetLineRuleBefore(long nNewValue);
	long GetLineRuleAfter();
	void SetLineRuleAfter(long nNewValue);
	long GetLineRuleWithin();
	void SetLineRuleWithin(long nNewValue);
	float GetSpaceBefore();
	void SetSpaceBefore(float newValue);
	float GetSpaceAfter();
	void SetSpaceAfter(float newValue);
	float GetSpaceWithin();
	void SetSpaceWithin(float newValue);
	long GetBaseLineAlignment();
	void SetBaseLineAlignment(long nNewValue);
	long GetFarEastLineBreakControl();
	void SetFarEastLineBreakControl(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	long GetHangingPunctuation();
	void SetHangingPunctuation(long nNewValue);
	long GetTextDirection();
	void SetTextDirection(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// BulletFormat wrapper class

class BulletFormat : public COleDispatchDriver
{
public:
	BulletFormat() {}		// Calls COleDispatchDriver default constructor
	BulletFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	BulletFormat(const BulletFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetCharacter();
	void SetCharacter(long nNewValue);
	float GetRelativeSize();
	void SetRelativeSize(float newValue);
	long GetUseTextColor();
	void SetUseTextColor(long nNewValue);
	long GetUseTextFont();
	void SetUseTextFont(long nNewValue);
	LPDISPATCH GetFont();
	long GetType();
	void SetType(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetStartValue();
	void SetStartValue(long nNewValue);
	void Picture(LPCTSTR Picture);
	long GetNumber();
};
/////////////////////////////////////////////////////////////////////////////
// TextStyles wrapper class

class TextStyles : public COleDispatchDriver
{
public:
	TextStyles() {}		// Calls COleDispatchDriver default constructor
	TextStyles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextStyles(const TextStyles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Type);
};
/////////////////////////////////////////////////////////////////////////////
// TextStyle wrapper class

class TextStyle : public COleDispatchDriver
{
public:
	TextStyle() {}		// Calls COleDispatchDriver default constructor
	TextStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextStyle(const TextStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetRuler();
	LPDISPATCH GetTextFrame();
	LPDISPATCH GetLevels();
};
/////////////////////////////////////////////////////////////////////////////
// TextStyleLevels wrapper class

class TextStyleLevels : public COleDispatchDriver
{
public:
	TextStyleLevels() {}		// Calls COleDispatchDriver default constructor
	TextStyleLevels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextStyleLevels(const TextStyleLevels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Level);
};
/////////////////////////////////////////////////////////////////////////////
// TextStyleLevel wrapper class

class TextStyleLevel : public COleDispatchDriver
{
public:
	TextStyleLevel() {}		// Calls COleDispatchDriver default constructor
	TextStyleLevel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextStyleLevel(const TextStyleLevel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetParagraphFormat();
	LPDISPATCH GetFont();
};
/////////////////////////////////////////////////////////////////////////////
// HeaderFooter wrapper class

class HeaderFooter : public COleDispatchDriver
{
public:
	HeaderFooter() {}		// Calls COleDispatchDriver default constructor
	HeaderFooter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	HeaderFooter(const HeaderFooter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetVisible();
	void SetVisible(long nNewValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	long GetUseFormat();
	void SetUseFormat(long nNewValue);
	long GetFormat();
	void SetFormat(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Presentation wrapper class

class _Presentation : public COleDispatchDriver
{
public:
	_Presentation() {}		// Calls COleDispatchDriver default constructor
	_Presentation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Presentation(const _Presentation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetSlideMaster();
	LPDISPATCH GetTitleMaster();
	long GetHasTitleMaster();
	LPDISPATCH AddTitleMaster();
	void ApplyTemplate(LPCTSTR FileName);
	CString GetTemplateName();
	LPDISPATCH GetNotesMaster();
	LPDISPATCH GetHandoutMaster();
	LPDISPATCH GetSlides();
	LPDISPATCH GetPageSetup();
	LPDISPATCH GetColorSchemes();
	LPDISPATCH GetExtraColors();
	LPDISPATCH GetSlideShowSettings();
	LPDISPATCH GetFonts();
	LPDISPATCH GetWindows();
	LPDISPATCH GetTags();
	LPDISPATCH GetDefaultShape();
	LPDISPATCH GetBuiltInDocumentProperties();
	LPDISPATCH GetCustomDocumentProperties();
	LPDISPATCH GetVBProject();
	long GetReadOnly();
	CString GetFullName();
	CString GetName();
	CString GetPath();
	long GetSaved();
	void SetSaved(long nNewValue);
	long GetLayoutDirection();
	void SetLayoutDirection(long nNewValue);
	LPDISPATCH NewWindow();
	void FollowHyperlink(LPCTSTR Address, LPCTSTR SubAddress, BOOL NewWindow, BOOL AddHistory, LPCTSTR ExtraInfo, long Method, LPCTSTR HeaderInfo);
	void AddToFavorites();
	LPDISPATCH GetPrintOptions();
	void PrintOut(long From, long To, LPCTSTR PrintToFile, long Copies, long Collate);
	void Save();
	void SaveAs(LPCTSTR FileName, long FileFormat, long EmbedTrueTypeFonts);
	void SaveCopyAs(LPCTSTR FileName, long FileFormat, long EmbedTrueTypeFonts);
	void Export(LPCTSTR Path, LPCTSTR FilterName, long ScaleWidth, long ScaleHeight);
	void Close();
	LPDISPATCH GetContainer();
	long GetDisplayComments();
	void SetDisplayComments(long nNewValue);
	long GetFarEastLineBreakLevel();
	void SetFarEastLineBreakLevel(long nNewValue);
	CString GetNoLineBreakBefore();
	void SetNoLineBreakBefore(LPCTSTR lpszNewValue);
	CString GetNoLineBreakAfter();
	void SetNoLineBreakAfter(LPCTSTR lpszNewValue);
	void UpdateLinks();
	LPDISPATCH GetSlideShowWindow();
	long GetFarEastLineBreakLanguage();
	void SetFarEastLineBreakLanguage(long nNewValue);
	void WebPagePreview();
	long GetDefaultLanguageID();
	void SetDefaultLanguageID(long nNewValue);
	LPDISPATCH GetCommandBars();
	LPDISPATCH GetPublishObjects();
	LPDISPATCH GetWebOptions();
	void ReloadAs(long cp);
	long GetEnvelopeVisible();
	void SetEnvelopeVisible(long nNewValue);
	long GetVBASigned();
	long GetSnapToGrid();
	void SetSnapToGrid(long nNewValue);
	float GetGridDistance();
	void SetGridDistance(float newValue);
	LPDISPATCH GetDesigns();
	void CheckIn(BOOL SaveChanges, const VARIANT& Comments, const VARIANT& MakePublic);
	BOOL CanCheckIn();
	LPDISPATCH GetSignatures();
	long GetRemovePersonalInformation();
	void SetRemovePersonalInformation(long nNewValue);
	CString GetPasswordEncryptionProvider();
	CString GetPasswordEncryptionAlgorithm();
	long GetPasswordEncryptionKeyLength();
	BOOL GetPasswordEncryptionFileProperties();
	void SetPasswordEncryptionOptions(LPCTSTR PasswordEncryptionProvider, LPCTSTR PasswordEncryptionAlgorithm, long PasswordEncryptionKeyLength, BOOL PasswordEncryptionFileProperties);
	CString GetPassword();
	void SetPassword(LPCTSTR lpszNewValue);
	CString GetWritePassword();
	void SetWritePassword(LPCTSTR lpszNewValue);
	LPDISPATCH GetPermission();
	LPDISPATCH GetSharedWorkspace();
	LPDISPATCH GetSync();
	void SendFaxOverInternet(LPCTSTR Recipients, LPCTSTR Subject, BOOL ShowMessage);
	LPDISPATCH GetDocumentLibraryVersions();
	LPDISPATCH GetContentTypeProperties();
	void RemoveDocumentInformation(long Type);
	void CheckInWithVersion(BOOL SaveChanges, const VARIANT& Comments, const VARIANT& MakePublic, const VARIANT& VersionType);
	void ExportAsFixedFormat(LPCTSTR Path, long FixedFormatType, long Intent, long FrameSlides, long HandoutOrder, long OutputType, long PrintHiddenSlides, LPDISPATCH PrintRange, long RangeType, LPCTSTR SlideShowName, BOOL IncludeDocProperties, 
		BOOL KeepIRMSettings, BOOL DocStructureTags, BOOL BitmapMissingFonts, BOOL UseISO19005_1, const VARIANT& ExternalExporter);
	LPDISPATCH GetServerPolicy();
	LPDISPATCH GetWorkflowTasks();
	LPDISPATCH GetWorkflowTemplates();
	void LockServerFile();
	LPDISPATCH GetDocumentInspectors();
	BOOL GetHasVBProject();
	LPDISPATCH GetCustomXMLParts();
	BOOL GetFinal();
	void SetFinal(BOOL bNewValue);
	void ApplyTheme(LPCTSTR themeName);
	LPDISPATCH GetCustomerData();
	LPDISPATCH GetResearch();
	void PublishSlides(LPCTSTR SlideLibraryUrl, BOOL Overwrite, BOOL UseSlideOrder);
	CString GetEncryptionProvider();
	void SetEncryptionProvider(LPCTSTR lpszNewValue);
	void Convert();
};
/////////////////////////////////////////////////////////////////////////////
// Tags wrapper class

class Tags : public COleDispatchDriver
{
public:
	Tags() {}		// Calls COleDispatchDriver default constructor
	Tags(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Tags(const Tags& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString Item(LPCTSTR Name);
	void Add(LPCTSTR Name, LPCTSTR Value);
	void Delete(LPCTSTR Name);
	CString Name(long Index);
	CString Value(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// OCXExtender wrapper class

class OCXExtender : public COleDispatchDriver
{
public:
	OCXExtender() {}		// Calls COleDispatchDriver default constructor
	OCXExtender(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	OCXExtender(const OCXExtender& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	float GetLeft();
	void SetLeft(float newValue);
	float GetTop();
	void SetTop(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	float GetWidth();
	void SetWidth(float newValue);
	long GetZOrderPosition();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Table wrapper class

class Table : public COleDispatchDriver
{
public:
	Table() {}		// Calls COleDispatchDriver default constructor
	Table(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Table(const Table& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	LPDISPATCH Cell(long Row, long Column);
	long GetTableDirection();
	void SetTableDirection(long nNewValue);
	BOOL GetFirstRow();
	void SetFirstRow(BOOL bNewValue);
	BOOL GetLastRow();
	void SetLastRow(BOOL bNewValue);
	BOOL GetFirstCol();
	void SetFirstCol(BOOL bNewValue);
	BOOL GetLastCol();
	void SetLastCol(BOOL bNewValue);
	BOOL GetHorizBanding();
	void SetHorizBanding(BOOL bNewValue);
	BOOL GetVertBanding();
	void SetVertBanding(BOOL bNewValue);
	LPDISPATCH GetStyle();
	LPDISPATCH GetBackground();
	void ScaleProportionally(float scale);
	void ApplyStyle(LPCTSTR StyleID, BOOL SaveFormatting);
};
/////////////////////////////////////////////////////////////////////////////
// Columns wrapper class

class Columns : public COleDispatchDriver
{
public:
	Columns() {}		// Calls COleDispatchDriver default constructor
	Columns(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Columns(const Columns& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(long BeforeColumn);
};
/////////////////////////////////////////////////////////////////////////////
// Column wrapper class

class Column : public COleDispatchDriver
{
public:
	Column() {}		// Calls COleDispatchDriver default constructor
	Column(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Column(const Column& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetCells();
	void Select();
	void Delete();
	float GetWidth();
	void SetWidth(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// Rows wrapper class

class Rows : public COleDispatchDriver
{
public:
	Rows() {}		// Calls COleDispatchDriver default constructor
	Rows(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Rows(const Rows& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(long BeforeRow);
};
/////////////////////////////////////////////////////////////////////////////
// Row wrapper class

class Row : public COleDispatchDriver
{
public:
	Row() {}		// Calls COleDispatchDriver default constructor
	Row(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Row(const Row& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetCells();
	void Select();
	void Delete();
	float GetHeight();
	void SetHeight(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// CellRange wrapper class

class CellRange : public COleDispatchDriver
{
public:
	CellRange() {}		// Calls COleDispatchDriver default constructor
	CellRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CellRange(const CellRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH GetBorders();
};
/////////////////////////////////////////////////////////////////////////////
// Cell wrapper class

class Cell : public COleDispatchDriver
{
public:
	Cell() {}		// Calls COleDispatchDriver default constructor
	Cell(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Cell(const Cell& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetShape();
	LPDISPATCH GetBorders();
	void Merge(LPDISPATCH MergeTo);
	void Split(long NumRows, long NumColumns);
	void Select();
	BOOL GetSelected();
};
/////////////////////////////////////////////////////////////////////////////
// Borders wrapper class

class Borders : public COleDispatchDriver
{
public:
	Borders() {}		// Calls COleDispatchDriver default constructor
	Borders(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Borders(const Borders& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long BorderType);
};
/////////////////////////////////////////////////////////////////////////////
// Panes wrapper class

class Panes : public COleDispatchDriver
{
public:
	Panes() {}		// Calls COleDispatchDriver default constructor
	Panes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Panes(const Panes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH Item(long Index);
	LPDISPATCH GetParent();
};
/////////////////////////////////////////////////////////////////////////////
// Pane wrapper class

class Pane : public COleDispatchDriver
{
public:
	Pane() {}		// Calls COleDispatchDriver default constructor
	Pane(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Pane(const Pane& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	void Activate();
	long GetActive();
	LPDISPATCH GetApplication();
	long GetViewType();
};
/////////////////////////////////////////////////////////////////////////////
// DefaultWebOptions wrapper class

class DefaultWebOptions : public COleDispatchDriver
{
public:
	DefaultWebOptions() {}		// Calls COleDispatchDriver default constructor
	DefaultWebOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DefaultWebOptions(const DefaultWebOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetIncludeNavigation();
	void SetIncludeNavigation(long nNewValue);
	long GetFrameColors();
	void SetFrameColors(long nNewValue);
	long GetResizeGraphics();
	void SetResizeGraphics(long nNewValue);
	long GetShowSlideAnimation();
	void SetShowSlideAnimation(long nNewValue);
	long GetOrganizeInFolder();
	void SetOrganizeInFolder(long nNewValue);
	long GetUseLongFileNames();
	void SetUseLongFileNames(long nNewValue);
	long GetRelyOnVML();
	void SetRelyOnVML(long nNewValue);
	long GetAllowPNG();
	void SetAllowPNG(long nNewValue);
	long GetScreenSize();
	void SetScreenSize(long nNewValue);
	long GetEncoding();
	void SetEncoding(long nNewValue);
	long GetUpdateLinksOnSave();
	void SetUpdateLinksOnSave(long nNewValue);
	long GetCheckIfOfficeIsHTMLEditor();
	void SetCheckIfOfficeIsHTMLEditor(long nNewValue);
	long GetAlwaysSaveInDefaultEncoding();
	void SetAlwaysSaveInDefaultEncoding(long nNewValue);
	LPDISPATCH GetFonts();
	CString GetFolderSuffix();
	long GetTargetBrowser();
	void SetTargetBrowser(long nNewValue);
	long GetSaveNewWebPagesAsWebArchives();
	void SetSaveNewWebPagesAsWebArchives(long nNewValue);
	long GetHTMLVersion();
	void SetHTMLVersion(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// WebOptions wrapper class

class WebOptions : public COleDispatchDriver
{
public:
	WebOptions() {}		// Calls COleDispatchDriver default constructor
	WebOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	WebOptions(const WebOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetIncludeNavigation();
	void SetIncludeNavigation(long nNewValue);
	long GetFrameColors();
	void SetFrameColors(long nNewValue);
	long GetResizeGraphics();
	void SetResizeGraphics(long nNewValue);
	long GetShowSlideAnimation();
	void SetShowSlideAnimation(long nNewValue);
	long GetOrganizeInFolder();
	void SetOrganizeInFolder(long nNewValue);
	long GetUseLongFileNames();
	void SetUseLongFileNames(long nNewValue);
	long GetRelyOnVML();
	void SetRelyOnVML(long nNewValue);
	long GetAllowPNG();
	void SetAllowPNG(long nNewValue);
	long GetScreenSize();
	void SetScreenSize(long nNewValue);
	long GetEncoding();
	void SetEncoding(long nNewValue);
	CString GetFolderSuffix();
	void UseDefaultFolderSuffix();
	long GetTargetBrowser();
	void SetTargetBrowser(long nNewValue);
	long GetHTMLVersion();
	void SetHTMLVersion(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// PublishObjects wrapper class

class PublishObjects : public COleDispatchDriver
{
public:
	PublishObjects() {}		// Calls COleDispatchDriver default constructor
	PublishObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PublishObjects(const PublishObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// PublishObject wrapper class

class PublishObject : public COleDispatchDriver
{
public:
	PublishObject() {}		// Calls COleDispatchDriver default constructor
	PublishObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PublishObject(const PublishObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetHTMLVersion();
	void SetHTMLVersion(long nNewValue);
	long GetSourceType();
	void SetSourceType(long nNewValue);
	long GetRangeStart();
	void SetRangeStart(long nNewValue);
	long GetRangeEnd();
	void SetRangeEnd(long nNewValue);
	CString GetSlideShowName();
	void SetSlideShowName(LPCTSTR lpszNewValue);
	long GetSpeakerNotes();
	void SetSpeakerNotes(long nNewValue);
	CString GetFileName();
	void SetFileName(LPCTSTR lpszNewValue);
	void Publish();
};
/////////////////////////////////////////////////////////////////////////////
// _PowerRex wrapper class

class _PowerRex : public COleDispatchDriver
{
public:
	_PowerRex() {}		// Calls COleDispatchDriver default constructor
	_PowerRex(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_PowerRex(const _PowerRex& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// Comments wrapper class

class Comments : public COleDispatchDriver
{
public:
	Comments() {}		// Calls COleDispatchDriver default constructor
	Comments(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Comments(const Comments& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(float Left, float Top, LPCTSTR Author, LPCTSTR AuthorInitials, LPCTSTR Text);
};
/////////////////////////////////////////////////////////////////////////////
// Comment wrapper class

class Comment : public COleDispatchDriver
{
public:
	Comment() {}		// Calls COleDispatchDriver default constructor
	Comment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Comment(const Comment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	CString GetAuthor();
	CString GetAuthorInitials();
	CString GetText();
	DATE GetDateTime();
	long GetAuthorIndex();
	float GetLeft();
	float GetTop();
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// Designs wrapper class

class Designs : public COleDispatchDriver
{
public:
	Designs() {}		// Calls COleDispatchDriver default constructor
	Designs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Designs(const Designs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(const VARIANT& Index);
	LPDISPATCH Add(LPCTSTR designName, long Index);
	LPDISPATCH Load(LPCTSTR TemplateName, long Index);
	LPDISPATCH Clone(LPDISPATCH pOriginal, long Index);
};
/////////////////////////////////////////////////////////////////////////////
// Design wrapper class

class Design : public COleDispatchDriver
{
public:
	Design() {}		// Calls COleDispatchDriver default constructor
	Design(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Design(const Design& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetSlideMaster();
	long GetIndex();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetPreserved();
	void SetPreserved(long nNewValue);
	void MoveTo(long toPos);
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// DiagramNode wrapper class

class DiagramNode : public COleDispatchDriver
{
public:
	DiagramNode() {}		// Calls COleDispatchDriver default constructor
	DiagramNode(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DiagramNode(const DiagramNode& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH AddNode(long Pos, long NodeType);
	void Delete();
	void MoveNode(LPDISPATCH TargetNode, long Pos);
	void ReplaceNode(LPDISPATCH TargetNode);
	void SwapNode(LPDISPATCH TargetNode, BOOL SwapChildren);
	LPDISPATCH CloneNode(BOOL CopyChildren, LPDISPATCH TargetNode, long Pos);
	void TransferChildren(LPDISPATCH ReceivingNode);
	LPDISPATCH NextNode();
	LPDISPATCH PrevNode();
	LPDISPATCH GetParent();
	LPDISPATCH GetChildren();
	LPDISPATCH GetShape();
	LPDISPATCH GetRoot();
	LPDISPATCH GetDiagram();
	long GetLayout();
	void SetLayout(long nNewValue);
	LPDISPATCH GetTextShape();
};
/////////////////////////////////////////////////////////////////////////////
// DiagramNodeChildren wrapper class

class DiagramNodeChildren : public COleDispatchDriver
{
public:
	DiagramNodeChildren() {}		// Calls COleDispatchDriver default constructor
	DiagramNodeChildren(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DiagramNodeChildren(const DiagramNodeChildren& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPUNKNOWN Get_NewEnum();
	LPDISPATCH Item(const VARIANT& Index);
	LPDISPATCH AddNode(const VARIANT& Index, long NodeType);
	void SelectAll();
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH GetFirstChild();
	LPDISPATCH GetLastChild();
};
/////////////////////////////////////////////////////////////////////////////
// DiagramNodes wrapper class

class DiagramNodes : public COleDispatchDriver
{
public:
	DiagramNodes() {}		// Calls COleDispatchDriver default constructor
	DiagramNodes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DiagramNodes(const DiagramNodes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPUNKNOWN Get_NewEnum();
	LPDISPATCH Item(const VARIANT& Index);
	void SelectAll();
	LPDISPATCH GetParent();
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// Diagram wrapper class

class Diagram : public COleDispatchDriver
{
public:
	Diagram() {}		// Calls COleDispatchDriver default constructor
	Diagram(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Diagram(const Diagram& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetNodes();
	long GetType();
	long GetAutoLayout();
	void SetAutoLayout(long nNewValue);
	long GetReverse();
	void SetReverse(long nNewValue);
	long GetAutoFormat();
	void SetAutoFormat(long nNewValue);
	void Convert(long Type);
	void FitText();
};
/////////////////////////////////////////////////////////////////////////////
// TimeLine wrapper class

class TimeLine : public COleDispatchDriver
{
public:
	TimeLine() {}		// Calls COleDispatchDriver default constructor
	TimeLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TimeLine(const TimeLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetMainSequence();
	LPDISPATCH GetInteractiveSequences();
};
/////////////////////////////////////////////////////////////////////////////
// Sequences wrapper class

class Sequences : public COleDispatchDriver
{
public:
	Sequences() {}		// Calls COleDispatchDriver default constructor
	Sequences(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Sequences(const Sequences& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// Sequence wrapper class

class Sequence : public COleDispatchDriver
{
public:
	Sequence() {}		// Calls COleDispatchDriver default constructor
	Sequence(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Sequence(const Sequence& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH AddEffect(LPDISPATCH Shape, long effectId, long Level, long trigger, long Index);
	LPDISPATCH Clone(LPDISPATCH Effect, long Index);
	LPDISPATCH FindFirstAnimationFor(LPDISPATCH Shape);
	LPDISPATCH FindFirstAnimationForClick(long click);
	LPDISPATCH ConvertToBuildLevel(LPDISPATCH Effect, long Level);
	LPDISPATCH ConvertToAfterEffect(LPDISPATCH Effect, long After, long DimColor, long DimSchemeColor);
	LPDISPATCH ConvertToAnimateBackground(LPDISPATCH Effect, long AnimateBackground);
	LPDISPATCH ConvertToAnimateInReverse(LPDISPATCH Effect, long animateInReverse);
	LPDISPATCH ConvertToTextUnitEffect(LPDISPATCH Effect, long unitEffect);
};
/////////////////////////////////////////////////////////////////////////////
// Effect wrapper class

class Effect : public COleDispatchDriver
{
public:
	Effect() {}		// Calls COleDispatchDriver default constructor
	Effect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Effect(const Effect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetShape();
	void SetShape(LPDISPATCH newValue);
	void MoveTo(long toPos);
	void MoveBefore(LPDISPATCH Effect);
	void MoveAfter(LPDISPATCH Effect);
	void Delete();
	long GetIndex();
	LPDISPATCH GetTiming();
	long GetEffectType();
	void SetEffectType(long nNewValue);
	LPDISPATCH GetEffectParameters();
	long GetTextRangeStart();
	long GetTextRangeLength();
	long GetParagraph();
	void SetParagraph(long nNewValue);
	CString GetDisplayName();
	long GetExit();
	void SetExit(long nNewValue);
	LPDISPATCH GetBehaviors();
	LPDISPATCH GetEffectInformation();
};
/////////////////////////////////////////////////////////////////////////////
// Timing wrapper class

class Timing : public COleDispatchDriver
{
public:
	Timing() {}		// Calls COleDispatchDriver default constructor
	Timing(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Timing(const Timing& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	float GetDuration();
	void SetDuration(float newValue);
	long GetTriggerType();
	void SetTriggerType(long nNewValue);
	float GetTriggerDelayTime();
	void SetTriggerDelayTime(float newValue);
	LPDISPATCH GetTriggerShape();
	void SetTriggerShape(LPDISPATCH newValue);
	long GetRepeatCount();
	void SetRepeatCount(long nNewValue);
	float GetRepeatDuration();
	void SetRepeatDuration(float newValue);
	float GetSpeed();
	void SetSpeed(float newValue);
	float GetAccelerate();
	void SetAccelerate(float newValue);
	float GetDecelerate();
	void SetDecelerate(float newValue);
	long GetAutoReverse();
	void SetAutoReverse(long nNewValue);
	long GetSmoothStart();
	void SetSmoothStart(long nNewValue);
	long GetSmoothEnd();
	void SetSmoothEnd(long nNewValue);
	long GetRewindAtEnd();
	void SetRewindAtEnd(long nNewValue);
	long GetRestart();
	void SetRestart(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// EffectParameters wrapper class

class EffectParameters : public COleDispatchDriver
{
public:
	EffectParameters() {}		// Calls COleDispatchDriver default constructor
	EffectParameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	EffectParameters(const EffectParameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetDirection();
	void SetDirection(long nNewValue);
	float GetAmount();
	void SetAmount(float newValue);
	float GetSize();
	void SetSize(float newValue);
	LPDISPATCH GetColor2();
	long GetRelative();
	void SetRelative(long nNewValue);
	CString GetFontName();
	void SetFontName(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// EffectInformation wrapper class

class EffectInformation : public COleDispatchDriver
{
public:
	EffectInformation() {}		// Calls COleDispatchDriver default constructor
	EffectInformation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	EffectInformation(const EffectInformation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetAfterEffect();
	long GetAnimateBackground();
	long GetAnimateTextInReverse();
	long GetBuildByLevelEffect();
	LPDISPATCH GetDim();
	LPDISPATCH GetPlaySettings();
	LPDISPATCH GetSoundEffect();
	long GetTextUnitEffect();
};
/////////////////////////////////////////////////////////////////////////////
// AnimationBehaviors wrapper class

class AnimationBehaviors : public COleDispatchDriver
{
public:
	AnimationBehaviors() {}		// Calls COleDispatchDriver default constructor
	AnimationBehaviors(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AnimationBehaviors(const AnimationBehaviors& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(long Type, long Index);
};
/////////////////////////////////////////////////////////////////////////////
// AnimationBehavior wrapper class

class AnimationBehavior : public COleDispatchDriver
{
public:
	AnimationBehavior() {}		// Calls COleDispatchDriver default constructor
	AnimationBehavior(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AnimationBehavior(const AnimationBehavior& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetAdditive();
	void SetAdditive(long nNewValue);
	long GetAccumulate();
	void SetAccumulate(long nNewValue);
	long GetType();
	void SetType(long nNewValue);
	LPDISPATCH GetMotionEffect();
	LPDISPATCH GetColorEffect();
	LPDISPATCH GetScaleEffect();
	LPDISPATCH GetRotationEffect();
	LPDISPATCH GetPropertyEffect();
	LPDISPATCH GetTiming();
	void Delete();
	LPDISPATCH GetCommandEffect();
	LPDISPATCH GetFilterEffect();
	LPDISPATCH GetSetEffect();
};
/////////////////////////////////////////////////////////////////////////////
// MotionEffect wrapper class

class MotionEffect : public COleDispatchDriver
{
public:
	MotionEffect() {}		// Calls COleDispatchDriver default constructor
	MotionEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	MotionEffect(const MotionEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	float GetByX();
	void SetByX(float newValue);
	float GetByY();
	void SetByY(float newValue);
	float GetFromX();
	void SetFromX(float newValue);
	float GetFromY();
	void SetFromY(float newValue);
	float GetToX();
	void SetToX(float newValue);
	float GetToY();
	void SetToY(float newValue);
	CString GetPath();
	void SetPath(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ColorEffect wrapper class

class ColorEffect : public COleDispatchDriver
{
public:
	ColorEffect() {}		// Calls COleDispatchDriver default constructor
	ColorEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ColorEffect(const ColorEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetBy();
	LPDISPATCH GetFrom();
	LPDISPATCH GetTo();
};
/////////////////////////////////////////////////////////////////////////////
// ScaleEffect wrapper class

class ScaleEffect : public COleDispatchDriver
{
public:
	ScaleEffect() {}		// Calls COleDispatchDriver default constructor
	ScaleEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ScaleEffect(const ScaleEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	float GetByX();
	void SetByX(float newValue);
	float GetByY();
	void SetByY(float newValue);
	float GetFromX();
	void SetFromX(float newValue);
	float GetFromY();
	void SetFromY(float newValue);
	float GetToX();
	void SetToX(float newValue);
	float GetToY();
	void SetToY(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// RotationEffect wrapper class

class RotationEffect : public COleDispatchDriver
{
public:
	RotationEffect() {}		// Calls COleDispatchDriver default constructor
	RotationEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	RotationEffect(const RotationEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	float GetBy();
	void SetBy(float newValue);
	float GetFrom();
	void SetFrom(float newValue);
	float GetTo();
	void SetTo(float newValue);
};
/////////////////////////////////////////////////////////////////////////////
// PropertyEffect wrapper class

class PropertyEffect : public COleDispatchDriver
{
public:
	PropertyEffect() {}		// Calls COleDispatchDriver default constructor
	PropertyEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PropertyEffect(const PropertyEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetProperty_();
	void SetProperty_(long nNewValue);
	LPDISPATCH GetPoints();
	VARIANT GetFrom();
	void SetFrom(const VARIANT& newValue);
	VARIANT GetTo();
	void SetTo(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// AnimationPoints wrapper class

class AnimationPoints : public COleDispatchDriver
{
public:
	AnimationPoints() {}		// Calls COleDispatchDriver default constructor
	AnimationPoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AnimationPoints(const AnimationPoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(long Index);
	long GetSmooth();
	void SetSmooth(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// AnimationPoint wrapper class

class AnimationPoint : public COleDispatchDriver
{
public:
	AnimationPoint() {}		// Calls COleDispatchDriver default constructor
	AnimationPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AnimationPoint(const AnimationPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	void Delete();
	float GetTime();
	void SetTime(float newValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	CString GetFormula();
	void SetFormula(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// CanvasShapes wrapper class

class CanvasShapes : public COleDispatchDriver
{
public:
	CanvasShapes() {}		// Calls COleDispatchDriver default constructor
	CanvasShapes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CanvasShapes(const CanvasShapes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN Get_NewEnum();
	LPDISPATCH AddCallout(long Type, float Left, float Top, float Width, float Height);
	LPDISPATCH AddConnector(long Type, float BeginX, float BeginY, float EndX, float EndY);
	LPDISPATCH AddCurve(const VARIANT& SafeArrayOfPoints);
	LPDISPATCH AddLabel(long Orientation, float Left, float Top, float Width, float Height);
	LPDISPATCH AddLine(float BeginX, float BeginY, float EndX, float EndY);
	LPDISPATCH AddPicture(LPCTSTR FileName, long LinkToFile, long SaveWithDocument, float Left, float Top, float Width, float Height);
	LPDISPATCH AddPolyline(const VARIANT& SafeArrayOfPoints);
	LPDISPATCH AddShape(long Type, float Left, float Top, float Width, float Height);
	LPDISPATCH AddTextEffect(long PresetTextEffect, LPCTSTR Text, LPCTSTR FontName, float FontSize, long FontBold, long FontItalic, float Left, float Top);
	LPDISPATCH AddTextbox(long Orientation, float Left, float Top, float Width, float Height);
	LPDISPATCH BuildFreeform(long EditingType, float X1, float Y1);
	LPDISPATCH Range(const VARIANT& Index);
	void SelectAll();
	LPDISPATCH GetBackground();
};
/////////////////////////////////////////////////////////////////////////////
// AutoCorrect wrapper class

class AutoCorrect : public COleDispatchDriver
{
public:
	AutoCorrect() {}		// Calls COleDispatchDriver default constructor
	AutoCorrect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AutoCorrect(const AutoCorrect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetDisplayAutoCorrectOptions();
	void SetDisplayAutoCorrectOptions(BOOL bNewValue);
	BOOL GetDisplayAutoLayoutOptions();
	void SetDisplayAutoLayoutOptions(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Options wrapper class

class Options : public COleDispatchDriver
{
public:
	Options() {}		// Calls COleDispatchDriver default constructor
	Options(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Options(const Options& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetDisplayPasteOptions();
	void SetDisplayPasteOptions(long nNewValue);
	long GetDoNotPromptForConvert();
	void SetDoNotPromptForConvert(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// CommandEffect wrapper class

class CommandEffect : public COleDispatchDriver
{
public:
	CommandEffect() {}		// Calls COleDispatchDriver default constructor
	CommandEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CommandEffect(const CommandEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetType();
	void SetType(long nNewValue);
	CString GetCommand();
	void SetCommand(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// FilterEffect wrapper class

class FilterEffect : public COleDispatchDriver
{
public:
	FilterEffect() {}		// Calls COleDispatchDriver default constructor
	FilterEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	FilterEffect(const FilterEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetType();
	void SetType(long nNewValue);
	long GetSubtype();
	void SetSubtype(long nNewValue);
	long GetReveal();
	void SetReveal(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// SetEffect wrapper class

class SetEffect : public COleDispatchDriver
{
public:
	SetEffect() {}		// Calls COleDispatchDriver default constructor
	SetEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SetEffect(const SetEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	long GetProperty_();
	void SetProperty_(long nNewValue);
	VARIANT GetTo();
	void SetTo(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// CustomLayouts wrapper class

class CustomLayouts : public COleDispatchDriver
{
public:
	CustomLayouts() {}		// Calls COleDispatchDriver default constructor
	CustomLayouts(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CustomLayouts(const CustomLayouts& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(const VARIANT& Index);
	LPDISPATCH Add(long Index);
	LPDISPATCH Paste(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// CustomLayout wrapper class

class CustomLayout : public COleDispatchDriver
{
public:
	CustomLayout() {}		// Calls COleDispatchDriver default constructor
	CustomLayout(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CustomLayout(const CustomLayout& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetShapes();
	LPDISPATCH GetHeadersFooters();
	LPDISPATCH GetBackground();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	void Delete();
	float GetHeight();
	float GetWidth();
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetDesign();
	LPDISPATCH GetTimeLine();
	LPDISPATCH GetSlideShowTransition();
	CString GetMatchingName();
	void SetMatchingName(LPCTSTR lpszNewValue);
	long GetPreserved();
	void SetPreserved(long nNewValue);
	long GetIndex();
	void Select();
	void Cut();
	void Copy();
	LPDISPATCH Duplicate();
	void MoveTo(long toPos);
	long GetDisplayMasterShapes();
	void SetDisplayMasterShapes(long nNewValue);
	long GetFollowMasterBackground();
	void SetFollowMasterBackground(long nNewValue);
	LPDISPATCH GetThemeColorScheme();
	LPDISPATCH GetCustomerData();
};
/////////////////////////////////////////////////////////////////////////////
// TableStyle wrapper class

class TableStyle : public COleDispatchDriver
{
public:
	TableStyle() {}		// Calls COleDispatchDriver default constructor
	TableStyle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TableStyle(const TableStyle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	CString GetId();
};
/////////////////////////////////////////////////////////////////////////////
// CustomerData wrapper class

class CustomerData : public COleDispatchDriver
{
public:
	CustomerData() {}		// Calls COleDispatchDriver default constructor
	CustomerData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CustomerData(const CustomerData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH Item(LPCTSTR Id);
	LPDISPATCH Add();
	void Delete(LPCTSTR Id);
};
/////////////////////////////////////////////////////////////////////////////
// Research wrapper class

class Research : public COleDispatchDriver
{
public:
	Research() {}		// Calls COleDispatchDriver default constructor
	Research(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Research(const Research& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	void Query(LPCTSTR ServiceID, VARIANT* QueryString, VARIANT* QueryLanguage, BOOL UseSelection, BOOL LaunchQuery);
	void SetLanguagePair(VARIANT* Language1, VARIANT* Language2);
	BOOL IsResearchService(LPCTSTR ServiceID);
};
/////////////////////////////////////////////////////////////////////////////
// TableBackground wrapper class

class TableBackground : public COleDispatchDriver
{
public:
	TableBackground() {}		// Calls COleDispatchDriver default constructor
	TableBackground(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TableBackground(const TableBackground& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFill();
	LPDISPATCH GetPicture();
	LPDISPATCH GetReflection();
	LPDISPATCH GetShadow();
};
/////////////////////////////////////////////////////////////////////////////
// TextFrame2 wrapper class

class TextFrame2 : public COleDispatchDriver
{
public:
	TextFrame2() {}		// Calls COleDispatchDriver default constructor
	TextFrame2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TextFrame2(const TextFrame2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	float GetMarginBottom();
	void SetMarginBottom(float newValue);
	float GetMarginLeft();
	void SetMarginLeft(float newValue);
	float GetMarginRight();
	void SetMarginRight(float newValue);
	float GetMarginTop();
	void SetMarginTop(float newValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	long GetHorizontalAnchor();
	void SetHorizontalAnchor(long nNewValue);
	long GetVerticalAnchor();
	void SetVerticalAnchor(long nNewValue);
	long GetPathFormat();
	void SetPathFormat(long nNewValue);
	long GetWarpFormat();
	void SetWarpFormat(long nNewValue);
	long GetWordArtFormat();
	void SetWordArtFormat(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	long GetAutoSize();
	void SetAutoSize(long nNewValue);
	LPDISPATCH GetThreeD();
	long GetHasText();
	LPDISPATCH GetTextRange();
	LPDISPATCH GetColumn();
	LPDISPATCH GetRuler();
	void DeleteText();
};
/////////////////////////////////////////////////////////////////////////////
// FileConverters wrapper class

class FileConverters : public COleDispatchDriver
{
public:
	FileConverters() {}		// Calls COleDispatchDriver default constructor
	FileConverters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	FileConverters(const FileConverters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// FileConverter wrapper class

class FileConverter : public COleDispatchDriver
{
public:
	FileConverter() {}		// Calls COleDispatchDriver default constructor
	FileConverter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	FileConverter(const FileConverter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	BOOL GetCanOpen();
	BOOL GetCanSave();
	CString GetClassName();
	LPDISPATCH GetCreator();
	CString GetExtensions();
	CString GetFormatName();
	CString GetName();
	LPDISPATCH GetParent();
	CString GetPath();
	long GetOpenFormat();
	long GetSaveFormat();
};
/////////////////////////////////////////////////////////////////////////////
// Axes wrapper class

class Axes : public COleDispatchDriver
{
public:
	Axes() {}		// Calls COleDispatchDriver default constructor
	Axes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Axes(const Axes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	LPDISPATCH Item(long Type, long AxisGroup);
	LPUNKNOWN _NewEnum();
	LPDISPATCH _Default(long Type, long AxisGroup);
};
/////////////////////////////////////////////////////////////////////////////
// Axis wrapper class

class Axis : public COleDispatchDriver
{
public:
	Axis() {}		// Calls COleDispatchDriver default constructor
	Axis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Axis(const Axis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAxisBetweenCategories();
	void SetAxisBetweenCategories(BOOL bNewValue);
	long GetAxisGroup();
	LPDISPATCH GetAxisTitle();
	VARIANT GetCategoryNames();
	void SetCategoryNames(const VARIANT& newValue);
	long GetCrosses();
	void SetCrosses(long nNewValue);
	double GetCrossesAt();
	void SetCrossesAt(double newValue);
	VARIANT Delete();
	BOOL GetHasMajorGridlines();
	void SetHasMajorGridlines(BOOL bNewValue);
	BOOL GetHasMinorGridlines();
	void SetHasMinorGridlines(BOOL bNewValue);
	BOOL GetHasTitle();
	void SetHasTitle(BOOL bNewValue);
	LPDISPATCH GetMajorGridlines();
	long GetMajorTickMark();
	void SetMajorTickMark(long nNewValue);
	double GetMajorUnit();
	void SetMajorUnit(double newValue);
	double GetLogBase();
	void SetLogBase(double newValue);
	BOOL GetTickLabelSpacingIsAuto();
	void SetTickLabelSpacingIsAuto(BOOL bNewValue);
	BOOL GetMajorUnitIsAuto();
	void SetMajorUnitIsAuto(BOOL bNewValue);
	double GetMaximumScale();
	void SetMaximumScale(double newValue);
	BOOL GetMaximumScaleIsAuto();
	void SetMaximumScaleIsAuto(BOOL bNewValue);
	double GetMinimumScale();
	void SetMinimumScale(double newValue);
	BOOL GetMinimumScaleIsAuto();
	void SetMinimumScaleIsAuto(BOOL bNewValue);
	LPDISPATCH GetMinorGridlines();
	long GetMinorTickMark();
	void SetMinorTickMark(long nNewValue);
	double GetMinorUnit();
	void SetMinorUnit(double newValue);
	BOOL GetMinorUnitIsAuto();
	void SetMinorUnitIsAuto(BOOL bNewValue);
	BOOL GetReversePlotOrder();
	void SetReversePlotOrder(BOOL bNewValue);
	long GetScaleType();
	void SetScaleType(long nNewValue);
	VARIANT Select();
	long GetTickLabelPosition();
	void SetTickLabelPosition(long nNewValue);
	LPDISPATCH GetTickLabels();
	long GetTickLabelSpacing();
	void SetTickLabelSpacing(long nNewValue);
	long GetTickMarkSpacing();
	void SetTickMarkSpacing(long nNewValue);
	long GetType();
	void SetType(long nNewValue);
	long GetBaseUnit();
	void SetBaseUnit(long nNewValue);
	BOOL GetBaseUnitIsAuto();
	void SetBaseUnitIsAuto(BOOL bNewValue);
	long GetMajorUnitScale();
	void SetMajorUnitScale(long nNewValue);
	long GetMinorUnitScale();
	void SetMinorUnitScale(long nNewValue);
	long GetCategoryType();
	void SetCategoryType(long nNewValue);
	double GetLeft();
	double GetTop();
	double GetWidth();
	double GetHeight();
	long GetDisplayUnit();
	void SetDisplayUnit(long nNewValue);
	double GetDisplayUnitCustom();
	void SetDisplayUnitCustom(double newValue);
	BOOL GetHasDisplayUnitLabel();
	void SetHasDisplayUnitLabel(BOOL bNewValue);
	LPDISPATCH GetDisplayUnitLabel();
	LPDISPATCH GetBorder();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// AxisTitle wrapper class

class AxisTitle : public COleDispatchDriver
{
public:
	AxisTitle() {}		// Calls COleDispatchDriver default constructor
	AxisTitle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	AxisTitle(const AxisTitle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	LPDISPATCH GetCharacters(const VARIANT& Start, const VARIANT& Length);
	void SetHorizontalAlignment(const VARIANT& newValue);
	VARIANT GetHorizontalAlignment();
	double GetLeft();
	void SetLeft(double newValue);
	void SetOrientation(const VARIANT& newValue);
	VARIANT GetOrientation();
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	void SetText(LPCTSTR lpszNewValue);
	CString GetText();
	double GetTop();
	void SetTop(double newValue);
	void SetVerticalAlignment(const VARIANT& newValue);
	VARIANT GetVerticalAlignment();
	VARIANT Delete();
	CString GetName();
	LPDISPATCH GetParent();
	VARIANT Select();
	BOOL GetIncludeInLayout();
	void SetIncludeInLayout(BOOL bNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Chart wrapper class

class Chart : public COleDispatchDriver
{
public:
	Chart() {}		// Calls COleDispatchDriver default constructor
	Chart(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Chart(const Chart& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	void ApplyDataLabels(long Type, const VARIANT& LegendKey, const VARIANT& AutoText, const VARIANT& HasLeaderLines, const VARIANT& ShowSeriesName, const VARIANT& ShowCategoryName, const VARIANT& ShowValue, const VARIANT& ShowPercentage, 
		const VARIANT& ShowBubbleSize, const VARIANT& Separator);
	long GetChartType();
	void SetChartType(long nNewValue);
	BOOL GetHasDataTable();
	void SetHasDataTable(BOOL bNewValue);
	void GetChartElement(long X, long Y, long* ElementID, long* Arg1, long* Arg2);
	void SetSourceData(LPCTSTR Source, const VARIANT& PlotBy);
	long GetPlotBy();
	void SetPlotBy(long nNewValue);
	void SetBackgroundPicture(LPCTSTR FileName);
	LPDISPATCH GetDataTable();
	void Paste(const VARIANT& Type);
	long GetBarShape();
	void SetBarShape(long nNewValue);
	void SetDefaultChart(const VARIANT& Name);
	void ApplyChartTemplate(LPCTSTR FileName);
	void SaveChartTemplate(LPCTSTR FileName);
	LPDISPATCH GetSideWall();
	LPDISPATCH GetBackWall();
	VARIANT GetChartStyle();
	void SetChartStyle(const VARIANT& newValue);
	void ClearToMatchStyle();
	void SetShowDataLabelsOverMaximum(BOOL bNewValue);
	BOOL GetShowDataLabelsOverMaximum();
	void ApplyLayout(long Layout, const VARIANT& ChartType);
	void Refresh();
	LPDISPATCH GetChartData();
	LPDISPATCH GetShapes();
	long GetCreator();
	LPDISPATCH GetApplication();
	void SetAutoScaling(BOOL bNewValue);
	BOOL GetAutoScaling();
	LPDISPATCH Axes(const VARIANT& Type, long AxisGroup);
	LPDISPATCH GetChartArea();
	LPDISPATCH ChartGroups(const VARIANT& Index);
	LPDISPATCH GetChartTitle();
	void ChartWizard(const VARIANT& Source, const VARIANT& Gallery, const VARIANT& Format, const VARIANT& PlotBy, const VARIANT& CategoryLabels, const VARIANT& SeriesLabels, const VARIANT& HasLegend, const VARIANT& Title, 
		const VARIANT& CategoryTitle, const VARIANT& ValueTitle, const VARIANT& ExtraTitle);
	void Copy(const VARIANT& Before, const VARIANT& After);
	void CopyPicture(long Appearance, long Format, long Size);
	void Delete();
	long GetDepthPercent();
	void SetDepthPercent(long nNewValue);
	long GetDisplayBlanksAs();
	void SetDisplayBlanksAs(long nNewValue);
	long GetElevation();
	void SetElevation(long nNewValue);
	BOOL Export(LPCTSTR FileName, const VARIANT& FilterName, const VARIANT& Interactive);
	LPDISPATCH GetFloor();
	long GetGapDepth();
	void SetGapDepth(long nNewValue);
	VARIANT GetHasAxis(const VARIANT& Index1, const VARIANT& Index2);
	void SetHasAxis(const VARIANT& Index1, const VARIANT& Index2, const VARIANT& newValue);
	BOOL GetHasLegend();
	void SetHasLegend(BOOL bNewValue);
	BOOL GetHasTitle();
	void SetHasTitle(BOOL bNewValue);
	long GetHeightPercent();
	void SetHeightPercent(long nNewValue);
	LPDISPATCH GetLegend();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetPerspective();
	void SetPerspective(long nNewValue);
	LPDISPATCH GetPlotArea();
	BOOL GetPlotVisibleOnly();
	void SetPlotVisibleOnly(BOOL bNewValue);
	VARIANT GetRightAngleAxes();
	void SetRightAngleAxes(const VARIANT& newValue);
	VARIANT GetRotation();
	void SetRotation(const VARIANT& newValue);
	void Select(const VARIANT& Replace);
	LPDISPATCH SeriesCollection(const VARIANT& Index);
	void SetElement(long Element);
	LPDISPATCH GetWalls();
};
/////////////////////////////////////////////////////////////////////////////
// ChartBorder wrapper class

class ChartBorder : public COleDispatchDriver
{
public:
	ChartBorder() {}		// Calls COleDispatchDriver default constructor
	ChartBorder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartBorder(const ChartBorder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetColor(const VARIANT& newValue);
	VARIANT GetColor();
	void SetColorIndex(const VARIANT& newValue);
	VARIANT GetColorIndex();
	void SetLineStyle(const VARIANT& newValue);
	VARIANT GetLineStyle();
	void SetWeight(const VARIANT& newValue);
	VARIANT GetWeight();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// ChartCharacters wrapper class

class ChartCharacters : public COleDispatchDriver
{
public:
	ChartCharacters() {}		// Calls COleDispatchDriver default constructor
	ChartCharacters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartCharacters(const ChartCharacters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	long GetCount();
	VARIANT Delete();
	LPDISPATCH GetFont();
	VARIANT Insert(LPCTSTR String);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	CString GetPhoneticCharacters();
	void SetPhoneticCharacters(LPCTSTR lpszNewValue);
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// ChartArea wrapper class

class ChartArea : public COleDispatchDriver
{
public:
	ChartArea() {}		// Calls COleDispatchDriver default constructor
	ChartArea(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartArea(const ChartArea& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	VARIANT Clear();
	VARIANT ClearContents();
	VARIANT Copy();
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	VARIANT ClearFormats();
	double GetHeight();
	void SetHeight(double newValue);
	double GetLeft();
	void SetLeft(double newValue);
	double GetTop();
	void SetTop(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// ChartColorFormat wrapper class

class ChartColorFormat : public COleDispatchDriver
{
public:
	ChartColorFormat() {}		// Calls COleDispatchDriver default constructor
	ChartColorFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartColorFormat(const ChartColorFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	long GetSchemeColor();
	void SetSchemeColor(long nNewValue);
	long Get_Default();
	long GetType();
	long GetCreator();
	LPDISPATCH GetApplication();
	long GetRgb();
};
/////////////////////////////////////////////////////////////////////////////
// ChartData wrapper class

class ChartData : public COleDispatchDriver
{
public:
	ChartData() {}		// Calls COleDispatchDriver default constructor
	ChartData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartData(const ChartData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetWorkbook();
	void Activate();
	BOOL GetIsLinked();
	void BreakLink();
};
/////////////////////////////////////////////////////////////////////////////
// ChartFillFormat wrapper class

class ChartFillFormat : public COleDispatchDriver
{
public:
	ChartFillFormat() {}		// Calls COleDispatchDriver default constructor
	ChartFillFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartFillFormat(const ChartFillFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void Solid();
	void UserTextured(LPCTSTR TextureFile);
	LPDISPATCH GetBackColor();
	LPDISPATCH GetForeColor();
	float GetGradientDegree();
	CString GetTextureName();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	void OneColorGradient(long Style, long Variant, float Degree);
	long GetGradientColorType();
	long GetGradientStyle();
	long GetGradientVariant();
	long GetPattern();
	void Patterned(long Pattern);
	void PresetGradient(long Style, long Variant, long PresetGradientType);
	long GetPresetGradientType();
	long GetPresetTexture();
	void PresetTextured(long PresetTexture);
	long GetTextureType();
	void TwoColorGradient(long Style, long Variant);
	long GetType();
	void UserPicture(const VARIANT& PictureFile, const VARIANT& PictureFormat, const VARIANT& PictureStackUnit, const VARIANT& PicturePlacement);
	long GetVisible();
	void SetVisible(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ChartFormat wrapper class

class ChartFormat : public COleDispatchDriver
{
public:
	ChartFormat() {}		// Calls COleDispatchDriver default constructor
	ChartFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartFormat(const ChartFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFill();
	LPDISPATCH GetGlow();
	LPDISPATCH GetLine();
	LPDISPATCH GetParent();
	LPDISPATCH GetPictureFormat();
	LPDISPATCH GetShadow();
	LPDISPATCH GetSoftEdge();
	LPDISPATCH GetTextFrame2();
	LPDISPATCH GetThreeD();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// ChartGroup wrapper class

class ChartGroup : public COleDispatchDriver
{
public:
	ChartGroup() {}		// Calls COleDispatchDriver default constructor
	ChartGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartGroup(const ChartGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDownBars();
	LPDISPATCH GetDropLines();
	void SetHasDropLines(BOOL bNewValue);
	BOOL GetHasDropLines();
	void SetHasHiLoLines(BOOL bNewValue);
	BOOL GetHasHiLoLines();
	void SetHasRadarAxisLabels(BOOL bNewValue);
	BOOL GetHasRadarAxisLabels();
	void SetHasSeriesLines(BOOL bNewValue);
	BOOL GetHasSeriesLines();
	void SetHasUpDownBars(BOOL bNewValue);
	BOOL GetHasUpDownBars();
	LPDISPATCH GetHiLoLines();
	LPDISPATCH SeriesCollection(const VARIANT& Index);
	LPDISPATCH GetSeriesLines();
	LPDISPATCH GetUpBars();
	void SetVaryByCategories(BOOL bNewValue);
	BOOL GetVaryByCategories();
	long GetSizeRepresents();
	void SetSizeRepresents(long nNewValue);
	void SetShowNegativeBubbles(BOOL bNewValue);
	BOOL GetShowNegativeBubbles();
	void SetSplitType(long nNewValue);
	long GetSplitType();
	VARIANT GetSplitValue();
	void SetSplitValue(const VARIANT& newValue);
	BOOL GetHas3DShading();
	void SetHas3DShading(BOOL bNewValue);
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
	long GetAxisGroup();
	void SetAxisGroup(long nNewValue);
	long GetBubbleScale();
	void SetBubbleScale(long nNewValue);
	long GetDoughnutHoleSize();
	void SetDoughnutHoleSize(long nNewValue);
	long GetFirstSliceAngle();
	void SetFirstSliceAngle(long nNewValue);
	long GetGapWidth();
	void SetGapWidth(long nNewValue);
	long GetIndex();
	long GetOverlap();
	void SetOverlap(long nNewValue);
	LPDISPATCH GetRadarAxisLabels();
	long GetSecondPlotSize();
	void SetSecondPlotSize(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ChartGroups wrapper class

class ChartGroups : public COleDispatchDriver
{
public:
	ChartGroups() {}		// Calls COleDispatchDriver default constructor
	ChartGroups(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartGroups(const ChartGroups& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN _NewEnum();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// ChartTitle wrapper class

class ChartTitle : public COleDispatchDriver
{
public:
	ChartTitle() {}		// Calls COleDispatchDriver default constructor
	ChartTitle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartTitle(const ChartTitle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	LPDISPATCH GetCharacters(const VARIANT& Start, const VARIANT& Length);
	void SetHorizontalAlignment(const VARIANT& newValue);
	VARIANT GetHorizontalAlignment();
	double GetLeft();
	void SetLeft(double newValue);
	void SetOrientation(const VARIANT& newValue);
	VARIANT GetOrientation();
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	void SetText(LPCTSTR lpszNewValue);
	CString GetText();
	double GetTop();
	void SetTop(double newValue);
	void SetVerticalAlignment(const VARIANT& newValue);
	VARIANT GetVerticalAlignment();
	VARIANT Delete();
	CString GetName();
	LPDISPATCH GetParent();
	VARIANT Select();
	BOOL GetIncludeInLayout();
	void SetIncludeInLayout(BOOL bNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Corners wrapper class

class Corners : public COleDispatchDriver
{
public:
	Corners() {}		// Calls COleDispatchDriver default constructor
	Corners(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Corners(const Corners& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// DataLabel wrapper class

class DataLabel : public COleDispatchDriver
{
public:
	DataLabel() {}		// Calls COleDispatchDriver default constructor
	DataLabel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DataLabel(const DataLabel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	CString GetName();
	VARIANT Select();
	VARIANT Delete();
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	LPDISPATCH GetCharacters(const VARIANT& Start, const VARIANT& Length);
	VARIANT GetHorizontalAlignment();
	void SetHorizontalAlignment(const VARIANT& newValue);
	double GetLeft();
	void SetLeft(double newValue);
	VARIANT GetOrientation();
	void SetOrientation(const VARIANT& newValue);
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	double GetTop();
	void SetTop(double newValue);
	VARIANT GetVerticalAlignment();
	void SetVerticalAlignment(const VARIANT& newValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
	BOOL GetAutoText();
	void SetAutoText(BOOL bNewValue);
	CString GetNumberFormat();
	void SetNumberFormat(LPCTSTR lpszNewValue);
	BOOL GetNumberFormatLinked();
	void SetNumberFormatLinked(BOOL bNewValue);
	VARIANT GetNumberFormatLocal();
	void SetNumberFormatLocal(const VARIANT& newValue);
	BOOL GetShowLegendKey();
	void SetShowLegendKey(BOOL bNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	BOOL GetShowSeriesName();
	void SetShowSeriesName(BOOL bNewValue);
	BOOL GetShowCategoryName();
	void SetShowCategoryName(BOOL bNewValue);
	BOOL GetShowValue();
	void SetShowValue(BOOL bNewValue);
	BOOL GetShowPercentage();
	void SetShowPercentage(BOOL bNewValue);
	BOOL GetShowBubbleSize();
	void SetShowBubbleSize(BOOL bNewValue);
	VARIANT GetSeparator();
	void SetSeparator(const VARIANT& newValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// DataLabels wrapper class

class DataLabels : public COleDispatchDriver
{
public:
	DataLabels() {}		// Calls COleDispatchDriver default constructor
	DataLabels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DataLabels(const DataLabels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	CString GetName();
	VARIANT Select();
	VARIANT Delete();
	VARIANT GetHorizontalAlignment();
	void SetHorizontalAlignment(const VARIANT& newValue);
	VARIANT GetOrientation();
	void SetOrientation(const VARIANT& newValue);
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	VARIANT GetVerticalAlignment();
	void SetVerticalAlignment(const VARIANT& newValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
	BOOL GetAutoText();
	void SetAutoText(BOOL bNewValue);
	CString GetNumberFormat();
	void SetNumberFormat(LPCTSTR lpszNewValue);
	BOOL GetNumberFormatLinked();
	void SetNumberFormatLinked(BOOL bNewValue);
	VARIANT GetNumberFormatLocal();
	void SetNumberFormatLocal(const VARIANT& newValue);
	BOOL GetShowLegendKey();
	void SetShowLegendKey(BOOL bNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	BOOL GetShowSeriesName();
	void SetShowSeriesName(BOOL bNewValue);
	BOOL GetShowCategoryName();
	void SetShowCategoryName(BOOL bNewValue);
	BOOL GetShowValue();
	void SetShowValue(BOOL bNewValue);
	BOOL GetShowPercentage();
	void SetShowPercentage(BOOL bNewValue);
	BOOL GetShowBubbleSize();
	void SetShowBubbleSize(BOOL bNewValue);
	VARIANT GetSeparator();
	void SetSeparator(const VARIANT& newValue);
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN _NewEnum();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	LPDISPATCH _Default(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// DataTable wrapper class

class DataTable : public COleDispatchDriver
{
public:
	DataTable() {}		// Calls COleDispatchDriver default constructor
	DataTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DataTable(const DataTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetShowLegendKey(BOOL bNewValue);
	BOOL GetShowLegendKey();
	void SetHasBorderHorizontal(BOOL bNewValue);
	BOOL GetHasBorderHorizontal();
	void SetHasBorderVertical(BOOL bNewValue);
	BOOL GetHasBorderVertical();
	void SetHasBorderOutline(BOOL bNewValue);
	BOOL GetHasBorderOutline();
	LPDISPATCH GetBorder();
	LPDISPATCH GetFont();
	void Select();
	void Delete();
	LPDISPATCH GetParent();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// DisplayUnitLabel wrapper class

class DisplayUnitLabel : public COleDispatchDriver
{
public:
	DisplayUnitLabel() {}		// Calls COleDispatchDriver default constructor
	DisplayUnitLabel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DisplayUnitLabel(const DisplayUnitLabel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	LPDISPATCH GetCharacters(const VARIANT& Start, const VARIANT& Length);
	void SetHorizontalAlignment(const VARIANT& newValue);
	VARIANT GetHorizontalAlignment();
	double GetLeft();
	void SetLeft(double newValue);
	void SetOrientation(const VARIANT& newValue);
	VARIANT GetOrientation();
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	void SetText(LPCTSTR lpszNewValue);
	CString GetText();
	double GetTop();
	void SetTop(double newValue);
	void SetVerticalAlignment(const VARIANT& newValue);
	VARIANT GetVerticalAlignment();
	VARIANT Delete();
	CString GetName();
	LPDISPATCH GetParent();
	VARIANT Select();
	long GetPosition();
	void SetPosition(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// DownBars wrapper class

class DownBars : public COleDispatchDriver
{
public:
	DownBars() {}		// Calls COleDispatchDriver default constructor
	DownBars(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DownBars(const DownBars& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	VARIANT Delete();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// DropLines wrapper class

class DropLines : public COleDispatchDriver
{
public:
	DropLines() {}		// Calls COleDispatchDriver default constructor
	DropLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DropLines(const DropLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	LPDISPATCH GetParent();
	LPDISPATCH GetBorder();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	VARIANT Delete();
	VARIANT Select();
};
/////////////////////////////////////////////////////////////////////////////
// ErrorBars wrapper class

class ErrorBars : public COleDispatchDriver
{
public:
	ErrorBars() {}		// Calls COleDispatchDriver default constructor
	ErrorBars(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ErrorBars(const ErrorBars& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetBorder();
	VARIANT Delete();
	VARIANT ClearFormats();
	long GetEndStyle();
	void SetEndStyle(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// Floor wrapper class

class Floor : public COleDispatchDriver
{
public:
	Floor() {}		// Calls COleDispatchDriver default constructor
	Floor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Floor(const Floor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	VARIANT ClearFormats();
	VARIANT GetPictureType();
	void SetPictureType(const VARIANT& newValue);
	void Paste();
	long GetThickness();
	void SetThickness(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// ChartFont wrapper class

class ChartFont : public COleDispatchDriver
{
public:
	ChartFont() {}		// Calls COleDispatchDriver default constructor
	ChartFont(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ChartFont(const ChartFont& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetBackground(const VARIANT& newValue);
	VARIANT GetBackground();
	void SetBold(const VARIANT& newValue);
	VARIANT GetBold();
	void SetColor(const VARIANT& newValue);
	VARIANT GetColor();
	void SetColorIndex(const VARIANT& newValue);
	VARIANT GetColorIndex();
	void SetFontStyle(const VARIANT& newValue);
	VARIANT GetFontStyle();
	void SetItalic(const VARIANT& newValue);
	VARIANT GetItalic();
	void SetName(const VARIANT& newValue);
	VARIANT GetName();
	void SetSize(const VARIANT& newValue);
	VARIANT GetSize();
	void SetStrikethrough(const VARIANT& newValue);
	VARIANT GetStrikethrough();
	void SetSubscript(const VARIANT& newValue);
	VARIANT GetSubscript();
	void SetSuperscript(const VARIANT& newValue);
	VARIANT GetSuperscript();
	void SetUnderline(const VARIANT& newValue);
	VARIANT GetUnderline();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// Gridlines wrapper class

class Gridlines : public COleDispatchDriver
{
public:
	Gridlines() {}		// Calls COleDispatchDriver default constructor
	Gridlines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Gridlines(const Gridlines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	LPDISPATCH GetBorder();
	VARIANT Delete();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// HiLoLines wrapper class

class HiLoLines : public COleDispatchDriver
{
public:
	HiLoLines() {}		// Calls COleDispatchDriver default constructor
	HiLoLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	HiLoLines(const HiLoLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	CString GetName();
	LPDISPATCH GetBorder();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	VARIANT Delete();
	VARIANT Select();
};
/////////////////////////////////////////////////////////////////////////////
// Interior wrapper class

class Interior : public COleDispatchDriver
{
public:
	Interior() {}		// Calls COleDispatchDriver default constructor
	Interior(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Interior(const Interior& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetColor(const VARIANT& newValue);
	VARIANT GetColor();
	void SetColorIndex(const VARIANT& newValue);
	VARIANT GetColorIndex();
	void SetInvertIfNegative(const VARIANT& newValue);
	VARIANT GetInvertIfNegative();
	void SetPattern(const VARIANT& newValue);
	VARIANT GetPattern();
	void SetPatternColor(const VARIANT& newValue);
	VARIANT GetPatternColor();
	void SetPatternColorIndex(const VARIANT& newValue);
	VARIANT GetPatternColorIndex();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// LeaderLines wrapper class

class LeaderLines : public COleDispatchDriver
{
public:
	LeaderLines() {}		// Calls COleDispatchDriver default constructor
	LeaderLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	LeaderLines(const LeaderLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void Select();
	LPDISPATCH GetBorder();
	void Delete();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// Legend wrapper class

class Legend : public COleDispatchDriver
{
public:
	Legend() {}		// Calls COleDispatchDriver default constructor
	Legend(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Legend(const Legend& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	CString GetName();
	VARIANT Select();
	VARIANT Delete();
	LPDISPATCH LegendEntries(const VARIANT& Index);
	long GetPosition();
	void SetPosition(long nNewValue);
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	VARIANT Clear();
	double GetHeight();
	void SetHeight(double newValue);
	double GetLeft();
	void SetLeft(double newValue);
	double GetTop();
	void SetTop(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	BOOL GetIncludeInLayout();
	void SetIncludeInLayout(BOOL bNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// LegendEntries wrapper class

class LegendEntries : public COleDispatchDriver
{
public:
	LegendEntries() {}		// Calls COleDispatchDriver default constructor
	LegendEntries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	LegendEntries(const LegendEntries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN _NewEnum();
	long GetCreator();
	LPDISPATCH GetApplication();
	LPDISPATCH _Default(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// LegendEntry wrapper class

class LegendEntry : public COleDispatchDriver
{
public:
	LegendEntry() {}		// Calls COleDispatchDriver default constructor
	LegendEntry(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	LegendEntry(const LegendEntry& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	VARIANT Delete();
	LPDISPATCH GetFont();
	long GetIndex();
	LPDISPATCH GetLegendKey();
	VARIANT Select();
	double GetLeft();
	double GetTop();
	double GetWidth();
	double GetHeight();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// LegendKey wrapper class

class LegendKey : public COleDispatchDriver
{
public:
	LegendKey() {}		// Calls COleDispatchDriver default constructor
	LegendKey(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	LegendKey(const LegendKey& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	VARIANT ClearFormats();
	VARIANT Delete();
	BOOL GetInvertIfNegative();
	void SetInvertIfNegative(BOOL bNewValue);
	long GetMarkerBackgroundColor();
	void SetMarkerBackgroundColor(long nNewValue);
	long GetMarkerBackgroundColorIndex();
	void SetMarkerBackgroundColorIndex(long nNewValue);
	long GetMarkerForegroundColor();
	void SetMarkerForegroundColor(long nNewValue);
	long GetMarkerForegroundColorIndex();
	void SetMarkerForegroundColorIndex(long nNewValue);
	long GetMarkerSize();
	void SetMarkerSize(long nNewValue);
	long GetMarkerStyle();
	void SetMarkerStyle(long nNewValue);
	long GetPictureType();
	void SetPictureType(long nNewValue);
	BOOL GetSmooth();
	void SetSmooth(BOOL bNewValue);
	double GetLeft();
	double GetTop();
	double GetWidth();
	double GetHeight();
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	double GetPictureUnit2();
	void SetPictureUnit2(double newValue);
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// PlotArea wrapper class

class PlotArea : public COleDispatchDriver
{
public:
	PlotArea() {}		// Calls COleDispatchDriver default constructor
	PlotArea(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	PlotArea(const PlotArea& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	VARIANT ClearFormats();
	double GetHeight();
	void SetHeight(double newValue);
	double GetLeft();
	void SetLeft(double newValue);
	double GetTop();
	void SetTop(double newValue);
	double GetWidth();
	void SetWidth(double newValue);
	double GetInsideLeft();
	void SetInsideLeft(double newValue);
	double GetInsideTop();
	void SetInsideTop(double newValue);
	double GetInsideWidth();
	void SetInsideWidth(double newValue);
	double GetInsideHeight();
	void SetInsideHeight(double newValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// Point wrapper class

class Point : public COleDispatchDriver
{
public:
	Point() {}		// Calls COleDispatchDriver default constructor
	Point(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Point(const Point& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	VARIANT ClearFormats();
	VARIANT Copy();
	LPDISPATCH GetDataLabel();
	VARIANT Delete();
	long GetExplosion();
	void SetExplosion(long nNewValue);
	BOOL GetHasDataLabel();
	void SetHasDataLabel(BOOL bNewValue);
	BOOL GetInvertIfNegative();
	void SetInvertIfNegative(BOOL bNewValue);
	long GetMarkerBackgroundColor();
	void SetMarkerBackgroundColor(long nNewValue);
	long GetMarkerBackgroundColorIndex();
	void SetMarkerBackgroundColorIndex(long nNewValue);
	long GetMarkerForegroundColor();
	void SetMarkerForegroundColor(long nNewValue);
	long GetMarkerForegroundColorIndex();
	void SetMarkerForegroundColorIndex(long nNewValue);
	long GetMarkerSize();
	void SetMarkerSize(long nNewValue);
	long GetMarkerStyle();
	void SetMarkerStyle(long nNewValue);
	VARIANT Paste();
	long GetPictureType();
	void SetPictureType(long nNewValue);
	VARIANT Select();
	BOOL GetApplyPictToSides();
	void SetApplyPictToSides(BOOL bNewValue);
	BOOL GetApplyPictToFront();
	void SetApplyPictToFront(BOOL bNewValue);
	BOOL GetApplyPictToEnd();
	void SetApplyPictToEnd(BOOL bNewValue);
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	BOOL GetSecondaryPlot();
	void SetSecondaryPlot(BOOL bNewValue);
	BOOL GetHas3DEffect();
	void SetHas3DEffect(BOOL bNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	double GetPictureUnit2();
	void SetPictureUnit2(double newValue);
	LPDISPATCH GetApplication();
	VARIANT ApplyDataLabels(long Type, const VARIANT& LegendKey, const VARIANT& AutoText, const VARIANT& HasLeaderLines, const VARIANT& ShowSeriesName, const VARIANT& ShowCategoryName, const VARIANT& ShowValue, const VARIANT& ShowPercentage, 
		const VARIANT& ShowBubbleSize, const VARIANT& Separator);
};
/////////////////////////////////////////////////////////////////////////////
// Points wrapper class

class Points : public COleDispatchDriver
{
public:
	Points() {}		// Calls COleDispatchDriver default constructor
	Points(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Points(const Points& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	long GetCount();
	LPDISPATCH Item(long Index);
	LPUNKNOWN _NewEnum();
	long GetCreator();
	LPDISPATCH GetApplication();
	LPDISPATCH _Default(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// Series wrapper class

class Series : public COleDispatchDriver
{
public:
	Series() {}		// Calls COleDispatchDriver default constructor
	Series(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Series(const Series& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	long GetAxisGroup();
	void SetAxisGroup(long nNewValue);
	VARIANT ClearFormats();
	VARIANT Copy();
	LPDISPATCH DataLabels(const VARIANT& Index);
	VARIANT Delete();
	VARIANT ErrorBar(long Direction, long Include, long Type, const VARIANT& Amount, const VARIANT& MinusValues);
	LPDISPATCH GetErrorBars();
	long GetExplosion();
	void SetExplosion(long nNewValue);
	CString GetFormula();
	void SetFormula(LPCTSTR lpszNewValue);
	CString GetFormulaLocal();
	void SetFormulaLocal(LPCTSTR lpszNewValue);
	CString GetFormulaR1C1();
	void SetFormulaR1C1(LPCTSTR lpszNewValue);
	CString GetFormulaR1C1Local();
	void SetFormulaR1C1Local(LPCTSTR lpszNewValue);
	BOOL GetHasDataLabels();
	void SetHasDataLabels(BOOL bNewValue);
	BOOL GetHasErrorBars();
	void SetHasErrorBars(BOOL bNewValue);
	BOOL GetInvertIfNegative();
	void SetInvertIfNegative(BOOL bNewValue);
	long GetMarkerBackgroundColor();
	void SetMarkerBackgroundColor(long nNewValue);
	long GetMarkerBackgroundColorIndex();
	void SetMarkerBackgroundColorIndex(long nNewValue);
	long GetMarkerForegroundColor();
	void SetMarkerForegroundColor(long nNewValue);
	long GetMarkerForegroundColorIndex();
	void SetMarkerForegroundColorIndex(long nNewValue);
	long GetMarkerSize();
	void SetMarkerSize(long nNewValue);
	long GetMarkerStyle();
	void SetMarkerStyle(long nNewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	VARIANT Paste();
	long GetPictureType();
	void SetPictureType(long nNewValue);
	long GetPlotOrder();
	void SetPlotOrder(long nNewValue);
	LPDISPATCH Points(const VARIANT& Index);
	VARIANT Select();
	BOOL GetSmooth();
	void SetSmooth(BOOL bNewValue);
	LPDISPATCH Trendlines(const VARIANT& Index);
	long GetType();
	void SetType(long nNewValue);
	long GetChartType();
	void SetChartType(long nNewValue);
	VARIANT GetValues();
	void SetValues(const VARIANT& newValue);
	VARIANT GetXValues();
	void SetXValues(const VARIANT& newValue);
	VARIANT GetBubbleSizes();
	void SetBubbleSizes(const VARIANT& newValue);
	long GetBarShape();
	void SetBarShape(long nNewValue);
	BOOL GetApplyPictToSides();
	void SetApplyPictToSides(BOOL bNewValue);
	BOOL GetApplyPictToFront();
	void SetApplyPictToFront(BOOL bNewValue);
	BOOL GetApplyPictToEnd();
	void SetApplyPictToEnd(BOOL bNewValue);
	BOOL GetHas3DEffect();
	void SetHas3DEffect(BOOL bNewValue);
	BOOL GetShadow();
	void SetShadow(BOOL bNewValue);
	BOOL GetHasLeaderLines();
	void SetHasLeaderLines(BOOL bNewValue);
	LPDISPATCH GetLeaderLines();
	LPDISPATCH GetFormat();
	long GetCreator();
	double GetPictureUnit2();
	void SetPictureUnit2(double newValue);
	LPDISPATCH GetApplication();
	VARIANT ApplyDataLabels(long Type, const VARIANT& LegendKey, const VARIANT& AutoText, const VARIANT& HasLeaderLines, const VARIANT& ShowSeriesName, const VARIANT& ShowCategoryName, const VARIANT& ShowValue, const VARIANT& ShowPercentage, 
		const VARIANT& ShowBubbleSize, const VARIANT& Separator);
};
/////////////////////////////////////////////////////////////////////////////
// SeriesCollection wrapper class

class SeriesCollection : public COleDispatchDriver
{
public:
	SeriesCollection() {}		// Calls COleDispatchDriver default constructor
	SeriesCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SeriesCollection(const SeriesCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	long GetCount();
	VARIANT Extend(const VARIANT& Source, const VARIANT& Rowcol, const VARIANT& CategoryLabels);
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN _NewEnum();
	LPDISPATCH NewSeries();
	long GetCreator();
	LPDISPATCH GetApplication();
	LPDISPATCH Add(const VARIANT& Source, long Rowcol, const VARIANT& SeriesLabels, const VARIANT& CategoryLabels, const VARIANT& Replace);
	LPDISPATCH _Default(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// SeriesLines wrapper class

class SeriesLines : public COleDispatchDriver
{
public:
	SeriesLines() {}		// Calls COleDispatchDriver default constructor
	SeriesLines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	SeriesLines(const SeriesLines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	LPDISPATCH GetBorder();
	VARIANT Delete();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// TickLabels wrapper class

class TickLabels : public COleDispatchDriver
{
public:
	TickLabels() {}		// Calls COleDispatchDriver default constructor
	TickLabels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	TickLabels(const TickLabels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	VARIANT Delete();
	LPDISPATCH GetFont();
	CString GetName();
	CString GetNumberFormat();
	void SetNumberFormat(LPCTSTR lpszNewValue);
	BOOL GetNumberFormatLinked();
	void SetNumberFormatLinked(BOOL bNewValue);
	VARIANT GetNumberFormatLocal();
	void SetNumberFormatLocal(const VARIANT& newValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	VARIANT Select();
	long GetDepth();
	long GetOffset();
	void SetOffset(long nNewValue);
	BOOL GetMultiLevel();
	void SetMultiLevel(BOOL bNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Trendline wrapper class

class Trendline : public COleDispatchDriver
{
public:
	Trendline() {}		// Calls COleDispatchDriver default constructor
	Trendline(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Trendline(const Trendline& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH GetBorder();
	VARIANT ClearFormats();
	LPDISPATCH GetDataLabel();
	VARIANT Delete();
	BOOL GetDisplayEquation();
	void SetDisplayEquation(BOOL bNewValue);
	BOOL GetDisplayRSquared();
	void SetDisplayRSquared(BOOL bNewValue);
	long GetIndex();
	double GetIntercept();
	void SetIntercept(double newValue);
	BOOL GetInterceptIsAuto();
	void SetInterceptIsAuto(BOOL bNewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	BOOL GetNameIsAuto();
	void SetNameIsAuto(BOOL bNewValue);
	long GetOrder();
	void SetOrder(long nNewValue);
	long GetPeriod();
	void SetPeriod(long nNewValue);
	VARIANT Select();
	long GetType();
	void SetType(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	double GetBackward2();
	void SetBackward2(double newValue);
	double GetForward2();
	void SetForward2(double newValue);
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// Trendlines wrapper class

class Trendlines : public COleDispatchDriver
{
public:
	Trendlines() {}		// Calls COleDispatchDriver default constructor
	Trendlines(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Trendlines(const Trendlines& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParent();
	LPDISPATCH Add(long Type, const VARIANT& Order, const VARIANT& Period, const VARIANT& Forward, const VARIANT& Backward, const VARIANT& Intercept, const VARIANT& DisplayEquation, const VARIANT& DisplayRSquared, const VARIANT& Name);
	long GetCount();
	LPDISPATCH Item(const VARIANT& Index);
	LPUNKNOWN _NewEnum();
	long GetCreator();
	LPDISPATCH GetApplication();
	LPDISPATCH _Default(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// UpBars wrapper class

class UpBars : public COleDispatchDriver
{
public:
	UpBars() {}		// Calls COleDispatchDriver default constructor
	UpBars(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	UpBars(const UpBars& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	VARIANT Delete();
	LPDISPATCH GetFill();
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
/////////////////////////////////////////////////////////////////////////////
// Walls wrapper class

class Walls : public COleDispatchDriver
{
public:
	Walls() {}		// Calls COleDispatchDriver default constructor
	Walls(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Walls(const Walls& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT Select();
	LPDISPATCH GetParent();
	VARIANT ClearFormats();
	VARIANT GetPictureType();
	void SetPictureType(const VARIANT& newValue);
	void Paste();
	VARIANT GetPictureUnit();
	void SetPictureUnit(const VARIANT& newValue);
	long GetThickness();
	void SetThickness(long nNewValue);
	LPDISPATCH GetFormat();
	long GetCreator();
	LPDISPATCH GetApplication();
};
