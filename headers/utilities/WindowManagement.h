#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 13 member(s).
namespace Windows::Internal::ApplicationModel {
class WindowManagement {
public:
    class ActivationRequestProxy;
    class ActivationRequestedEventArgs;
    class AppActivationClientAdapter;
    class AppActivationClientPrincipal;
    class AppModelEventArgsBase;
    class AppViewActivationRequestProxy;
    class AppViewActivationRequestedEventArgs;
    class AppViewActivationShowRequestProxy;
    class AppViewActivationShowRequestedEventArgs;
    class AppViewApplySettingsRequestProxy;
    class AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs;
    class AppViewBackRequestProxy;
    class AppViewBackRequestedEventArgs;
    class AppViewChangedEventArgs;
    class AppViewClearPersistedStateRequestProxy;
    class AppViewClearPersistedStateRequestedEventArgs;
    class AppViewConsolidateRequestProxy;
    class AppViewConsolidateRequestedEventArgs;
    class AppViewExecutionStateChangedEventArgs;
    class AppViewHideRequestProxy;
    class AppViewHideRequestedEventArgs;
    class AppViewHideStatusBarRequestProxy;
    class AppViewInProc;
    class AppViewInProcStatics;
    class AppViewListProxy;
    class AppViewProxy;
    class AppViewRemediationRequestProxy;
    class AppViewRemediationRequestedEventArgs;
    class AppViewShowRequestProxy;
    class AppViewShowRequestedEventArgs;
    class AppViewShowStandardSystemOverlaysRequestProxy;
    class AppViewShowStatusBarRequestProxy;
    class AppViewStaticsProxy;
    class AppViewSwitchRequestProxy;
    class AppViewSwitchRequestedEventArgs;
    class AppViewUniversalPropertyChangedEventArgs;
    class AppViewUniversalShowStandardSystemOverlaysRequestedEventArgs;
    class AppViewUniversalStatusBarHideRequestedEventArgs;
    class AppViewUniversalStatusBarShowRequestedEventArgs;
    class AppViewVisibilityChangedEventArgs;
    class AppViewWatcherInProc;
    class AppWindowProxiedIdentityClientAdapter;
    class AppWindowProxiedIdentityClientPrincipal;
    class ApplicationViewClientAdapter;
    class ApplicationViewClientPrincipal;
    class ApplySettingsRequestProxy;
    class ApplyWindowingEnvironmentSettingsRequestedEventArgs;
    class BackRequestProxy;
    class BackRequestedEventArgs;
    class BamoActivationRequestProxy;
    class BamoAppActivationClientPrincipal;
    class BamoAppActivationClientStub;
    class BamoAppViewActivationRequestProxy;
    class BamoAppViewActivationShowRequestProxy;
    class BamoAppViewApplySettingsRequestProxy;
    class BamoAppViewBackRequestProxy;
    class BamoAppViewClearPersistedStateRequestProxy;
    class BamoAppViewConsolidateRequestProxy;
    class BamoAppViewHideRequestProxy;
    class BamoAppViewHideStatusBarRequestProxy;
    class BamoAppViewProxy;
    class BamoAppViewRemediationRequestProxy;
    class BamoAppViewShowRequestProxy;
    class BamoAppViewShowStandardSystemOverlaysRequestProxy;
    class BamoAppViewShowStatusBarRequestProxy;
    class BamoAppViewStaticsProxy;
    class BamoAppViewSwitchRequestProxy;
    class BamoAppWindowProxiedIdentityClientPrincipal;
    class BamoAppWindowProxiedIdentityClientStub;
    class BamoApplicationViewClientPrincipal;
    class BamoApplicationViewClientStub;
    class BamoApplySettingsRequestProxy;
    class BamoBackRequestProxy;
    class BamoClearPersistedStateRequestProxy;
    class BamoConsolidateRequestProxy;
    class BamoCoreAppModelProxy;
    class BamoCoreAppModelStaticsProxy;
    class BamoDisplayClientPrincipal;
    class BamoDisplayClientStub;
    class BamoFrameClientPrincipal;
    class BamoFrameClientStub;
    class BamoHideRequestProxy;
    class BamoImmersiveAppModelProxy;
    class BamoImpl;
    class BamoInputClientPrincipal;
    class BamoInputClientStub;
    class BamoPositionerClientPrincipal;
    class BamoPositionerClientStub;
    class BamoPresenterClientPrincipal;
    class BamoPresenterClientStub;
    class BamoPropertyStoreReflectorProxy;
    class BamoShowRequestProxy;
    class BamoShowStandardSystemOverlaysRequestProxy;
    class BamoSwitchRequestProxy;
    class BamoSystemNavigationClientPrincipal;
    class BamoSystemNavigationClientStub;
    class BamoTitleBarClientPrincipal;
    class BamoTitleBarClientStub;
    class BamoUniversalAppModelProxy;
    class BamoUniversalAppModelStaticsProxy;
    class BamoUniversalFrameProxy;
    class BamoUniversalSplashScreenProxy;
    class BamoUniversalStatusBarProxy;
    class BamoUniversalTitleBarProxy;
    class BamoWindowClientPrincipal;
    class BamoWindowClientRegistrarProxy;
    class BamoWindowClientStub;
    class BamoWindowManagementProxy;
    class BamoWindowProxy;
    class BamoWindowStaticsProxy;
    class CApplicationViewStateChangedEventArgs;
    class CCloseRequestedEventArgs;
    class CPresentationChangingEventArgs;
    class ClearPersistedStateRequestProxy;
    class ClearPersistedStateRequestedEventArgs;
    class ConsolidateRequestProxy;
    class ConsolidateRequestedEventArgs;
    class ConsolidatedEventArgs;
    class CoreAppModelInProc;
    class CoreAppModelInProcStatics;
    class CoreAppModelProxy;
    class CoreAppModelStaticsProxy;
    class CoreApplicationViewClientAdapter;
    class CorePropertyChangedEventArgs;
    class DisplayClientAdapter;
    class DisplayClientPrincipal;
    class EventArgsBase;
    class FrameClientAdapter;
    class FrameClientPrincipal;
    class HideRequestProxy;
    class HideRequestedEventArgs;
    class HoloViewClientAdapter;
    class IApplicationViewStateChangedEventArgs;
    class ICloseRequestedEventArgs;
    class IConsolidatedEventArgs;
    class IPresentationChangingEventArgs;
    class IWindowLayoutAdapterInterop;
    class ImmersiveAppModelInProc;
    class ImmersiveAppModelProxy;
    class InputClientAdapter;
    class InputClientPrincipal;
    class LayoutCompletedEventArgs;
    class MinUserInterop;
    class PositionerClientAdapter;
    class PositionerClientPrincipal;
    class PresentationChangingEventArgs;
    class PresenterClientAdapter;
    class PresenterClientPrincipal;
    class PropertyStoreInProc;
    class PropertyStoreReflectorProxy;
    class ShowRequestProxy;
    class ShowRequestedEventArgs;
    class ShowStandardSystemOverlaysRequestProxy;
    class ShowStandardSystemOverlaysRequestedEventArgs;
    class SwitchRequestProxy;
    class SwitchRequestedEventArgs;
    class SystemNavigationClientAdapter;
    class SystemNavigationClientPrincipal;
    class TitleBarClientAdapter;
    class TitleBarClientPrincipal;
    class UniversalAppModelInProc;
    class UniversalAppModelInProcStatics;
    class UniversalAppModelProxy;
    class UniversalAppModelStaticsProxy;
    class UniversalBatchInProc;
    class UniversalFrameInProc;
    class UniversalFrameProxy;
    class UniversalPropertyChangedEventArgs;
    class UniversalSplashScreenInProc;
    class UniversalSplashScreenProxy;
    class UniversalStatusBarInProc;
    class UniversalStatusBarProxy;
    class UniversalTitleBarInProc;
    class UniversalTitleBarProxy;
    class WatcherBase;
    class WindowChangedEventArgs;
    class WindowClientAdapter;
    class WindowClientAdapterInteropStatics;
    class WindowClientPrincipal;
    class WindowClientRegistrarProxy;
    class WindowForegroundChangedEventArgs;
    class WindowInProc;
    class WindowInProcStatics;
    class WindowListProxy;
    class WindowManagementApiLogging;
    class WindowManagementClientConnection;
    class WindowOcclusionChangedEventArgs;
    class WindowOrderRegionChangedEventArgs;
    class WindowProxy;
    class WindowStateMachine;
    class WindowStaticsProxy;
    class WindowVisibilityChangedEventArgs;
    class WindowWatcherInProc;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIReferenceColorFromNullableColor@WindowManagement@ApplicationModel@Internal@Windows@@YAJUNullableColor@1234@PEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    long GetIReferenceColorFromNullableColor(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@WindowManagement@ApplicationModel@Internal@Windows@@YAPEBGKQEBQEBGK@Z
    unsigned short const * GetName(unsigned long, unsigned short const * const * const, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNullableColorFromIReferenceColor@WindowManagement@ApplicationModel@Internal@Windows@@YAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@PEAUNullableColor@1234@@Z
    long GetNullableColorFromIReferenceColor(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsIDKOnHoloEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z
    bool IsIDKOnSKUEnabled(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsIDKOnXboxEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsMinShellPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestFromAppModelWatcherDisabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsRequestFromAppModelWatcherDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowClientBamoEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsWindowClientBamoEnabled();
};
} // namespace Windows::Internal::ApplicationModel
