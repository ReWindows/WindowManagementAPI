#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 26 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CoreAppModelInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    CoreAppModelInProc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelKind@2345@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalBounds@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_LogicalBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visibility@CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelVisibility@2345@@Z
    virtual long get_Visibility(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreAppModelInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~CoreAppModelInProc();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
