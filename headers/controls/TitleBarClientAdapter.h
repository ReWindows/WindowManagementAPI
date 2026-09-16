#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 47 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class TitleBarClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutMetricsChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long OnLayoutMetricsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InputRoutingInfoChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_InputRoutingInfoChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LayoutMetricsChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_LayoutMetricsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_BackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonHoverBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonHoverForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonInactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonInactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonPressedBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonPressedForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendsContentIntoTitleBar@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ExtendsContentIntoTitleBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_Height(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_InactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_InactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputRoutingHwnd@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@2345@@Z
    virtual long get_InputRoutingHwnd(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputRoutingInfo@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUMessageRoutingInfo@2345@@Z
    virtual long get_InputRoutingInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInputVisualSet@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsInputVisualSet(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredVisibility@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationWindowTitleBarVisibilityInternal@2345@@Z
    virtual long get_PreferredVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemOverlayLeftInset@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_SystemOverlayLeftInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemOverlayRightInset@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_SystemOverlayRightInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_Width(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_BackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonHoverBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonHoverBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonHoverForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonHoverForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonInactiveBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonInactiveBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonInactiveForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonInactiveForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonPressedBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonPressedBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonPressedForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ButtonPressedForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtendsContentIntoTitleBar@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_ExtendsContentIntoTitleBar(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_ForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InactiveBackgroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_InactiveBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InactiveForegroundColor@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_InactiveForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInputVisualSet@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsInputVisualSet(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredVisibility@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4ApplicationWindowTitleBarVisibilityInternal@2345@@Z
    virtual long put_PreferredVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InputRoutingInfoChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InputRoutingInfoChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LayoutMetricsChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LayoutMetricsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~TitleBarClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
