#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class CompactOverlayPresenterSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompactOverlayPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompactOverlayPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompactOverlayPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompactOverlayPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompactOverlayPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompactOverlayPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
