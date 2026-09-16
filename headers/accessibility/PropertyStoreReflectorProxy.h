#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 18 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class PropertyStoreReflectorProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z
    long GetOwner(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBGPEAUIInspectable@@@Z
    long Insert(unsigned short const *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIPropertySet@Collections@Foundation@5@@Z
    long SetOwner(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertBoolean@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG_N@Z
    virtual long OnInsertBoolean(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertGuid@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBGAEBU_GUID@@@Z
    virtual long OnInsertGuid(unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertInt32@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBGH@Z
    virtual long OnInsertInt32(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertInt64@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG_J@Z
    virtual long OnInsertInt64(unsigned short const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertPropertyStore@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBGPEBEI@Z
    virtual long OnInsertPropertyStore(unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertRect@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBGAEBURect@Foundation@5@@Z
    virtual long OnInsertRect(unsigned short const *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertString@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG0@Z
    virtual long OnInsertString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertUInt32@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBGI@Z
    virtual long OnInsertUInt32(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertUInt64@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG_K@Z
    virtual long OnInsertUInt64(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemove@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnRemove(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueStatics@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@CA?AV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetPropertyValueStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsert@PropertyStoreReflectorProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJPEBGPEAUIInspectable@@@Z
    long OnInsert(unsigned short const *, IInspectable *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
