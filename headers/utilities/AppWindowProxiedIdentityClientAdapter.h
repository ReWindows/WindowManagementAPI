#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 11 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppWindowProxiedIdentityClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerId@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContainerId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedAppId@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProxiedAppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedHwnd@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedHwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedProcessId@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContainerId@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ContainerId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedAppId@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ProxiedAppId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedHwnd@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long put_ProxiedHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedProcessId@AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long put_ProxiedProcessId(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppWindowProxiedIdentityClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
