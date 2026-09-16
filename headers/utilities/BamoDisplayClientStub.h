#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 13 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoDisplayClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentOrientation@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4DisplayOrientations@Display@Graphics@5@XZ
    virtual int GetCurrentOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayScale@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAMXZ
    virtual float GetDisplayScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeOrientation@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4DisplayOrientations@Display@Graphics@5@XZ
    virtual int GetNativeOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScale@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAMXZ
    virtual float GetRasterizationScale();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDisplayClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
