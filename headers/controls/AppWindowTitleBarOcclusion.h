#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 15 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowTitleBarOcclusion {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludingRect@AppWindowTitleBarOcclusion@WindowManagement@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_OccludingRect(WindissectOpaque *);
};
} // namespace Windows::UI::WindowManagement
