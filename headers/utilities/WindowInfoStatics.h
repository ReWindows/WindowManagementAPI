#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::UI::WindowManagement {
class WindowInfoStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WindowInfoStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowInfoBroker@WindowInfoStatics@WindowManagement@UI@Windows@@QEAAJPEAPEAUIWindowInfoBroker@2ApplicationModel@Internal@4@@Z
    long GetWindowInfoBroker(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateFromWindowId@WindowInfoStatics@WindowManagement@UI@Windows@@UEAAJUWindowId@34@PEAPEAUIWindowInfo@234@@Z
    virtual long TryCreateFromWindowId(::Windows::UI::WindowId, ::Windows::UI::WindowManagement::IWindowInfo * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowInfoStatics@WindowManagement@UI@Windows@@QEAA@XZ
    WindowInfoStatics();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowInfoStatics@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~WindowInfoStatics();
};
} // namespace Windows::UI::WindowManagement
