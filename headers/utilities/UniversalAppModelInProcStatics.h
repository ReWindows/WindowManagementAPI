#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 45 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalAppModelInProcStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedAsync@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long CloseRequestedAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatch@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4UniversalBatchKind@2345@PEAPEAUIUniversalBatch@2345@@Z
    virtual long GetBatch(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToLeftDisplayEdge@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@E@Z
    virtual long SetAdjacentToLeftDisplayEdge(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentToRightDisplayEdge@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@E@Z
    virtual long SetAdjacentToRightDisplayEdge(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewMode@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppViewModes@2345@@Z
    virtual long SetAppViewMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppliedPresenterMode@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long SetAppliedPresenterMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@URect@Foundation@5@@Z
    virtual long SetBounds(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConsolidationStatus@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppModelConsolidationStatus@2345@@Z
    virtual long SetConsolidationStatus(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullScreenMode@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@E@Z
    virtual long SetFullScreenMode(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCloaked@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@E@Z
    virtual long SetIsCloaked(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMinimized@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@E@Z
    virtual long SetIsMinimized(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutState@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppModelLayoutState@2345@@Z
    virtual long SetLayoutState(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4DisplayOrientations@Display@Graphics@5@@Z
    virtual long SetOrientation(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacement@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@UAppModelPlacement@2345@@Z
    virtual long SetPlacement(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationKind@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppModelPresentationKind@2345@@Z
    virtual long SetPresentationKind(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationMode@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppModelHolographicPresentationMode@2345@@Z
    virtual long SetPresentationMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentationOptions@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAUIAppModelPresentationOptions@2345@@Z
    virtual long SetPresentationOptions(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryDisplayRegion@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@UDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long SetPrimaryDisplayRegion(WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizing@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@E@Z
    virtual long SetResizing(WindissectOpaque, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedAppViewModes@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppViewModes@2345@@Z
    virtual long SetSupportedAppViewModes(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserInteractionMode@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long SetUserInteractionMode(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityAsync@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppModelVisibility@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SetVisibilityAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@URect@Foundation@5@@Z
    virtual long SetVisibleBounds(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedAsync@UniversalAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4SystemKey@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SystemKeyPressedAsync(WindissectOpaque, int, WindissectOpaque * *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
