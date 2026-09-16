#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 17 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewShowStatusBarRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewShowStatusBarRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
