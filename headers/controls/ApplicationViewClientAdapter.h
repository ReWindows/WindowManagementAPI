#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ApplicationViewClientAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    ApplicationViewClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableResponsiveAppViewPolicy@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long DisableResponsiveAppViewPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeStateChanged@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N@Z
    long InvokeStateChanged(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewModeSupported@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4ApplicationViewMode@ViewManagement@UI@5@PEAE@Z
    virtual long IsViewModeSupported(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneViewAsync@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@0W4ViewSizePreference@ViewManagement@UI@5@1_KPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long ShowAsStandaloneViewAsync(WindissectOpaque, WindissectOpaque, int, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchViewAsync@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@0I_KPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SwitchViewAsync(WindissectOpaque, WindissectOpaque, unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConsolidateAsync@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryConsolidateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneViewAsync@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@0W4ViewSizePreference@ViewManagement@UI@5@1PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsStandaloneViewAsync(WindissectOpaque, WindissectOpaque, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewModeAsync@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4ApplicationViewMode@ViewManagement@UI@5@PEAUIViewModePreferences@895@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsViewModeAsync(WindissectOpaque, int, ::Windows::UI::ViewManagement::IViewModePreferences *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StateChanged@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_StateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToLeftDisplayEdge@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AdjacentToLeftDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToRightDisplayEdge@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AdjacentToRightDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewMode@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationViewMode@ViewManagement@UI@5@@Z
    virtual long get_ApplicationViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewState@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationViewState@ViewManagement@UI@5@@Z
    virtual long get_ApplicationViewState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicationMultiviewActivationPolicyEnabled@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsApplicationMultiviewActivationPolicyEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullScreen@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsFullScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOnLockScreen@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsOnLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredLaunchViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationViewWindowingMode@ViewManagement@UI@5@@Z
    virtual long get_PreferredLaunchWindowingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpanningRects@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long get_SpanningRects(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSystemOverlays@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4FULL_SCREEN_TYPE@Core@UI@Phone@5@@Z
    virtual long get_SuppressSystemOverlays(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserInteractionMode@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long get_UserInteractionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsApplicationMultiviewActivationPolicyEnabled@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsApplicationMultiviewActivationPolicyEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchViewSize@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchWindowingMode@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4ApplicationViewWindowingMode@ViewManagement@UI@5@@Z
    virtual long put_PreferredLaunchWindowingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMinSize@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSystemOverlays@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4FULL_SCREEN_TYPE@Core@UI@Phone@5@@Z
    virtual long put_SuppressSystemOverlays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StateChanged@ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StateChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationViewClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
