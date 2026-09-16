#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 32 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoApplicationViewClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@8@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastShowStandardSystemOverlays@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long BroadcastShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSwitchView@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@1I@Z
    long BroadcastSwitchView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchViewComplete@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long SwitchViewComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAdjacentToLeftDisplayEdge@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long UpdateAdjacentToLeftDisplayEdge(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAdjacentToRightDisplayEdge@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long UpdateAdjacentToRightDisplayEdge(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppViewMode@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4ApplicationViewMode@ViewManagement@UI@6@@Z
    long UpdateAppViewMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateApplicationViewState@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4ApplicationViewState@ViewManagement@UI@6@@Z
    long UpdateApplicationViewState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsFullScreen@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long UpdateIsFullScreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpanningRects@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long UpdateSpanningRects(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUserInteractionMode@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4UserInteractionMode@ViewManagement@UI@6@@Z
    long UpdateUserInteractionMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallShowAsStandaloneViewOnStub@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUWindowId@3456@2W4ViewSizePreference@ViewManagement@UI@6@3@Z
    static long CallShowAsStandaloneViewOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &, WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallShowAsViewModeOnStub@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUWindowId@3456@W4ApplicationViewMode@ViewManagement@UI@6@AEBUSize@Foundation@6@W4ViewSizePreference@ViewManagement@UI@6@@Z
    static long CallShowAsViewModeOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &, int, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallShowStandardSystemOverlaysOnStub@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@@Z
    static long CallShowStandardSystemOverlaysOnStub(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallSwitchViewOnStub@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KAEBUWindowId@3456@2I@Z
    static long CallSwitchViewOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, WindissectOpaque const &, WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsApplicationMultiviewActivationPolicyEnabledRemoteCache@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsApplicationMultiviewActivationPolicyEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsApplicationMultiviewActivationPolicyEnabledRemoteCacheStatic@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsApplicationMultiviewActivationPolicyEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsOnLockScreenRemoteCache@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsOnLockScreenRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsOnLockScreenRemoteCacheStatic@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsOnLockScreenRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredLaunchViewSizeRemoteCache@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePreferredLaunchViewSizeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredLaunchViewSizeRemoteCacheStatic@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdatePreferredLaunchViewSizeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredLaunchWindowingModeRemoteCache@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePreferredLaunchWindowingModeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredLaunchWindowingModeRemoteCacheStatic@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdatePreferredLaunchWindowingModeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuppressSystemOverlaysRemoteCache@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSuppressSystemOverlaysRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuppressSystemOverlaysRemoteCacheStatic@BamoApplicationViewClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateSuppressSystemOverlaysRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
