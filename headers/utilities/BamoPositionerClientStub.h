#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoPositionerClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long ClearPersistedState(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegionIds@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_DisplayRegionId_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_DisplayRegionId_Proxy * GetDisplayRegionIds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironmentId@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUWindowingEnvironmentId@WindowingEnvironment@345@XZ
    virtual ::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId const & GetWindowingEnvironmentId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveAdjacentToWindow@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@@Z
    virtual long RequestMoveAdjacentToWindow(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToDisplayRegion@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@345@AEBUPoint@Foundation@5@@Z
    virtual long RequestMoveRelativeToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToWindow@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@AEBUPoint@Foundation@5@@Z
    virtual long RequestMoveRelativeToWindow(uint64_t, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveToDisplayRegion@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long RequestMoveToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetPreferredTopMost@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long RequestSetPreferredTopMost(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetRelativeZOrderBeneath@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@@Z
    virtual long RequestSetRelativeZOrderBeneath(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetSize@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUSize@Foundation@5@@Z
    virtual long RequestSetSize(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long TrySetTopMost(bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPositionerClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
