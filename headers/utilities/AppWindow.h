#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 272 member(s).
namespace Windows::UI::WindowManagement {
class AppWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppWindow@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindow@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAsync@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long CloseAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureAsPopupWindow@AppWindow@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long ConfigureAsPopupWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViewWindowId@AppWindow@WindowManagement@UI@Windows@@QEAAJPEAUWindowId@2ApplicationModel@Internal@4@@Z
    long GetCurrentViewWindowId(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegions@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDisplayRegion@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetDisplayRegions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacement@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIAppWindowPlacement@234@@Z
    virtual long GetPlacement(::Windows::UI::WindowManagement::IAppWindowPlacement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementFromWin32Rect@AppWindow@WindowManagement@UI@Windows@@UEAAJURect@Foundation@4@PEAPEAUIAppWindowPlacement@234@@Z
    virtual long GetPlacementFromWin32Rect(WindissectOpaque, ::Windows::UI::WindowManagement::IAppWindowPlacement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResizeDCompSynchronizationObject@AppWindow@WindowManagement@UI@Windows@@UEAAJPEA_K@Z
    virtual long GetResizeDCompSynchronizationObject(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWin32RectFromPlacement@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIAppWindowPlacement@234@PEAURect@Foundation@4@@Z
    virtual long GetWin32RectFromPlacement(::Windows::UI::WindowManagement::IAppWindowPlacement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleton@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasSingleton(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppWindow@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppWindow@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@AppWindow@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long NotifyLayoutCompleted();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppWindow@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSingleton@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long ReadSingleton(HSTRING__*, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppWindow@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveAdjacentToCurrentView@AppWindow@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long RequestMoveAdjacentToCurrentView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveAdjacentToWindow@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIAppWindow@234@@Z
    virtual long RequestMoveAdjacentToWindow(::Windows::UI::WindowManagement::IAppWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToCurrentViewContent@AppWindow@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@@Z
    virtual long RequestMoveRelativeToCurrentViewContent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToDisplayRegion@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIDisplayRegion@234@UPoint@Foundation@4@@Z
    virtual long RequestMoveRelativeToDisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToWindowContent@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIAppWindow@234@UPoint@Foundation@4@@Z
    virtual long RequestMoveRelativeToWindowContent(::Windows::UI::WindowManagement::IAppWindow *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveToDisplayRegion@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIDisplayRegion@234@@Z
    virtual long RequestMoveToDisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPositionAndSizeWithContext@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIDisplayRegion@234@UPoint@Foundation@4@USize@74@012@Z
    virtual long RequestPositionAndSizeWithContext(::Windows::UI::WindowManagement::IDisplayRegion *, WindissectOpaque, WindissectOpaque, ::Windows::UI::WindowManagement::IDisplayRegion *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSize@AppWindow@WindowManagement@UI@Windows@@UEAAJUSize@Foundation@4@@Z
    virtual long RequestSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppWindow@WindowManagement@UI@Windows@@QEAAJAEBUAppWindowProxiedIdentityInfo@234@PEAUICoreApplicationView@Core@ApplicationModel@4@PEAV?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIAppWindow@WindowManagement@UI@Windows@@@Internal@Windows@@@Internal@4@@Z
    long RuntimeClassInitialize(::Windows::UI::WindowManagement::AppWindowProxiedIdentityInfo const &, ::Windows::ApplicationModel::Core::ICoreApplicationView *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIUIContentRoot@34@@Z
    virtual long SetContent(::Windows::UI::IUIContentRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIRandomAccessStream@Streams@Storage@4@@Z
    virtual long SetIcon(::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@AppWindow@WindowManagement@UI@Windows@@UEAAJUWindowId@34@@Z
    virtual long SetOwner(::Windows::UI::WindowId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@AppWindow@WindowManagement@UI@Windows@@QEAAJUSize@Foundation@4@@Z
    long SetPreferredMinSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredTopMost@AppWindow@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long SetPreferredTopMost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxiedIdentity@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@_KU_GUID@@1@Z
    virtual long SetProxiedIdentity(HSTRING__*, uint64_t, _GUID, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeZOrderBeneath@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIAppWindow@234@@Z
    virtual long SetRelativeZOrderBeneath(::Windows::UI::WindowManagement::IAppWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryIcon@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIRandomAccessStream@Streams@Storage@4@@Z
    virtual long SetSecondaryIcon(::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnail@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUIRandomAccessStream@Streams@Storage@4@@Z
    virtual long SetThumbnail(::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TitleBarChanged@AppWindow@WindowManagement@UI@Windows@@QEAAJXZ
    long TitleBarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryHide@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long TryHide(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long TrySetTopMost(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsync@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryShowAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsync@AppWindow@WindowManagement@UI@Windows@@UEAAJW4AppWindowShowOptions@234@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryShowAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsync2@AppWindow@WindowManagement@UI@Windows@@UEAAJW4AppWindowShowOptions@234@UWindowId@34@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryShowAsync2(int, ::Windows::UI::WindowId, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@AppWindow@WindowManagement@UI@Windows@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSingleton@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long WriteSingleton(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Activated@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppWindow@WindowManagement@UI@Windows@@_N@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Activated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppWindow@WindowManagement@UI@Windows@@PEAVAppWindowChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloakedChanged@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppWindow@WindowManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_CloakedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloseRequested@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppWindow@WindowManagement@UI@Windows@@PEAVAppWindowCloseRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_CloseRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppWindow@WindowManagement@UI@Windows@@PEAVAppWindowClosedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerId@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContainerId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIUIContentRoot@34@@Z
    virtual long get_Content(::Windows::UI::IUIContentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@4@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FlowDirection@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAW4CoreWindowFlowDirection@Core@34@@Z
    virtual long get_FlowDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Frame@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIAppWindowFrame@234@@Z
    virtual long get_Frame(::Windows::UI::WindowManagement::IAppWindowFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideInTaskSwitcher@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_HideInTaskSwitcher(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HolographicWindowType@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAW4HolographicWindowType@Core@34@@Z
    virtual long get_HolographicWindowType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Id(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSite@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInputSite@Input@Internal@34@@Z
    virtual long get_InputSite(::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCloaked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsClosed@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsClosed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsClosing@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsClosing(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximizable@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsMaximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimizable@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMovable@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsMovable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPopup@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsPopup(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProxied@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsProxied(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResizable@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsResizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32NoActivate@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32NoActivate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32ToolWindow@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32ToolWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32TopLevelAppWindow@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32TopLevelAppWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistedStateId@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistedStateId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferDisableSystemUXPolicy@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_PreferDisableSystemUXPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_PreferredMaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Presenter@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIAppWindowPresenter@234@@Z
    virtual long get_Presenter(::Windows::UI::WindowManagement::IAppWindowPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_PrimaryDisplayRegion(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedAppId@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProxiedAppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedHwnd@AppWindow@WindowManagement@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedHwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedProcessId@AppWindow@WindowManagement@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldSuppressCaptionControls@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldSuppressCaptionControls(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SynchronizedResize@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_SynchronizedResize(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemBackdrop@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUICompositionBrush@Composition@34@@Z
    virtual long get_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBar@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIAppWindowTitleBar@234@@Z
    virtual long get_TitleBar(::Windows::UI::WindowManagement::IAppWindowTitleBar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContext@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIUIContext@34@@Z
    virtual long get_UIContext(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UiaFragmentRoot@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_UiaFragmentRoot(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibilityDetails@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAW4VisibilityDetails@234@@Z
    virtual long get_VisibilityDetails(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@AppWindow@WindowManagement@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_WindowHandle(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUWindowId@34@@Z
    virtual long get_WindowId(::Windows::UI::WindowId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInformation@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowInformation@Core@34@@Z
    virtual long get_WindowInformation(::Windows::UI::Core::IWindowInformation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowLayout@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowLayout@Core@34@@Z
    virtual long get_WindowLayout(::Windows::UI::Core::IWindowLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironment@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowingEnvironment@234@@Z
    virtual long get_WindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Description@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Description(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FlowDirection@AppWindow@WindowManagement@UI@Windows@@UEAAJW4CoreWindowFlowDirection@Core@34@@Z
    virtual long put_FlowDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideInTaskSwitcher@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_HideInTaskSwitcher(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HolographicWindowType@AppWindow@WindowManagement@UI@Windows@@UEAAJW4HolographicWindowType@Core@34@@Z
    virtual long put_HolographicWindowType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDisabled@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMaximizable@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsMaximizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMinimizable@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsMinimizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMovable@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsMovable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPopup@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsPopup(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsProxied@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsProxied(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsResizable@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsResizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32NoActivate@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsWin32NoActivate(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32ToolWindow@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsWin32ToolWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32TopLevelAppWindow@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsWin32TopLevelAppWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PersistedStateId@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PersistedStateId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferDisableSystemUXPolicy@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_PreferDisableSystemUXPolicy(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMaxSize@AppWindow@WindowManagement@UI@Windows@@UEAAJUSize@Foundation@4@@Z
    virtual long put_PreferredMaxSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMinSize@AppWindow@WindowManagement@UI@Windows@@UEAAJUSize@Foundation@4@@Z
    virtual long put_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldSuppressCaptionControls@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_ShouldSuppressCaptionControls(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldWaitForLayoutCompletion@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_ShouldWaitForLayoutCompletion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SynchronizedResize@AppWindow@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_SynchronizedResize(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemBackdrop@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUICompositionBrush@Composition@34@@Z
    virtual long put_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@AppWindow@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Activated@AppWindow@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Activated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@AppWindow@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloakedChanged@AppWindow@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloakedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloseRequested@AppWindow@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloseRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@AppWindow@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindow@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHiddenVisibilityDetails@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CalculateHiddenVisibilityDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWorker@AppWindow@WindowManagement@UI@Windows@@AEAAJW4AppWindowClosedReason@234@@Z
    long CloseWorker(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectInputSites@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long ConnectInputSites();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIsland@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUICompositionIsland@Composition@34@@Z
    long ConnectIsland(::Windows::UI::Composition::ICompositionIsland *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateActivationControllerForWindow@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUHWND__@@@Z
    long CreateActivationControllerForWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHwnd@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CreateHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputSiteForWindow@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CreateInputSiteForWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIslandEnvironment@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CreateIslandEnvironment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUIAProvider@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CreateUIAProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUIContext@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CreateUIContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnknownAppWindowPlacement@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAPEAUIAppWindowPlacement@234@@Z
    long CreateUnknownAppWindowPlacement(::Windows::UI::WindowManagement::IAppWindowPlacement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowClientAdapter@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long CreateWindowClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopLegacyGetPlacement@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAPEAUIAppWindowPlacement@234@@Z
    long DesktopLegacyGetPlacement(::Windows::UI::WindowManagement::IAppWindowPlacement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopLegacyPositionChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long DesktopLegacyPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireVisibilityChangedEvent@AppWindow@WindowManagement@UI@Windows@@AEAAJEE@Z
    long FireVisibilityChangedEvent(unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherQueue@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long GetDispatcherQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegionsInternal@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAPEAU?$IVectorView@PEAVDisplayRegion@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    long GetDisplayRegionsInternal(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationScales@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAM0@Z
    long GetNavigationScales(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAstaThread@AppWindow@WindowManagement@UI@Windows@@AEBA_NXZ
    bool IsAstaThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppliedPresenterChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnAppliedPresenterChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloakChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnCloakChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseRequested@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnCloseRequested(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnDisplayRegionChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameOffsetChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnFrameOffsetChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameSizeChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnFrameSizeChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMinimizedChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnIsMinimizedChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLogicalSizeChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnLogicalSizeChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPhysicalBoundsChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnPhysicalBoundsChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScaleChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnScaleChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTopMostChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnTopMostChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnVisibilityChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientAdapterConsolidated@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnWindowClientAdapterConsolidated(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientAdapterCreated@AppWindow@WindowManagement@UI@Windows@@AEAAJAEBUAppWindowProxiedIdentityInfo@234@PEAU?$IAsyncOperation@PEAUIInspectable@@@Foundation@4@@Z
    long OnWindowClientAdapterCreated(::Windows::UI::WindowManagement::AppWindowProxiedIdentityInfo const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOffsetChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long RaiseOffsetChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSizeChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long RaiseSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTopMostChanged@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long RaiseTopMostChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUia@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long RegisterUia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowClientAdapter@AppWindow@WindowManagement@UI@Windows@@AEAAJAEBUAppWindowProxiedIdentityInfo@234@@Z
    long RegisterWindowClientAdapter(::Windows::UI::WindowManagement::AppWindowProxiedIdentityInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxiedIdentityInfo@AppWindow@WindowManagement@UI@Windows@@AEAAJAEBUAppWindowProxiedIdentityInfo@234@@Z
    long SetProxiedIdentityInfo(::Windows::UI::WindowManagement::AppWindowProxiedIdentityInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBackdropOnCompositionTarget@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long SetSystemBackdropOnCompositionTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIContentRootOnUIContext@AppWindow@WindowManagement@UI@Windows@@AEAAJPEAUIUIContentRoot@34@@Z
    long SetUIContentRootOnUIContext(::Windows::UI::IUIContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsyncInternal@AppWindow@WindowManagement@UI@Windows@@AEAAJW4AppWindowShowOptions@234@UWindowId@34@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    long TryShowAsyncInternal(int, ::Windows::UI::WindowId, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActualSize@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long UpdateActualSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDPI@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long UpdateDPI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowingEnvironment@AppWindow@WindowManagement@UI@Windows@@AEAAJXZ
    long UpdateWindowingEnvironment();
};
} // namespace Windows::UI::WindowManagement
