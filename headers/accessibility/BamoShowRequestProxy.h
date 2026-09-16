#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoShowRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowShowOptions@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppWindowShowOptionsInternal@2345@XZ
    virtual int GetAppWindowShowOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomSize@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetCustomSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationKind@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelPresentationKind@2345@XZ
    virtual int GetPresentationKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingSizePreference@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ViewSizePreference@ViewManagement@UI@5@XZ
    virtual int GetRequestingSizePreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingWindow@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowProxy@2345@XZ
    virtual WindissectOpaque * GetRequestingWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizePreference@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ViewSizePreference@ViewManagement@UI@5@XZ
    virtual int GetSizePreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowProxy@2345@XZ
    virtual WindissectOpaque * GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppWindowShowOptionsChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppWindowShowOptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppWindowShowOptionsChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppWindowShowOptionsInternal@2345@@Z
    virtual long OnAppWindowShowOptionsChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCustomSizeChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnCustomSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCustomSizeChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUSize@Foundation@5@@Z
    virtual long OnCustomSizeChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationKindChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPresentationKindChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationKindChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelPresentationKind@2345@@Z
    virtual long OnPresentationKindChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingSizePreferenceChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestingSizePreferenceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingSizePreferenceChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long OnRequestingSizePreferenceChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingWindowChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestingWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestingWindowChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowProxy@2345@@Z
    virtual long OnRequestingWindowChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizePreferenceChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnSizePreferenceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizePreferenceChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long OnSizePreferenceChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanged@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanging@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowProxy@2345@@Z
    virtual long OnWindowChanging(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
