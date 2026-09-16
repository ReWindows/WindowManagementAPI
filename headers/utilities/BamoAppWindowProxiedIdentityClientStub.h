#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppWindowProxiedIdentityClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppWindowProxiedIdentityClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppWindowProxiedIdentityClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppWindowProxiedIdentityClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppWindowProxiedIdentityClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
