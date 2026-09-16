#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ConsolidateRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    ConsolidateRequestedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ConsolidateRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
