#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoAppViewProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppModelKind@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppModelKind@3456@@Z
    long UpdateAppModelKind(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCoreAppModel@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateCoreAppModel(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExecutionState@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppViewExecutionState@3456@@Z
    long UpdateExecutionState(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExperienceId@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateExperienceId(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostId@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateHostId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateId@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUAppViewId@3456@@Z
    long UpdateId(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImmersiveAppModel@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateImmersiveAppModel(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSplashScreen@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateSplashScreen(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUniversalAppModel@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateUniversalAppModel(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibility@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4AppViewVisibility@3456@@Z
    long UpdateVisibility(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindow@BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateWindow(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAppViewProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoAppViewProxyImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
