#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoHideRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideOptions@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4HideOptions@2345@XZ
    virtual int GetHideOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowProxy@2345@XZ
    virtual WindissectOpaque * GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideOptionsChanged@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnHideOptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideOptionsChanging@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4HideOptions@2345@@Z
    virtual long OnHideOptionsChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanged@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanging@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowProxy@2345@@Z
    virtual long OnWindowChanging(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoHideRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
