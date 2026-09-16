#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 27 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoAppActivationClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateComplete@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long ActivateComplete(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@8@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastActivate@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long BroadcastActivate(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExperienceId@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long SetExperienceId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImageLocation@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBURect@Foundation@6@@Z
    long UpdateImageLocation(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsDismissed@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long UpdateIsDismissed(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoAppActivationClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallActivateOnStub@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_K@Z
    static long CallActivateOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExperienceIdRemoteCache@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateExperienceIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExperienceIdRemoteCacheStatic@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateExperienceIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInitialBoundsRemoteCache@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInitialBoundsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInitialBoundsRemoteCacheStatic@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateInitialBoundsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsComponentRemoteCache@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsComponentRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsComponentRemoteCacheStatic@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsComponentRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsHostedRemoteCache@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsHostedRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsHostedRemoteCacheStatic@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsHostedRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMainRemoteCache@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsMainRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMainRemoteCacheStatic@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsMainRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTopLevelRemoteCache@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsTopLevelRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTopLevelRemoteCacheStatic@BamoAppActivationClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateIsTopLevelRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
