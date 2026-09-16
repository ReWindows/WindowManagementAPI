#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 12 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoPresenterClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKind@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@XZ
    virtual int GetKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpanningRects@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy * GetSpanningRects();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPresentation@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long RequestPresentation(uint64_t, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPresenterClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
