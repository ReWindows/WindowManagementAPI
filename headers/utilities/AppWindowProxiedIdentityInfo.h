#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 3 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowProxiedIdentityInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowProxiedIdentityInfo@WindowManagement@UI@Windows@@QEAA@PEAUHSTRING__@@_KU_GUID@@1@Z
    AppWindowProxiedIdentityInfo(HSTRING__*, uint64_t, _GUID, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowProxiedIdentityInfo@WindowManagement@UI@Windows@@QEAA@AEBU0123@@Z
    AppWindowProxiedIdentityInfo(::Windows::UI::WindowManagement::AppWindowProxiedIdentityInfo const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowProxiedIdentityInfo@WindowManagement@UI@Windows@@QEAA@XZ
    ~AppWindowProxiedIdentityInfo();
};
} // namespace Windows::UI::WindowManagement
