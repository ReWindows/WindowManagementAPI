#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 23 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewSwitchRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationViewSwitchingOptions@ViewManagement@UI@5@XZ
    virtual int GetOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingAppView@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetRequestingAppView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOptionsChanged@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnOptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOptionsChanging@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ApplicationViewSwitchingOptions@ViewManagement@UI@5@@Z
    virtual long OnOptionsChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingAppViewChanged@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestingAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingAppViewChanging@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnRequestingAppViewChanging(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewSwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
