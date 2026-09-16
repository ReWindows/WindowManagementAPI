#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 17 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoShowStandardSystemOverlaysRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowProxy@2345@XZ
    virtual WindissectOpaque * GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanged@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanging@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowProxy@2345@@Z
    virtual long OnWindowChanging(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoShowStandardSystemOverlaysRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
