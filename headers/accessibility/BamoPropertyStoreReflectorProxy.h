#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoPropertyStoreReflectorProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBoolean@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG_N@Z
    virtual long InsertBoolean(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertGuid@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBGAEBU_GUID@@@Z
    virtual long InsertGuid(unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInt32@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBGH@Z
    virtual long InsertInt32(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInt64@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG_J@Z
    virtual long InsertInt64(unsigned short const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPropertyStore@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBGPEBEI@Z
    virtual long InsertPropertyStore(unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRect@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBGAEBURect@Foundation@5@@Z
    virtual long InsertRect(unsigned short const *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertString@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG0@Z
    virtual long InsertString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertUInt32@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBGI@Z
    virtual long InsertUInt32(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertUInt64@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG_K@Z
    virtual long InsertUInt64(unsigned short const *, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long Remove(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoPropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
