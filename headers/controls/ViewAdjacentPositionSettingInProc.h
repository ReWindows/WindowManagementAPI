#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class ViewAdjacentPositionSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorAppViewId@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_AnchorAppViewId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorWindowId@ViewAdjacentPositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@WindowManagement@345@@Z
    virtual long get_AnchorWindowId(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
