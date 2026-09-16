#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 19 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoUniversalStatusBarProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundOpacity@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetBackgroundOpacity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColor@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOccludedRect@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetOccludedRect();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOccludedRect@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBURect@Foundation@5@@Z
    virtual void SetOccludedRect(WindissectOpaque const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundColorChanging@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundOpacityChanging@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJN@Z
    virtual long OnBackgroundOpacityChanging(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundColorChanging@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnForegroundColorChanging(WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoUniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
