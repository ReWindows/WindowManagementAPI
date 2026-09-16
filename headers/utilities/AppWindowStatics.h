#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 11 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppWindowStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowStatics@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindowStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllPersistedState@AppWindowStatics@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long ClearAllPersistedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@AppWindowStatics@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearPersistedState(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAsync@AppWindowStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVAppWindow@WindowManagement@UI@Windows@@@Foundation@4@@Z
    virtual long TryCreateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateWithProxiedIdentityAsync@AppWindowStatics@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@_KU_GUID@@1PEAPEAU?$IAsyncOperation@PEAVAppWindow@WindowManagement@UI@Windows@@@Foundation@4@@Z
    virtual long TryCreateWithProxiedIdentityAsync(HSTRING__*, uint64_t, _GUID, uint64_t, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowStatics@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedStateInternal@AppWindowStatics@WindowManagement@UI@Windows@@AEAAJPEAUHSTRING__@@@Z
    long ClearPersistedStateInternal(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAsyncInternal@AppWindowStatics@WindowManagement@UI@Windows@@AEAAJAEBUAppWindowProxiedIdentityInfo@234@PEAPEAU?$IAsyncOperation@PEAVAppWindow@WindowManagement@UI@Windows@@@Foundation@4@@Z
    long TryCreateAsyncInternal(::Windows::UI::WindowManagement::AppWindowProxiedIdentityInfo const &, WindissectOpaque * *);
};
} // namespace Windows::UI::WindowManagement
