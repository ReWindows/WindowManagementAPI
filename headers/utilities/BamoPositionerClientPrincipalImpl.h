#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 71 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoPositionerClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@8@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastClearPersistedState@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long BroadcastClearPersistedState(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveAdjacentToWindow@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@@Z
    long BroadcastRequestMoveAdjacentToWindow(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveRelativeToDisplayRegion@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@456@AEBUPoint@Foundation@6@@Z
    long BroadcastRequestMoveRelativeToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveRelativeToWindow@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@AEBUPoint@Foundation@6@@Z
    long BroadcastRequestMoveRelativeToWindow(uint64_t, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveToDisplayRegion@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@456@@Z
    long BroadcastRequestMoveToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestSetPreferredTopMost@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long BroadcastRequestSetPreferredTopMost(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestSetRelativeZOrderBeneath@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@@Z
    long BroadcastRequestSetRelativeZOrderBeneath(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestSetSize@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUSize@Foundation@6@@Z
    long BroadcastRequestSetSize(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastTrySetTopMost@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long BroadcastTrySetTopMost(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveAdjacentToWindowComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long MoveAdjacentToWindowComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveRelativeToDisplayRegionComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long MoveRelativeToDisplayRegionComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveRelativeToWindowComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long MoveRelativeToWindowComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToDisplayRegionComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long MoveToDisplayRegionComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPersistedStateId@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long SetPersistedStateId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredTopMostComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long SetPreferredTopMostComplete(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeZOrderBeneathComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long SetRelativeZOrderBeneathComplete(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteConfigurationDescription@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long SetRemoteConfigurationDescription(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteConfigurationName@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long SetRemoteConfigurationName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeComplete@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long SetSizeComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayRegionIds@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long UpdateDisplayRegionIds(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowingEnvironmentId@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBUWindowingEnvironmentId@WindowingEnvironment@456@@Z
    long UpdateWindowingEnvironmentId(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoPositionerClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallClearPersistedStateOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEBG@Z
    static long CallClearPersistedStateOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestMoveAdjacentToWindowOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUWindowId@3456@@Z
    static long CallRequestMoveAdjacentToWindowOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestMoveRelativeToDisplayRegionOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUDisplayRegionId@WindowingEnvironment@456@AEBUPoint@Foundation@6@@Z
    static long CallRequestMoveRelativeToDisplayRegionOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestMoveRelativeToWindowOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUWindowId@3456@AEBUPoint@Foundation@6@@Z
    static long CallRequestMoveRelativeToWindowOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestMoveToDisplayRegionOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUDisplayRegionId@WindowingEnvironment@456@@Z
    static long CallRequestMoveToDisplayRegionOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestSetPreferredTopMostOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_K@Z
    static long CallRequestSetPreferredTopMostOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestSetRelativeZOrderBeneathOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUWindowId@3456@@Z
    static long CallRequestSetRelativeZOrderBeneathOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestSetSizeOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUSize@Foundation@6@@Z
    static long CallRequestSetSizeOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallTrySetTopMostOnStub@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_N@Z
    static long CallTrySetTopMostOnStub(::Microsoft::BamoImpl::BamoStubImpl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHideInTaskSwitcherRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateHideInTaskSwitcherRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHideInTaskSwitcherRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateHideInTaskSwitcherRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsDisabledRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsDisabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsDisabledRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsDisabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMaximizableRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsMaximizableRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMaximizableRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsMaximizableRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMinimizableRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsMinimizableRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMinimizableRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsMinimizableRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMovableRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsMovableRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMovableRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsMovableRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsPopupRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsPopupRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsPopupRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsPopupRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsProxiedRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsProxiedRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsProxiedRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsProxiedRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsResizableRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsResizableRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsResizableRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsResizableRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32NoActivateRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsWin32NoActivateRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32NoActivateRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsWin32NoActivateRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32ToolWindowRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsWin32ToolWindowRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32ToolWindowRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsWin32ToolWindowRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32TopLevelAppWindowRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsWin32TopLevelAppWindowRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWin32TopLevelAppWindowRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsWin32TopLevelAppWindowRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePersistedStateIdRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePersistedStateIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePersistedStateIdRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdatePersistedStateIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferDisableSystemUXPolicyRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePreferDisableSystemUXPolicyRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferDisableSystemUXPolicyRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdatePreferDisableSystemUXPolicyRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteConfigurationDescriptionRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRemoteConfigurationDescriptionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteConfigurationDescriptionRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateRemoteConfigurationDescriptionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteConfigurationNameRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRemoteConfigurationNameRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteConfigurationNameRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateRemoteConfigurationNameRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShouldSuppressCaptionControlsRemoteCache@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateShouldSuppressCaptionControlsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShouldSuppressCaptionControlsRemoteCacheStatic@BamoPositionerClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateShouldSuppressCaptionControlsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
