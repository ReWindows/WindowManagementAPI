#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoPresenterClientStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPresentation@BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@456@@Z
    long RequestPresentation(uint64_t, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoPresenterClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoPresenterClientStubImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
