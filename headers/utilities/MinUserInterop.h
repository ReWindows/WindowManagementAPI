#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class MinUserInterop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@SAJPEAPEAV12345@@Z
    static long GetInstance(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowClientAdapter@MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAVWindowClientAdapter@2345@@Z
    long RegisterWindowClientAdapter(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWindowClientAdapter@MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAVWindowClientAdapter@2345@@Z
    long UnregisterWindowClientAdapter(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~MinUserInterop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowClass@MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProc@MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProcStatic@MinUserInterop@WindowManagement@ApplicationModel@Internal@Windows@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WindowProcStatic(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
