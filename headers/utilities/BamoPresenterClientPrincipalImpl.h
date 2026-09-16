#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 12 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoPresenterClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@8@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestPresentation@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    long BroadcastRequestPresentation(uint64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentationComplete@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long PresentationComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateKind@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    long UpdateKind(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpanningRects@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJI@Z
    long UpdateSpanningRects(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestPresentationOnStub@BamoPresenterClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_KW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    static long CallRequestPresentationOnStub(::Microsoft::BamoImpl::BamoStubImpl *, uint64_t, int);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
