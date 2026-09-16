#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 86 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSetWindowPosFlags@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJI@Z
    virtual long AddSetWindowPosFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Consolidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@SAJW4ClientKind@2345@UWindowId@2345@PEAPEAUIWindowClientAdapter@2345@@Z
    static long CreateWindowAdapter(int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4HideOptions@2345@@Z
    virtual long Hide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long NotifyLayoutCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConsolidated@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4AppModelConsolidationStatus@2345@@Z
    long OnConsolidated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerActivated@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnOwnerActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerClosed@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnOwnerClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerDestroyed@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long OnOwnerDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestCompleted@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long OnRequestCompleted(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@SAJPEAUIWindowClientAdapter@2345@@Z
    static long RegisterWindowAdapter(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowAdapterAsync@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@SAJPEAUIWindowClientAdapter@2345@PEAPEAU?$IAsyncOperation@PEAUIInspectable@@@Foundation@5@@Z
    static long RegisterWindowAdapterAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSetWindowPosFlags@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJI@Z
    virtual long RemoveSetWindowPosFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAVWindowClientPrincipal@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@@Z
    virtual long SetOwner(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsync@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppWindowShowOptions@2UI@5@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WindowClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloakChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CloakChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Consolidated@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Consolidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FrameOffsetChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_FrameOffsetChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FrameSizeChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_FrameSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsMinimizedChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_IsMinimizedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LogicalSizeChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_LogicalSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OcclusionChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OcclusionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PhysicalBoundsChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PhysicalBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TopMostChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TopMostChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibleBoundsChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibleBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppActivationClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppActivationClientAdapter@2345@@Z
    virtual long get_AppActivationClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewId@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUAppViewId@2345@@Z
    virtual long get_AppViewId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppWindowProxiedIdentityClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppWindowProxiedIdentityClientAdapter@2345@@Z
    virtual long get_AppWindowProxiedIdentityClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIApplicationViewClientAdapter@2345@@Z
    virtual long get_ApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreApplicationViewClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUICoreApplicationViewClientAdapter@2345@@Z
    virtual long get_CoreApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreateOperation@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAPEAU?$IAsyncOperation@PEAUIInspectable@@@Foundation@5@@Z
    long get_CreateOperation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIDisplayClientAdapter@2345@@Z
    virtual long get_DisplayClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIFrameClientAdapter@2345@@Z
    virtual long get_FrameClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloViewClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIHoloViewClientAdapter@2345@@Z
    virtual long get_HoloViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@2345@@Z
    virtual long get_Id(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCloaked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimized@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalSize@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_LogicalSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4CoreWindowOcclusion@Core@UI@5@@Z
    virtual long get_Occlusion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalBounds@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_PhysicalBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUAppModelPlacement@2345@@Z
    virtual long get_Placement(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionerClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIPositionerClientAdapter@2345@@Z
    virtual long get_PositionerClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredScale@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_PreferredScale(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PresenterClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIPresenterClientAdapter@2345@@Z
    virtual long get_PresenterClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIDisplayRegion@2UI@5@@Z
    virtual long get_PrimaryDisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SetWindowPosFlags@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_SetWindowPosFlags(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemNavigationClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUISystemNavigationClientAdapter@2345@@Z
    virtual long get_SystemNavigationClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarClientAdapter@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUITitleBarClientAdapter@2345@@Z
    virtual long get_TitleBarClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMaxSize@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredMaxSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMinSize@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredScale@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJI@Z
    virtual long put_PreferredScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldWaitForLayoutCompletion@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_ShouldWaitForLayoutCompletion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloakChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloakChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Consolidated@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Consolidated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FrameOffsetChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FrameOffsetChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FrameSizeChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FrameSizeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsMinimizedChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsMinimizedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LogicalSizeChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LogicalSizeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OcclusionChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OcclusionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PhysicalBoundsChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PhysicalBoundsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TopMostChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TopMostChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibleBoundsChanged@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibleBoundsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowClientAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireConsolidatedEvent@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void FireConsolidatedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePresentationLoadingEvent@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void FirePresentationLoadingEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePresentationUnloadedEvent@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void FirePresentationUnloadedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireVisibilityEvent@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void FireVisibilityEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresentingStatus@WindowClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdatePresentingStatus();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
