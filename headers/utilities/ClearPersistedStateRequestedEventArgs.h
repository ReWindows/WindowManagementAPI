#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ClearPersistedStateRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistedStateName@ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistedStateName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ClearPersistedStateRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
