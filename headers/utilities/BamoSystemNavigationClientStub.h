#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 11 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoSystemNavigationClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemNavigationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackComplete@BamoSystemNavigationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K_N@Z
    virtual long BackComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseComplete@BamoSystemNavigationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K_N@Z
    virtual long CloseComplete(uint64_t, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemNavigationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemNavigationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemNavigationClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
