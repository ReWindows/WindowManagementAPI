#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 14 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoTitleBarClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsVisible@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemOverlayLeftInset@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetSystemOverlayLeftInset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemOverlayRightInset@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetSystemOverlayRightInset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetWidth();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoTitleBarClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
