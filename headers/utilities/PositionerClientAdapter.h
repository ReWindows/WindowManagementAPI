#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 54 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class PositionerClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearPersistedState(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestCompleted@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K_N@Z
    long OnRequestCompleted(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveAdjacentToAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestMoveAdjacentToAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToDisplayRegionAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@345@UPoint@Foundation@5@PEAPEAU?$IAsyncOperation@_N@95@@Z
    virtual long RequestMoveRelativeToDisplayRegionAsync(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToWindowAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@UPoint@Foundation@5@PEAPEAU?$IAsyncOperation@_N@85@@Z
    virtual long RequestMoveRelativeToWindowAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveToDisplayRegionAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestMoveToDisplayRegionAsync(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPositionAndSizeWithContextAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@UDisplayRegionId@WindowingEnvironment@345@UPoint@Foundation@5@USize@Foundation@5@123PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestPositionAndSizeWithContextAsync(WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque, WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetIconAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAUIRandomAccessStream@Streams@Storage@5@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestSetIconAsync(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetPreferredTopMostAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestSetPreferredTopMostAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetRelativeZOrderBeneathAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestSetRelativeZOrderBeneathAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetSecondaryIconAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAUIRandomAccessStream@Streams@Storage@5@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestSetSecondaryIconAsync(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetThumbnailAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAUIRandomAccessStream@Streams@Storage@5@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestSetThumbnailAsync(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSizeAsync@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUSize@Foundation@5@PEAPEAU?$IAsyncOperation@_N@75@@Z
    virtual long RequestSizeAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedProperty@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetExtendedProperty(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long TrySetTopMost(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DisplayRegionChanged@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_DisplayRegionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegionIds@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long get_DisplayRegionIds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideInTaskSwitcher@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HideInTaskSwitcher(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximizable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMaximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimizable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMovable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMovable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPopup@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPopup(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProxied@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProxied(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResizable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32NoActivate@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32NoActivate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32ToolWindow@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32ToolWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32TopLevelAppWindow@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32TopLevelAppWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistedStateId@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistedStateId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferDisableSystemUXPolicy@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PreferDisableSystemUXPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationDescription@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationDescription(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationName@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldSuppressCaptionControls@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldSuppressCaptionControls(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironmentId@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowingEnvironmentId@WindowingEnvironment@345@@Z
    virtual long get_WindowingEnvironmentId(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideInTaskSwitcher@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_HideInTaskSwitcher(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDisabled@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMaximizable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMaximizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMinimizable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMinimizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMovable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMovable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPopup@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsPopup(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsProxied@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsProxied(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsResizable@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsResizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32NoActivate@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsWin32NoActivate(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32ToolWindow@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsWin32ToolWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32TopLevelAppWindow@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsWin32TopLevelAppWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PersistedStateId@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PersistedStateId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferDisableSystemUXPolicy@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_PreferDisableSystemUXPolicy(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoteConfigurationDescription@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_RemoteConfigurationDescription(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoteConfigurationName@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_RemoteConfigurationName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldSuppressCaptionControls@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_ShouldSuppressCaptionControls(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DisplayRegionChanged@PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DisplayRegionChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~PositionerClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
