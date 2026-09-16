#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CoreAppModelInProcStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLogicalBounds@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@URect@Foundation@5@@Z
    virtual long SetLogicalBounds(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityAsync@CoreAppModelInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4AppModelVisibility@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SetVisibilityAsync(WindissectOpaque, int, WindissectOpaque * *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
