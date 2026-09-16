#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 36 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalTitleBarInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_BackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonBackgroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonForegroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverBackgroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonHoverBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverForegroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonHoverForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveBackgroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonInactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveForegroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonInactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedBackgroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonPressedBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedForegroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ButtonPressedForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendViewIntoTitleBar@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ExtendViewIntoTitleBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_Height(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveBackgroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_InactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveForegroundColor@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_InactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredVisibilityMode@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationWindowTitleBarVisibilityInternal@2345@@Z
    virtual long get_PreferredVisibilityMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemOverlayLeftInset@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_SystemOverlayLeftInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemOverlayRightInset@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_SystemOverlayRightInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJN@Z
    virtual long put_Height(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVisible@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_IsVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemOverlayLeftInset@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJN@Z
    virtual long put_SystemOverlayLeftInset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemOverlayRightInset@UniversalTitleBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJN@Z
    virtual long put_SystemOverlayRightInset(double);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
