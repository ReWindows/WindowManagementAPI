#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::UI::WindowManagement {
class UnknownAppWindowPlacement {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegion@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAPEAUIDisplayRegion@234@@Z
    virtual long get_DisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Offset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnknownAppWindowPlacement@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~UnknownAppWindowPlacement();
};
} // namespace Windows::UI::WindowManagement
