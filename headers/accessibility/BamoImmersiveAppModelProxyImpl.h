#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 10 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoImmersiveAppModelProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateId@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateId(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoImmersiveAppModelProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoImmersiveAppModelProxyImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
