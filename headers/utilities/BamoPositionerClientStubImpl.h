#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 17 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoPositionerClientStubImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long ClearPersistedState(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveAdjacentToWindow@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@@Z
    long RequestMoveAdjacentToWindow(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToDisplayRegion@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@456@AEBUPoint@Foundation@6@@Z
    long RequestMoveRelativeToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToWindow@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@AEBUPoint@Foundation@6@@Z
    long RequestMoveRelativeToWindow(uint64_t, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveToDisplayRegion@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@456@@Z
    long RequestMoveToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetPreferredTopMost@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long RequestSetPreferredTopMost(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetRelativeZOrderBeneath@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@@Z
    long RequestSetRelativeZOrderBeneath(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetSize@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUSize@Foundation@6@@Z
    long RequestSetSize(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long TrySetTopMost(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoPositionerClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoPositionerClientStubImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
