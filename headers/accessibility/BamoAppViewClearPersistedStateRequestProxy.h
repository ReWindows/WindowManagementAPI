#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewClearPersistedStateRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedStateName@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetPersistedStateName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPersistedStateNameChanged@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPersistedStateNameChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPersistedStateNameChanging@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnPersistedStateNameChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewClearPersistedStateRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
