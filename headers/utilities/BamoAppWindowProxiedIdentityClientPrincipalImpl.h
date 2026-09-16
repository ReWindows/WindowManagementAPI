#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 18 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoAppWindowProxiedIdentityClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@8@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxiedAppId@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long SetProxiedAppId(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoAppWindowProxiedIdentityClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContainerIdRemoteCache@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateContainerIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContainerIdRemoteCacheStatic@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateContainerIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedAppIdRemoteCache@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateProxiedAppIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedAppIdRemoteCacheStatic@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateProxiedAppIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedHwndRemoteCache@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateProxiedHwndRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedHwndRemoteCacheStatic@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateProxiedHwndRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedProcessIdRemoteCache@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateProxiedProcessIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxiedProcessIdRemoteCacheStatic@BamoAppWindowProxiedIdentityClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateProxiedProcessIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
