#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::UI::Core {
class WindowLayout {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowLayout@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowLayout@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowLayout@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowLayout@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowLayout@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowLayout@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayClientAdapter@WindowLayout@Core@UI@Windows@@UEAAJPEAUIDisplayClientAdapter@WindowManagement@ApplicationModel@Internal@4@@Z
    virtual long SetDisplayClientAdapter(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowLayout@Core@UI@Windows@@QEAA@XZ
    WindowLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DesktopLegacyPositionChanged@WindowLayout@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_DesktopLegacyPositionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@WindowLayout@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScaleChanged@WindowLayout@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ScaleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRotationPreferences@WindowLayout@Core@UI@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long get_AutoRotationPreferences(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@WindowLayout@Core@UI@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long get_CurrentOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@WindowLayout@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DisplayScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeOrientation@WindowLayout@Core@UI@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long get_NativeOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@WindowLayout@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RasterizationScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRotationPreferences@WindowLayout@Core@UI@Windows@@UEAAJW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long put_AutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DesktopLegacyPositionChanged@WindowLayout@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DesktopLegacyPositionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@WindowLayout@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScaleChanged@WindowLayout@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScaleChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowLayout@Core@UI@Windows@@UEAA@XZ
    virtual ~WindowLayout();
};
} // namespace Windows::UI::Core
