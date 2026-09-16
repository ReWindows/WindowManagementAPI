#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 55 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowTitleBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowTitleBar@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindowTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AppWindowTitleBar@WindowManagement@UI@Windows@@QEAAJXZ
    long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredVisibility@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAW4AppWindowTitleBarVisibility@234@@Z
    virtual long GetPreferredVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarOcclusions@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetTitleBarOcclusions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppWindowTitleBar@WindowManagement@UI@Windows@@QEAAJPEAUITitleBarClientAdapter@2ApplicationModel@Internal@4@PEAVAppWindow@234@PEAUICoreApplicationViewTitleBar@Core@64@PEAUHWND__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::UI::WindowManagement::AppWindow *, ::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredVisibility@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJW4AppWindowTitleBarVisibility@234@@Z
    virtual long SetPreferredVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_BackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonHoverBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonHoverForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonInactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonInactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonPressedBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ButtonPressedForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendsContentIntoTitleBar@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ExtendsContentIntoTitleBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_InactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_InactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_BackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonHoverBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonHoverBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonHoverForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonHoverForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonInactiveBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonInactiveBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonInactiveForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonInactiveForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonPressedBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonPressedBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonPressedForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ButtonPressedForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtendsContentIntoTitleBar@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_ExtendsContentIntoTitleBar(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InactiveBackgroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_InactiveBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InactiveForegroundColor@AppWindowTitleBar@WindowManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_InactiveForegroundColor(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowTitleBar@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowTitleBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCoreApplicationViewTitleBarChanged@AppWindowTitleBar@WindowManagement@UI@Windows@@AEAAJPEAUICoreApplicationViewTitleBar@Core@ApplicationModel@4@PEAUIInspectable@@@Z
    long _OnCoreApplicationViewTitleBarChanged(::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar *, IInspectable *);
};
} // namespace Windows::UI::WindowManagement
