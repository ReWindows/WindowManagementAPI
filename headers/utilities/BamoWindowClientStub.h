#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 21 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoWindowClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long Consolidate(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewId@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUAppViewId@2345@XZ
    virtual WindissectOpaque const & GetAppViewId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCloaked@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsCloaked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMinimized@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMinimized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTopMost@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsTopMost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusion@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4WindowOcclusion@2345@XZ
    virtual int GetOcclusion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacement@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUAppModelPlacement@2345@XZ
    virtual WindissectOpaque const & GetPlacement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDisplayRegion@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUDisplayRegionId@WindowingEnvironment@345@XZ
    virtual ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const & GetPrimaryDisplayRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBounds@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetVisibleBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KW4HideOptions@2345@@Z
    virtual long Hide(uint64_t, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@W4AppWindowShowOptionsInternal@2345@@Z
    virtual long Show(uint64_t, WindissectOpaque const &, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoWindowClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
