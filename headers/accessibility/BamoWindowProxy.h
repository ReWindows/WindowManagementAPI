#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 50 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoWindowProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetDisplayId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegionIds@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAPEBUDisplayRegionId@WindowingEnvironment@345@PEAI@Z
    virtual void GetDisplayRegionIds(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUWindowId@2345@XZ
    virtual WindissectOpaque const & GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusion@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4WindowOcclusion@2345@XZ
    virtual int GetOcclusion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrderRegion@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4WindowOrderRegion@2345@XZ
    virtual int GetOrderRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerWindow@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAV12345@XZ
    virtual WindissectOpaque * GetOwnerWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropagatableProperties@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoPropertyStoreReflectorProxy@2345@XZ
    virtual WindissectOpaque * GetPropagatableProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoPropertyStoreReflectorProxy@2345@XZ
    virtual WindissectOpaque * GetProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOwnerWindow@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAV12345@XZ
    virtual WindissectOpaque * GetRootOwnerWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadId@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchInputRoutingInfo@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUMessageRoutingInfo@2345@XZ
    virtual WindissectOpaque const & GetTouchInputRoutingInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4WindowVisibility@2345@XZ
    virtual int GetVisibility();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayIdChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnDisplayIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayIdChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJI@Z
    virtual long OnDisplayIdChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionIdsChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnDisplayRegionIdsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionIdsChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBUDisplayRegionId@WindowingEnvironment@345@I@Z
    virtual long OnDisplayRegionIdsChanging(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnIdChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4WindowOcclusion@2345@@Z
    virtual long OnOcclusionChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrderRegionChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnOrderRegionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrderRegionChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4WindowOrderRegion@2345@@Z
    virtual long OnOrderRegionChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerWindowChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnOwnerWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerWindowChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAV12345@@Z
    virtual long OnOwnerWindowChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessIdChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnProcessIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessIdChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJI@Z
    virtual long OnProcessIdChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropagatablePropertiesChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPropagatablePropertiesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropagatablePropertiesChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPropertyStoreReflectorProxy@2345@@Z
    virtual long OnPropagatablePropertiesChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPropertiesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPropertyStoreReflectorProxy@2345@@Z
    virtual long OnPropertiesChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootOwnerWindowChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRootOwnerWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootOwnerWindowChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAV12345@@Z
    virtual long OnRootOwnerWindowChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadIdChanged@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnThreadIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadIdChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJI@Z
    virtual long OnThreadIdChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchInputRoutingInfoChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUMessageRoutingInfo@2345@@Z
    virtual long OnTouchInputRoutingInfoChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanging@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4WindowVisibility@2345@@Z
    virtual long OnVisibilityChanging(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoWindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
