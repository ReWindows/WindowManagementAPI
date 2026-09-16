#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoSystemNavigationClientStubImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackComplete@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long BackComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseComplete@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long CloseComplete(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoSystemNavigationClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
