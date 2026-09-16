#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 68 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewStaticsProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@@Z
    virtual long CloseRequestedAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewList@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_Proxy * GetAppViewList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsActivationRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsActivationRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsActivationShowRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsActivationShowRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsApplySettingsRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsApplySettingsRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsBackRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsBackRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsClearPersistedStateRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsClearPersistedStateRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsConsolidateRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsConsolidateRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHideRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsHideRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHideStatusBarRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsHideStatusBarRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsRemediationRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsRemediationRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsShowRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsShowRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsShowStandardSystemOverlaysRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsShowStandardSystemOverlaysRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsShowStatusBarRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsShowStatusBarRequestedHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSwitchRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsSwitchRequestedHandled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivityImportance@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@I@Z
    virtual long SetActivityImportance(WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToLeftDisplayEdge@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@_N@Z
    virtual long SetAdjacentToLeftDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToRightDisplayEdge@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@_N@Z
    virtual long SetAdjacentToRightDisplayEdge(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowRunningConnectedStandBy@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@_N@Z
    virtual long SetAllowRunningConnectedStandBy(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewMode@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppViewModes@2345@@Z
    virtual long SetAppViewMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewVisibilityAsync@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppViewVisibility@2345@@Z
    virtual long SetAppViewVisibilityAsync(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppliedPresenterMode@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long SetAppliedPresenterMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@AEBURect@Foundation@5@@Z
    virtual long SetBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConsolidationStatus@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppModelConsolidationStatus@2345@@Z
    virtual long SetConsolidationStatus(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDehydrationEligibility@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppViewDehydrationEligibility@2345@@Z
    virtual long SetDehydrationEligibility(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenMode@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@_N@Z
    virtual long SetFullScreenMode(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsActivationRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsActivationRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsActivationShowRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsActivationShowRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsApplySettingsRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsApplySettingsRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsBackRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsBackRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsClearPersistedStateRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsClearPersistedStateRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConsolidateRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsConsolidateRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHideRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsHideRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHideStatusBarRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsHideStatusBarRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsRemediationRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsRemediationRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShowRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsShowRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShowStandardSystemOverlaysRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsShowStandardSystemOverlaysRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShowStatusBarRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsShowStatusBarRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSwitchRequestedHandled@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsSwitchRequestedHandled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppModelLayoutState@2345@@Z
    virtual long SetLayoutState(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4DisplayOrientations@Display@Graphics@5@@Z
    virtual long SetOrientation(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationMode@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppModelHolographicPresentationMode@2345@@Z
    virtual long SetPresentationMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizing@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@_N@Z
    virtual long SetResizing(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceSet@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@PEBGPEBEI@Z
    virtual long SetResourceSet(WindissectOpaque const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedAppViewModes@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4AppViewModes@2345@@Z
    virtual long SetSupportedAppViewModes(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserInteractionMode@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long SetUserInteractionMode(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenExecutionStateBehavior@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@AEBUNullableAppViewExecutionState@2345@@Z
    virtual long SetVisibilityHiddenExecutionStateBehavior(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenExecutionStateGlobalBehavior@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUNullableAppViewExecutionState@2345@@Z
    virtual long SetVisibilityHiddenExecutionStateGlobalBehavior(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@AEBURect@Foundation@5@@Z
    virtual long SetVisibleBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedAsync@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@W4SystemKey@2345@@Z
    virtual long SystemKeyPressedAsync(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllAsync@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long TerminateAllAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllWithUserContextAsync@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long TerminateAllWithUserContextAsync(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAppAsync@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@@Z
    virtual long TerminateAppAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementTelemetryFlags@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBUAppViewId@2345@_K1@Z
    virtual long UpdateEngagementTelemetryFlags(WindissectOpaque const &, uint64_t, uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewListChanged@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewListChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewListChanging@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnAppViewListChanging(::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_Proxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAA@XZ
    virtual ~BamoAppViewStaticsProxy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
