#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 29 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewClearPersistedStateRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistedStateName@AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistedStateName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewClearPersistedStateRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
