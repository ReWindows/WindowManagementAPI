#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 56 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoUniversalAppModelStaticsProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchBegin@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4UniversalBatchKind@2345@@Z
    virtual long BatchBegin(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchEnd@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4UniversalBatchKind@2345@@Z
    virtual long BatchEnd(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@@Z
    virtual long CloseRequestedAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsActivationRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsActivationRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsApplySettingsRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsApplySettingsRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsBackRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsBackRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsClearPersistedStateRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsClearPersistedStateRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsConsolidateRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsConsolidateRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHideRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsHideRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsShowRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsShowRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsShowStandardSystemOverlaysRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsShowStandardSystemOverlaysRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSwitchRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsSwitchRequestedHandled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToLeftDisplayEdge@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetAdjacentToLeftDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToRightDisplayEdge@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetAdjacentToRightDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewMode@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppViewModes@2345@@Z
    virtual long SetAppViewMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppliedPresenterMode@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long SetAppliedPresenterMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@AEBURect@Foundation@5@@Z
    virtual long SetBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConsolidationStatus@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppModelConsolidationStatus@2345@@Z
    virtual long SetConsolidationStatus(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenMode@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetFullScreenMode(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenPresentationOptions@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetFullScreenPresentationOptions(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsActivationRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsActivationRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsApplySettingsRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsApplySettingsRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsBackRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsBackRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsClearPersistedStateRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsClearPersistedStateRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCloaked@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetIsCloaked(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConsolidateRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsConsolidateRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHideRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsHideRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMinimized@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetIsMinimized(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShowRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsShowRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShowStandardSystemOverlaysRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsShowStandardSystemOverlaysRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSwitchRequestedHandled@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsSwitchRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppModelLayoutState@2345@@Z
    virtual long SetLayoutState(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4DisplayOrientations@Display@Graphics@5@@Z
    virtual long SetOrientation(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacement@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@AEBUAppModelPlacement@2345@@Z
    virtual long SetPlacement(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationKind@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppModelPresentationKind@2345@@Z
    virtual long SetPresentationKind(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationMode@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppModelHolographicPresentationMode@2345@@Z
    virtual long SetPresentationMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryDisplayRegion@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@AEBUDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long SetPrimaryDisplayRegion(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjectionPresentationOptions@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@@Z
    virtual long SetProjectionPresentationOptions(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizing@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@_N@Z
    virtual long SetResizing(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpanningPresentationOptions@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@PEBURect@Foundation@5@I@Z
    virtual long SetSpanningPresentationOptions(WindissectOpaque const &, WindissectOpaque const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedAppViewModes@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppViewModes@2345@@Z
    virtual long SetSupportedAppViewModes(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserInteractionMode@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long SetUserInteractionMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityAsync@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4AppModelVisibility@2345@@Z
    virtual long SetVisibilityAsync(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@AEBURect@Foundation@5@@Z
    virtual long SetVisibleBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedAsync@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUWindowId@2345@W4SystemKey@2345@@Z
    virtual long SystemKeyPressedAsync(WindissectOpaque const &, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
