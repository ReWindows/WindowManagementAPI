#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
class AsyncOperationAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteAsyncOperation@AsyncOperationAdapter@@SAJ_K_N@Z
    static long CompleteAsyncOperation(uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncOperationAdapter@@QEAA@XZ
    ~AsyncOperationAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteAsyncOperationImplementation@AsyncOperationAdapter@@AEAAJ_K_N@Z
    long CompleteAsyncOperationImplementation(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@AsyncOperationAdapter@@CAPEAV1@XZ
    static AsyncOperationAdapter * GetForCurrentThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessSequence@AsyncOperationAdapter@@CA_KXZ
    static uint64_t GetProcessSequence();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRequestId@AsyncOperationAdapter@@AEAAX_K@Z
    void ValidateRequestId(uint64_t);
};
