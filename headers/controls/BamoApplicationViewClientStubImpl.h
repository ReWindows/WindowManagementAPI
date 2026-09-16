#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 12 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoApplicationViewClientStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneView@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@1W4ViewSizePreference@ViewManagement@UI@6@2@Z
    long ShowAsStandaloneView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsViewMode@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@W4ApplicationViewMode@ViewManagement@UI@6@AEBUSize@Foundation@6@W4ViewSizePreference@9UI@6@@Z
    long ShowAsViewMode(uint64_t, WindissectOpaque const &, int, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchView@BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_KAEBUWindowId@3456@1I@Z
    long SwitchView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoApplicationViewClientStubImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoApplicationViewClientStubImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
