#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 26 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ImmersiveAppModelInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    ImmersiveAppModelInProc();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelKind@2345@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bounds@ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJURect@Foundation@5@@Z
    virtual long put_Bounds(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImmersiveAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ImmersiveAppModelInProc();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
