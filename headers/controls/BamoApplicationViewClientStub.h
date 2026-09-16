#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoApplicationViewClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentToLeftDisplayEdge@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetAdjacentToLeftDisplayEdge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentToRightDisplayEdge@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetAdjacentToRightDisplayEdge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewMode@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationViewMode@ViewManagement@UI@5@XZ
    virtual int GetAppViewMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewState@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationViewState@ViewManagement@UI@5@XZ
    virtual int GetApplicationViewState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsFullScreen@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsFullScreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpanningRects@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy * GetSpanningRects();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserInteractionMode@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4UserInteractionMode@ViewManagement@UI@5@XZ
    virtual int GetUserInteractionMode();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneView@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@1W4ViewSizePreference@ViewManagement@UI@5@2@Z
    virtual long ShowAsStandaloneView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsViewMode@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@W4ApplicationViewMode@ViewManagement@UI@5@AEBUSize@Foundation@5@W4ViewSizePreference@895@@Z
    virtual long ShowAsViewMode(uint64_t, WindissectOpaque const &, int, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchView@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@1I@Z
    virtual long SwitchView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoApplicationViewClientStub@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
