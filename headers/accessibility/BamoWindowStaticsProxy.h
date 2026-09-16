#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 28 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoWindowStaticsProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowAsync@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@@Z
    virtual long DestroyWindowAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundWindow@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowProxy@2345@XZ
    virtual WindissectOpaque * GetForegroundWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWindowOrderRegionChangedHandled@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWindowOrderRegionChangedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowList@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy * GetWindowList();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@I@Z
    virtual long SetDisplayId(WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayRegionIds@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@PEBUDisplayRegionId@WindowingEnvironment@345@I@Z
    virtual long SetDisplayRegionIds(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindowAsync@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@@Z
    virtual long SetForegroundWindowAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWindowOrderRegionChangedHandled@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsWindowOrderRegionChangedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOcclusion@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4WindowOcclusion@2345@@Z
    virtual long SetOcclusion(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrderRegion@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4WindowOrderRegion@2345@@Z
    virtual long SetOrderRegion(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerActivatedForegroundBehavior@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@AEBUNullableBoolean@2345@@Z
    virtual long SetPointerActivatedForegroundBehavior(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerActivatedForegroundGlobalBehavior@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUNullableBoolean@2345@@Z
    virtual long SetPointerActivatedForegroundGlobalBehavior(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowVisibilityAsync@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4WindowVisibility@2345@@Z
    virtual long SetWindowVisibilityAsync(WindissectOpaque const &, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundWindowChanging@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowProxy@2345@@Z
    virtual long OnForegroundWindowChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowListChanged@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowListChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowListChanging@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnWindowListChanging(::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAA@XZ
    virtual ~BamoWindowStaticsProxy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
