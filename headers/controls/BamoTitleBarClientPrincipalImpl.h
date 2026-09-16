#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 41 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoTitleBarClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@8@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeight@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJN@Z
    long UpdateHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsVisible@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long UpdateIsVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemOverlayLeftInset@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJN@Z
    long UpdateSystemOverlayLeftInset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemOverlayRightInset@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJN@Z
    long UpdateSystemOverlayRightInset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidth@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJN@Z
    long UpdateWidth(double);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateBackgroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateBackgroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonBackgroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonBackgroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonBackgroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonBackgroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonForegroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonForegroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonForegroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonForegroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonHoverBackgroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonHoverBackgroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonHoverBackgroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonHoverBackgroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonHoverForegroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonHoverForegroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonHoverForegroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonHoverForegroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonInactiveBackgroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonInactiveBackgroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonInactiveBackgroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonInactiveBackgroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonInactiveForegroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonInactiveForegroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonInactiveForegroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonInactiveForegroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPressedBackgroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonPressedBackgroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPressedBackgroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonPressedBackgroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPressedForegroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateButtonPressedForegroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPressedForegroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateButtonPressedForegroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtendsContentIntoTitleBarRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateExtendsContentIntoTitleBarRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtendsContentIntoTitleBarRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateExtendsContentIntoTitleBarRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateForegroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateForegroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInactiveBackgroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInactiveBackgroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInactiveBackgroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateInactiveBackgroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInactiveForegroundColorRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInactiveForegroundColorRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInactiveForegroundColorRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdateInactiveForegroundColorRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredVisibilityRemoteCache@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePreferredVisibilityRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredVisibilityRemoteCacheStatic@BamoTitleBarClientPrincipalImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123456@@Z
    static long UpdatePreferredVisibilityRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
