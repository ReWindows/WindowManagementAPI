#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 71 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewInProcStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long CloseRequestedAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppViewWatcher@2345@@Z
    virtual long CreateWatcher(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcherWithHostViewId@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAUIAppViewWatcher@2345@@Z
    virtual long CreateWatcherWithHostViewId(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z
    virtual long FindAllAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationRequestedVisibilityBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long GetActivationRequestedVisibilityBehavior(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationRequestedVisibilityGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long GetActivationRequestedVisibilityGlobalBehavior(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatch@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4UniversalBatchKind@2345@PEAPEAUIUniversalBatch@2345@@Z
    virtual long GetBatch(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromId@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAUIAppView@2345@@Z
    virtual long GetFromId(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromWindow@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindow@2345@PEAPEAUIAppView@2345@@Z
    virtual long GetFromWindow(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromWindowId@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAUIAppView@2345@@Z
    virtual long GetFromWindowId(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStateDeactivatedVisibilityBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long GetInputStateDeactivatedVisibilityBehavior(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStateDeactivatedVisibilityGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long GetInputStateDeactivatedVisibilityGlobalBehavior(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityHiddenExecutionStateBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAU?$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long GetVisibilityHiddenExecutionStateBehavior(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityHiddenExecutionStateGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long GetVisibilityHiddenExecutionStateGlobalBehavior(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityHiddenForegroundBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAU?$IReference@_N@Foundation@5@@Z
    virtual long GetVisibilityHiddenForegroundBehavior(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityHiddenForegroundGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@_N@Foundation@5@@Z
    virtual long GetVisibilityHiddenForegroundGlobalBehavior(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationRequestedVisibilityBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long SetActivationRequestedVisibilityBehavior(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationRequestedVisibilityGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long SetActivationRequestedVisibilityGlobalBehavior(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToLeftDisplayEdge@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@E@Z
    virtual long SetAdjacentToLeftDisplayEdge(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToRightDisplayEdge@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@E@Z
    virtual long SetAdjacentToRightDisplayEdge(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewMode@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4AppViewModes@2345@@Z
    virtual long SetAppViewMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewVisibilityAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4AppViewVisibility@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SetAppViewVisibilityAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppliedPresenterMode@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long SetAppliedPresenterMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@URect@Foundation@5@@Z
    virtual long SetBounds(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConsolidationStatus@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4AppModelConsolidationStatus@2345@@Z
    virtual long SetConsolidationStatus(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenMode@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@E@Z
    virtual long SetFullScreenMode(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputStateDeactivatedVisibilityBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long SetInputStateDeactivatedVisibilityBehavior(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputStateDeactivatedVisibilityGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@W4AppViewVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long SetInputStateDeactivatedVisibilityGlobalBehavior(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4AppModelLayoutState@2345@@Z
    virtual long SetLayoutState(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4DisplayOrientations@Display@Graphics@5@@Z
    virtual long SetOrientation(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationMode@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4AppModelHolographicPresentationMode@2345@@Z
    virtual long SetPresentationMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizing@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@E@Z
    virtual long SetResizing(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedAppViewModes@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4AppViewModes@2345@@Z
    virtual long SetSupportedAppViewModes(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserInteractionMode@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long SetUserInteractionMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenExecutionStateBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAU?$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long SetVisibilityHiddenExecutionStateBehavior(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenExecutionStateGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@5@@Z
    virtual long SetVisibilityHiddenExecutionStateGlobalBehavior(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenForegroundBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAU?$IReference@_N@Foundation@5@@Z
    virtual long SetVisibilityHiddenForegroundBehavior(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityHiddenForegroundGlobalBehavior@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@_N@Foundation@5@@Z
    virtual long SetVisibilityHiddenForegroundGlobalBehavior(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@URect@Foundation@5@@Z
    virtual long SetVisibleBounds(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@W4SystemKey@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SystemKeyPressedAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TerminateAllAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllWithUserContextAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TerminateAllWithUserContextAsync(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAppAsync@AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TerminateAppAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewInProcStatics();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
