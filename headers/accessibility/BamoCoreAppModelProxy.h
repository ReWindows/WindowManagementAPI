#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 19 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoCoreAppModelProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalBounds@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetLogicalBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelVisibility@2345@XZ
    virtual int GetVisibility();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanged@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanging@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnIdChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLogicalBoundsChanged@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnLogicalBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLogicalBoundsChanging@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBURect@Foundation@5@@Z
    virtual long OnLogicalBoundsChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanging@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelVisibility@2345@@Z
    virtual long OnVisibilityChanging(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoCoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
