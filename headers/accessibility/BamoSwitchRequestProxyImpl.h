#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 14 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoSwitchRequestProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long InvokeComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOptions@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@@Z
    long UpdateOptions(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequestId@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateRequestId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequestingWindow@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateRequestingWindow(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindow@BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateWindow(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoSwitchRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoSwitchRequestProxyImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
