#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 10 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoUniversalSplashScreenProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long Dismiss();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImageLocationRemoteCache@BamoUniversalSplashScreenProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateImageLocationRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
