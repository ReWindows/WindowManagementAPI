#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 16 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalSplashScreenInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Dismiss();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageLocation@UniversalSplashScreenInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJURect@Foundation@5@@Z
    virtual long SetImageLocation(WindissectOpaque);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
