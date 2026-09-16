#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 23 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoWindowProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppView@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateAppView(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayId@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateDisplayId(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayRegionIds@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUDisplayRegionId@WindowingEnvironment@456@I@Z
    long UpdateDisplayRegionIds(bool, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateId@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUWindowId@3456@@Z
    long UpdateId(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOcclusion@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4WindowOcclusion@3456@@Z
    long UpdateOcclusion(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrderRegion@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4WindowOrderRegion@3456@@Z
    long UpdateOrderRegion(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOwnerWindow@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateOwnerWindow(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProcessId@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateProcessId(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePropagatableProperties@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdatePropagatableProperties(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperties@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateProperties(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRootOwnerWindow@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateRootOwnerWindow(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThreadId@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateThreadId(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchInputRoutingInfo@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUMessageRoutingInfo@3456@@Z
    long UpdateTouchInputRoutingInfo(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibility@BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4WindowVisibility@3456@@Z
    long UpdateVisibility(bool, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoWindowProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoWindowProxyImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
