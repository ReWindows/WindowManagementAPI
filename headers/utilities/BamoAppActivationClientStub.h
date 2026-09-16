#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 12 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppActivationClientStub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long Activate(uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageLocation@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetImageLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDismissed@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsDismissed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppActivationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
