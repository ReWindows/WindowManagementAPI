#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 24 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowPlacement {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowPlacement@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindowPlacement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppWindowPlacement@WindowManagement@UI@Windows@@QEAAJPEAUIDisplayRegion@234@UPoint@Foundation@4@USize@74@E@Z
    long RuntimeClassInitialize(::Windows::UI::WindowManagement::IDisplayRegion *, WindissectOpaque, WindissectOpaque, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegion@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAPEAUIDisplayRegion@234@@Z
    virtual long get_DisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Offset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@AppWindowPlacement@WindowManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowPlacement@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowPlacement();
};
} // namespace Windows::UI::WindowManagement
