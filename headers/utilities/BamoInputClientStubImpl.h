#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoInputClientStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoInputClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoInputClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoInputClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoInputClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
