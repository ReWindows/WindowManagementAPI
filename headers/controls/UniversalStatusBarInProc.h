#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 19 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalStatusBarInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_BackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundOpacity@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAN@Z
    virtual long get_BackgroundOpacity(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludedRect@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_OccludedRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OccludedRect@UniversalStatusBarInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJURect@Foundation@5@@Z
    virtual long put_OccludedRect(WindissectOpaque);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
