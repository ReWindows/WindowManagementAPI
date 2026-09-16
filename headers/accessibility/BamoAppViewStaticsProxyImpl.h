#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 63 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoAppViewStaticsProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@@Z
    long CloseRequestedAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeActivationRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeActivationRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeActivationShowRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeActivationShowRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeApplySettingsRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeApplySettingsRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeBackRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeBackRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeClearPersistedStateRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeClearPersistedStateRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeConsolidateRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeConsolidateRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeHideRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeHideRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeHideStatusBarRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeHideStatusBarRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeRemediationRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeRemediationRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeShowRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowStandardSystemOverlaysRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeShowStandardSystemOverlaysRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowStatusBarRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeShowStatusBarRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeSwitchRequested@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeSwitchRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivityImportance@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@I@Z
    long SetActivityImportance(WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToLeftDisplayEdge@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@_N@Z
    long SetAdjacentToLeftDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToRightDisplayEdge@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@_N@Z
    long SetAdjacentToRightDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowRunningConnectedStandBy@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@_N@Z
    long SetAllowRunningConnectedStandBy(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewMode@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppViewModes@3456@@Z
    long SetAppViewMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewVisibilityAsync@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppViewVisibility@3456@@Z
    long SetAppViewVisibilityAsync(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppliedPresenterMode@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    long SetAppliedPresenterMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@AEBURect@Foundation@6@@Z
    long SetBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConsolidationStatus@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppModelConsolidationStatus@3456@@Z
    long SetConsolidationStatus(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDehydrationEligibility@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppViewDehydrationEligibility@3456@@Z
    long SetDehydrationEligibility(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenMode@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@_N@Z
    long SetFullScreenMode(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppModelLayoutState@3456@@Z
    long SetLayoutState(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4DisplayOrientations@Display@Graphics@6@@Z
    long SetOrientation(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationMode@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppModelHolographicPresentationMode@3456@@Z
    long SetPresentationMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizing@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@_N@Z
    long SetResizing(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceSet@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@PEBGPEBEI@Z
    long SetResourceSet(WindissectOpaque const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedAppViewModes@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4AppViewModes@3456@@Z
    long SetSupportedAppViewModes(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserInteractionMode@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4UserInteractionMode@ViewManagement@UI@6@@Z
    long SetUserInteractionMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenExecutionStateBehavior@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@AEBUNullableAppViewExecutionState@3456@@Z
    long SetVisibilityHiddenExecutionStateBehavior(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenExecutionStateGlobalBehavior@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUNullableAppViewExecutionState@3456@@Z
    long SetVisibilityHiddenExecutionStateGlobalBehavior(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@AEBURect@Foundation@6@@Z
    long SetVisibleBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedAsync@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@W4SystemKey@3456@@Z
    long SystemKeyPressedAsync(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllAsync@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long TerminateAllAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllWithUserContextAsync@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long TerminateAllWithUserContextAsync(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAppAsync@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@@Z
    long TerminateAppAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppViewList@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateAppViewList(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementTelemetryFlags@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUAppViewId@3456@_K1@Z
    long UpdateEngagementTelemetryFlags(WindissectOpaque const &, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoAppViewStaticsProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsActivationRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsActivationRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsActivationShowRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsActivationShowRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsApplySettingsRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsApplySettingsRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsBackRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsBackRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClearPersistedStateRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsClearPersistedStateRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsConsolidateRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsConsolidateRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsHideRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsHideRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsHideStatusBarRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsHideStatusBarRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsRemediationRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsRemediationRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShowRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsShowRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShowStandardSystemOverlaysRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsShowStandardSystemOverlaysRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShowStatusBarRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsShowStatusBarRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSwitchRequestedHandledRemoteCache@BamoAppViewStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsSwitchRequestedHandledRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
