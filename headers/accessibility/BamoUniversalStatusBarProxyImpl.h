#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 12 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoUniversalStatusBarProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColor@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundOpacity@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NN@Z
    long UpdateBackgroundOpacity(bool, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundColor@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOccludedRectRemoteCache@BamoUniversalStatusBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateOccludedRectRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
