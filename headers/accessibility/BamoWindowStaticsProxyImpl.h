#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoWindowStaticsProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowAsync@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@@Z
    long DestroyWindowAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@I@Z
    long SetDisplayId(WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayRegionIds@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@PEBUDisplayRegionId@WindowingEnvironment@456@I@Z
    long SetDisplayRegionIds(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindowAsync@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@@Z
    long SetForegroundWindowAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOcclusion@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4WindowOcclusion@3456@@Z
    long SetOcclusion(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrderRegion@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@W4WindowOrderRegion@3456@@Z
    long SetOrderRegion(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerActivatedForegroundBehavior@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUWindowId@3456@AEBUNullableBoolean@3456@@Z
    long SetPointerActivatedForegroundBehavior(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerActivatedForegroundGlobalBehavior@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJAEBUNullableBoolean@3456@@Z
    long SetPointerActivatedForegroundGlobalBehavior(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundWindow@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateForegroundWindow(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowList@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateWindowList(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoWindowStaticsProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWindowOrderRegionChangedHandledRemoteCache@BamoWindowStaticsProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsWindowOrderRegionChangedHandledRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
