#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 183 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoUniversalAppModelProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeHideInTaskSwitcher@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeHideInTaskSwitcher(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsDisabled@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeIsDisabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMaximizable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeIsMaximizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMinimizable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeIsMinimizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMovable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeIsMovable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsProxied@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeIsProxied(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsResizable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long ChangeIsResizable(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentToLeftDisplayEdge@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetAdjacentToLeftDisplayEdge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentToRightDisplayEdge@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetAdjacentToRightDisplayEdge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewModes@2345@XZ
    virtual int GetAppViewMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppliedPresenterMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@XZ
    virtual int GetAppliedPresenterMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackButtonVisibility@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewBackButtonVisibility@Core@UI@5@XZ
    virtual int GetBackButtonVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanHandleCloseRequest@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetCanHandleCloseRequest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConsolidationStatus@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelConsolidationStatus@2345@XZ
    virtual int GetConsolidationStatus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerId@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetContainerId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceKind@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ExperienceKind@2345@XZ
    virtual int GetExperienceKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrame@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoUniversalFrameProxy@2345@XZ
    virtual WindissectOpaque * GetFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkKind@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelFrameworkKind@2345@XZ
    virtual int GetFrameworkKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullScreenMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetFullScreenMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideInTaskSwitcher@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetHideInTaskSwitcher();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostAppView@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetHostAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCloaked@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsCloaked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsComponent@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsComponent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDisabled@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHosted@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsHosted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMain@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMaximizable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMaximizable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMinimizable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMinimizable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMinimized@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMinimized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMovable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMovable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPopup@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsProxied@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsProxied();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsResizable@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsResizable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSystemViewActivationPolicyDisabled@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsSystemViewActivationPolicyDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTopLevel@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsTopLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTopMost@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsTopMost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32NoActivate@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWin32NoActivate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32ToolWindow@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWin32ToolWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32TopLevelAppWindow@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWin32TopLevelAppWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandTransformsMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4IslandTransformsMode@Core@4UI@5@XZ
    virtual int GetIslandTransformsMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutState@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelLayoutState@2345@XZ
    virtual int GetLayoutState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalBounds@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetLogicalBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalVisibleBounds@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetLogicalVisibleBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientation@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4DisplayOrientations@Display@Graphics@5@XZ
    virtual int GetOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationPreference@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4DisplayOrientations@Display@Graphics@5@XZ
    virtual int GetOrientationPreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistingStateName@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetPersistingStateName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacement@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUAppModelPlacement@2345@XZ
    virtual WindissectOpaque const & GetPlacement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferDisableSystemUXPolicy@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetPreferDisableSystemUXPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredFullScreenMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelFullScreenMode@2345@XZ
    virtual int GetPreferredFullScreenMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchViewSize@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetPreferredLaunchViewSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchWindowingMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationViewWindowingMode@ViewManagement@UI@5@XZ
    virtual int GetPreferredLaunchWindowingMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredMaxSize@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetPreferredMaxSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredMinSize@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetPreferredMinSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredScale@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetPreferredScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationKind@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelPresentationKind@2345@XZ
    virtual int GetPresentationKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelHolographicPresentationMode@2345@XZ
    virtual int GetPresentationMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDisplayRegion@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUDisplayRegionId@WindowingEnvironment@345@XZ
    virtual ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const & GetPrimaryDisplayRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxiedAppId@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetProxiedAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxiedHwnd@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetProxiedHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxiedProcessId@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetProxiedProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteConfigurationDescription@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetRemoteConfigurationDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteConfigurationName@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetRemoteConfigurationName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldSuppressCaptionControls@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetShouldSuppressCaptionControls();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatusBar@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoUniversalStatusBarProxy@2345@XZ
    virtual WindissectOpaque * GetStatusBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedAppViewModes@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewModes@2345@XZ
    virtual int GetSupportedAppViewModes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetTitle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBar@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoUniversalTitleBarProxy@2345@XZ
    virtual WindissectOpaque * GetTitleBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserContext@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetUserContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserInteractionMode@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4UserInteractionMode@ViewManagement@UI@5@XZ
    virtual int GetUserInteractionMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelVisibility@2345@XZ
    virtual int GetVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBounds@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetVisibleBounds();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLogicalBounds@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBURect@Foundation@5@@Z
    virtual void SetLogicalBounds(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLogicalVisibleBounds@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBURect@Foundation@5@@Z
    virtual void SetLogicalVisibleBounds(WindissectOpaque const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToLeftDisplayEdgeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAdjacentToLeftDisplayEdgeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToLeftDisplayEdgeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnAdjacentToLeftDisplayEdgeChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToRightDisplayEdgeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAdjacentToRightDisplayEdgeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToRightDisplayEdgeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnAdjacentToRightDisplayEdgeChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewModeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppViewModes@2345@@Z
    virtual long OnAppViewModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppliedPresenterModeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppliedPresenterModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppliedPresenterModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long OnAppliedPresenterModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonVisibilityChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppViewBackButtonVisibility@Core@UI@5@@Z
    virtual long OnBackButtonVisibilityChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBURect@Foundation@5@@Z
    virtual long OnBoundsChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanHandleCloseRequestChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnCanHandleCloseRequestChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConsolidationStatusChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnConsolidationStatusChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConsolidationStatusChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelConsolidationStatus@2345@@Z
    virtual long OnConsolidationStatusChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerIdChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnContainerIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerIdChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBU_GUID@@@Z
    virtual long OnContainerIdChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExperienceKindChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnExperienceKindChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExperienceKindChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ExperienceKind@2345@@Z
    virtual long OnExperienceKindChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnFrameChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoUniversalFrameProxy@2345@@Z
    virtual long OnFrameChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameworkKindChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelFrameworkKind@2345@@Z
    virtual long OnFrameworkKindChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFullScreenModeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnFullScreenModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFullScreenModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnFullScreenModeChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideInTaskSwitcherChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnHideInTaskSwitcherChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostAppViewChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnHostAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnIdChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCloakedChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsCloakedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCloakedChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsCloakedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsComponentChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsComponentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsComponentChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsComponentChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDisabledChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsDisabledChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsHostedChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsHostedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsHostedChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsHostedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMainChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsMainChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMainChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsMainChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMaximizableChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsMaximizableChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMinimizableChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsMinimizableChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMinimizedChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsMinimizedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMinimizedChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsMinimizedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMovableChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsMovableChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsPopupChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsPopupChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsProxiedChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsProxiedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsResizableChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsResizableChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSystemViewActivationPolicyDisabledChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsSystemViewActivationPolicyDisabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSystemViewActivationPolicyDisabledChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsSystemViewActivationPolicyDisabledChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTopLevelChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIsTopLevelChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTopLevelChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsTopLevelChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTopMostChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsTopMostChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsWin32NoActivateChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsWin32NoActivateChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsWin32ToolWindowChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsWin32ToolWindowChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsWin32TopLevelAppWindowChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnIsWin32TopLevelAppWindowChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandTransformsModeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIslandTransformsModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandTransformsModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4IslandTransformsMode@Core@4UI@5@@Z
    virtual long OnIslandTransformsModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutStateChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnLayoutStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutStateChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelLayoutState@2345@@Z
    virtual long OnLayoutStateChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long OnOrientationChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationPreferenceChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long OnOrientationPreferenceChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPersistingStateNameChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnPersistingStateNameChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlacementChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPlacementChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlacementChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppModelPlacement@2345@@Z
    virtual long OnPlacementChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferDisableSystemUXPolicyChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnPreferDisableSystemUXPolicyChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredFullScreenModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelFullScreenMode@2345@@Z
    virtual long OnPreferredFullScreenModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredLaunchViewSizeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUSize@Foundation@5@@Z
    virtual long OnPreferredLaunchViewSizeChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredLaunchWindowingModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ApplicationViewWindowingMode@ViewManagement@UI@5@@Z
    virtual long OnPreferredLaunchWindowingModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredMaxSizeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUSize@Foundation@5@@Z
    virtual long OnPreferredMaxSizeChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredMinSizeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUSize@Foundation@5@@Z
    virtual long OnPreferredMinSizeChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredScaleChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJI@Z
    virtual long OnPreferredScaleChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationKindChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPresentationKindChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationKindChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelPresentationKind@2345@@Z
    virtual long OnPresentationKindChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelHolographicPresentationMode@2345@@Z
    virtual long OnPresentationModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryDisplayRegionChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPrimaryDisplayRegionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryDisplayRegionChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long OnPrimaryDisplayRegionChanging(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxiedAppIdChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnProxiedAppIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxiedAppIdChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnProxiedAppIdChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxiedHwndChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnProxiedHwndChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxiedHwndChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnProxiedHwndChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxiedProcessIdChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnProxiedProcessIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxiedProcessIdChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnProxiedProcessIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoteConfigurationDescriptionChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnRemoteConfigurationDescriptionChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoteConfigurationNameChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnRemoteConfigurationNameChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShouldSuppressCaptionControlsChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnShouldSuppressCaptionControlsChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusBarChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnStatusBarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusBarChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoUniversalStatusBarProxy@2345@@Z
    virtual long OnStatusBarChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSupportedAppViewModesChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnSupportedAppViewModesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSupportedAppViewModesChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppViewModes@2345@@Z
    virtual long OnSupportedAppViewModesChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnTitleBarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoUniversalTitleBarProxy@2345@@Z
    virtual long OnTitleBarChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnTitleChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserContextChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnUserContextChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserContextChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnUserContextChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserInteractionModeChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnUserInteractionModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserInteractionModeChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long OnUserInteractionModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelVisibility@2345@@Z
    virtual long OnVisibilityChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChanged@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnVisibleBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChanging@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBURect@Foundation@5@@Z
    virtual long OnVisibleBoundsChanging(WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoUniversalAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
