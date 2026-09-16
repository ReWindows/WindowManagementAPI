#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 10 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoWindowClientStubImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long Consolidate(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KW4HideOptions@3456@@Z
    long Hide(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@BamoWindowClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@W4AppWindowShowOptionsInternal@3456@@Z
    long Show(uint64_t, WindissectOpaque const &, int);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
