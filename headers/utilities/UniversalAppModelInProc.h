#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 115 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalAppModelInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJUWindowId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    long CloseRequestedAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedComplete@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJUWindowId@2345@J_N@Z
    long CloseRequestedComplete(WindissectOpaque, long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToLeftDisplayEdge@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AdjacentToLeftDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToRightDisplayEdge@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AdjacentToRightDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewModes@2345@@Z
    virtual long get_AppViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppliedPresenterMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long get_AppliedPresenterMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackButtonVisibility@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewBackButtonVisibility@Core@UI@5@@Z
    virtual long get_BackButtonVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHandleCloseRequest@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CanHandleCloseRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConsolidationStatus@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelConsolidationStatus@2345@@Z
    virtual long get_ConsolidationStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerId@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContainerId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceKind@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ExperienceKind@2345@@Z
    virtual long get_ExperienceKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Frame@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIUniversalFrame@2345@@Z
    virtual long get_Frame(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameworkKind@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelFrameworkKind@2345@@Z
    virtual long get_FrameworkKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreenMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_FullScreenMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideInTaskSwitcher@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HideInTaskSwitcher(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostAppView@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppView@2345@@Z
    virtual long get_HostAppView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCloaked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComponent@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHosted@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsHosted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMain@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMain(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximizable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMaximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimizable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimized@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMovable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMovable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPinnedStateEnabled@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPinnedStateEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPopup@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPopup(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProxied@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProxied(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResizable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemViewActivationPolicyDisabled@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSystemViewActivationPolicyDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopLevel@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopLevel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32NoActivate@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32NoActivate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32ToolWindow@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32ToolWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32TopLevelAppWindow@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32TopLevelAppWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IslandTransformsMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4IslandTransformsMode@Core@4UI@5@@Z
    virtual long get_IslandTransformsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelKind@2345@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LayoutState@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelLayoutState@2345@@Z
    virtual long get_LayoutState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalBounds@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_LogicalBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalVisibleBounds@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_LogicalVisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientationPreference@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long get_OrientationPreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistingStateName@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistingStateName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUAppModelPlacement@2345@@Z
    virtual long get_Placement(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferDisableSystemUXPolicy@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PreferDisableSystemUXPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredFullScreenMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelFullScreenMode@2345@@Z
    virtual long get_PreferredFullScreenMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredLaunchViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationViewWindowingMode@ViewManagement@UI@5@@Z
    virtual long get_PreferredLaunchWindowingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredScale@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_PreferredScale(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PresentationKind@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelPresentationKind@2345@@Z
    virtual long get_PresentationKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PresentationMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelHolographicPresentationMode@2345@@Z
    virtual long get_PresentationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long get_PrimaryDisplayRegion(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedAppId@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProxiedAppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedHwnd@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedHwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedProcessId@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationDescription@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationDescription(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationName@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resizing@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Resizing(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldSuppressCaptionControls@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldSuppressCaptionControls(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBar@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIUniversalStatusBar@2345@@Z
    virtual long get_StatusBar(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedAppViewModes@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewModes@2345@@Z
    virtual long get_SupportedAppViewModes(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBar@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIUniversalTitleBar@2345@@Z
    virtual long get_TitleBar(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserContext@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_UserContext(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserInteractionMode@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long get_UserInteractionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visibility@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelVisibility@2345@@Z
    virtual long get_Visibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideInTaskSwitcher@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_HideInTaskSwitcher(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDisabled@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMaximizable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMaximizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMinimizable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMinimizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMovable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMovable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsProxied@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsProxied(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsResizable@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsResizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LogicalBounds@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJURect@Foundation@5@@Z
    virtual long put_LogicalBounds(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LogicalVisibleBounds@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJURect@Foundation@5@@Z
    virtual long put_LogicalVisibleBounds(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldSuppressCaptionControls@UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_ShouldSuppressCaptionControls(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UniversalAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~UniversalAppModelInProc();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
