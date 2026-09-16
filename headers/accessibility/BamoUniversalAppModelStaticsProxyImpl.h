#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 47 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoUniversalAppModelStaticsProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@@Z
    long CloseRequestedAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedComplete@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBUWindowId@3456@I_N@Z
    long CloseRequestedComplete(WindissectOpaque const *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeApplySettingsRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeApplySettingsRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeBackRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeBackRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeClearPersistedStateRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeClearPersistedStateRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeHideRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeHideRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeShowRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowStandardSystemOverlaysRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeShowStandardSystemOverlaysRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeSwitchRequested@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long OnInvokeSwitchRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToLeftDisplayEdge@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@_N@Z
    long SetAdjacentToLeftDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToRightDisplayEdge@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@_N@Z
    long SetAdjacentToRightDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewMode@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4AppViewModes@3456@@Z
    long SetAppViewMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppliedPresenterMode@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    long SetAppliedPresenterMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConsolidationStatus@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4AppModelConsolidationStatus@3456@@Z
    long SetConsolidationStatus(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenMode@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@_N@Z
    long SetFullScreenMode(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenPresentationOptions@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@_N@Z
    long SetFullScreenPresentationOptions(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCloaked@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@_N@Z
    long SetIsCloaked(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMinimized@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@_N@Z
    long SetIsMinimized(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4AppModelLayoutState@3456@@Z
    long SetLayoutState(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4DisplayOrientations@Display@Graphics@6@@Z
    long SetOrientation(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacement@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@AEBUAppModelPlacement@3456@@Z
    long SetPlacement(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationKind@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4AppModelPresentationKind@3456@@Z
    long SetPresentationKind(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationMode@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4AppModelHolographicPresentationMode@3456@@Z
    long SetPresentationMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryDisplayRegion@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@AEBUDisplayRegionId@WindowingEnvironment@456@@Z
    long SetPrimaryDisplayRegion(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjectionPresentationOptions@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@@Z
    long SetProjectionPresentationOptions(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpanningPresentationOptions@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@PEBURect@Foundation@6@I@Z
    long SetSpanningPresentationOptions(WindissectOpaque const &, WindissectOpaque const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedAppViewModes@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4AppViewModes@3456@@Z
    long SetSupportedAppViewModes(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserInteractionMode@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4UserInteractionMode@ViewManagement@UI@6@@Z
    long SetUserInteractionMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@AEBURect@Foundation@6@@Z
    long SetVisibleBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedAsync@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4SystemKey@3456@@Z
    long SystemKeyPressedAsync(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsActivationRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsActivationRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsApplySettingsRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsApplySettingsRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsBackRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsBackRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClearPersistedStateRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsClearPersistedStateRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsConsolidateRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsConsolidateRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsHideRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsHideRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShowRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsShowRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShowStandardSystemOverlaysRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsShowStandardSystemOverlaysRequestedHandledRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSwitchRequestedHandledRemoteCache@BamoUniversalAppModelStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsSwitchRequestedHandledRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
