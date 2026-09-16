#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 83 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoUniversalAppModelProxyImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    BamoUniversalAppModelProxyImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeHideInTaskSwitcher@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeHideInTaskSwitcher(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsDisabled@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeIsDisabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMaximizable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeIsMaximizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMinimizable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeIsMinimizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMovable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeIsMovable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsProxied@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeIsProxied(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsResizable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long ChangeIsResizable(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAdjacentToLeftDisplayEdge@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateAdjacentToLeftDisplayEdge(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAdjacentToRightDisplayEdge@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateAdjacentToRightDisplayEdge(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppViewMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppViewModes@3456@@Z
    long UpdateAppViewMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppliedPresenterMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    long UpdateAppliedPresenterMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackButtonVisibility@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppViewBackButtonVisibility@Core@UI@6@@Z
    long UpdateBackButtonVisibility(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBounds@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBURect@Foundation@6@@Z
    long UpdateBounds(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCanHandleCloseRequest@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateCanHandleCloseRequest(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConsolidationStatus@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelConsolidationStatus@3456@@Z
    long UpdateConsolidationStatus(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContainerId@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBU_GUID@@@Z
    long UpdateContainerId(bool, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExperienceKind@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4ExperienceKind@3456@@Z
    long UpdateExperienceKind(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFrame@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateFrame(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFrameworkKind@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelFrameworkKind@3456@@Z
    long UpdateFrameworkKind(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullScreenMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateFullScreenMode(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHideInTaskSwitcher@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateHideInTaskSwitcher(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostAppView@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateHostAppView(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateId@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateId(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsCloaked@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsCloaked(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsComponent@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsComponent(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsDisabled@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsDisabled(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsHosted@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsHosted(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMain@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsMain(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMaximizable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsMaximizable(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMinimizable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsMinimizable(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMinimized@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsMinimized(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMovable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsMovable(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsPopup@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsPopup(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsProxied@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsProxied(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsResizable@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsResizable(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSystemViewActivationPolicyDisabled@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsSystemViewActivationPolicyDisabled(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTopLevel@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsTopLevel(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTopMost@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsTopMost(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32NoActivate@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsWin32NoActivate(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32ToolWindow@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsWin32ToolWindow(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32TopLevelAppWindow@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateIsWin32TopLevelAppWindow(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIslandTransformsMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4IslandTransformsMode@Core@5UI@6@@Z
    long UpdateIslandTransformsMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutState@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelLayoutState@3456@@Z
    long UpdateLayoutState(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrientation@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4DisplayOrientations@Display@Graphics@6@@Z
    long UpdateOrientation(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrientationPreference@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4DisplayOrientations@Display@Graphics@6@@Z
    long UpdateOrientationPreference(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePersistingStateName@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdatePersistingStateName(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlacement@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUAppModelPlacement@3456@@Z
    long UpdatePlacement(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferDisableSystemUXPolicy@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdatePreferDisableSystemUXPolicy(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredFullScreenMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelFullScreenMode@3456@@Z
    long UpdatePreferredFullScreenMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredLaunchViewSize@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUSize@Foundation@6@@Z
    long UpdatePreferredLaunchViewSize(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredLaunchWindowingMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4ApplicationViewWindowingMode@ViewManagement@UI@6@@Z
    long UpdatePreferredLaunchWindowingMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredMaxSize@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUSize@Foundation@6@@Z
    long UpdatePreferredMaxSize(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredMinSize@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUSize@Foundation@6@@Z
    long UpdatePreferredMinSize(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredScale@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdatePreferredScale(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresentationKind@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelPresentationKind@3456@@Z
    long UpdatePresentationKind(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresentationMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelHolographicPresentationMode@3456@@Z
    long UpdatePresentationMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryDisplayRegion@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUDisplayRegionId@WindowingEnvironment@456@@Z
    long UpdatePrimaryDisplayRegion(bool, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedAppId@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateProxiedAppId(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedHwnd@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateProxiedHwnd(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedProcessId@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateProxiedProcessId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteConfigurationDescription@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateRemoteConfigurationDescription(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteConfigurationName@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateRemoteConfigurationName(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShouldSuppressCaptionControls@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateShouldSuppressCaptionControls(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatusBar@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateStatusBar(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSupportedAppViewModes@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppViewModes@3456@@Z
    long UpdateSupportedAppViewModes(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitle@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateTitle(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitleBar@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateTitleBar(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUserContext@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateUserContext(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUserInteractionMode@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4UserInteractionMode@ViewManagement@UI@6@@Z
    long UpdateUserInteractionMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibility@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelVisibility@3456@@Z
    long UpdateVisibility(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibleBounds@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBURect@Foundation@6@@Z
    long UpdateVisibleBounds(bool, WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoUniversalAppModelProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLogicalBoundsRemoteCache@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateLogicalBoundsRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLogicalVisibleBoundsRemoteCache@BamoUniversalAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateLogicalVisibleBoundsRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
