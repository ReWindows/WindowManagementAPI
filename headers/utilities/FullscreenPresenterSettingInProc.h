#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 21 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class FullscreenPresenterSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExclusive@FullscreenPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExclusive(unsigned char *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
