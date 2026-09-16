#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 15 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoAppViewActivationRequestProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NAEBUAppViewId@3456@PEBUDisplayRegionId@WindowingEnvironment@456@II0IPEBG@Z
    long InvokeComplete(bool, WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int, unsigned int, bool, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppView@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateAppView(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContext@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBEI@Z
    long UpdateContext(bool, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContractId@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBG@Z
    long UpdateContractId(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequestId@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateRequestId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequestingWindow@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateRequestingWindow(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAppViewActivationRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoAppViewActivationRequestProxyImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
