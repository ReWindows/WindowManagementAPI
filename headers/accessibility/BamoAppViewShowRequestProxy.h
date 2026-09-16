#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewShowRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewMode@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewModes@2345@XZ
    virtual int GetAppViewMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowShowOptions@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppWindowShowOptionsInternal@2345@XZ
    virtual int GetAppWindowShowOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomSize@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetCustomSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingAppView@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetRequestingAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingSizePreference@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ViewSizePreference@ViewManagement@UI@5@XZ
    virtual int GetRequestingSizePreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizePreference@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ViewSizePreference@ViewManagement@UI@5@XZ
    virtual int GetSizePreference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewModeChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewModeChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppViewModes@2345@@Z
    virtual long OnAppViewModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppWindowShowOptionsChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppWindowShowOptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppWindowShowOptionsChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppWindowShowOptionsInternal@2345@@Z
    virtual long OnAppWindowShowOptionsChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCustomSizeChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnCustomSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCustomSizeChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUSize@Foundation@5@@Z
    virtual long OnCustomSizeChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingAppViewChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestingAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingAppViewChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnRequestingAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingSizePreferenceChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestingSizePreferenceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingSizePreferenceChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long OnRequestingSizePreferenceChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizePreferenceChanged@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnSizePreferenceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizePreferenceChanging@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long OnSizePreferenceChanging(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
