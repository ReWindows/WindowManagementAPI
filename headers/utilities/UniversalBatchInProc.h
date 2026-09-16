#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 18 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalBatchInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long End();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4UniversalBatchKind@2345@UWindowId@2345@PEAUIUniversalAppModel@2345@@Z
    long RuntimeClassInitialize(int, WindissectOpaque, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    UniversalBatchInProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnded@UniversalBatchInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnded(unsigned char *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
