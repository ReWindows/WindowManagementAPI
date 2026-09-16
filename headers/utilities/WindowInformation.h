#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 25 member(s).
namespace Windows::UI::Core {
class WindowInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowInformation@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowInformation@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowInformation@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowInformation@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowInformation@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowInformation@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowInformation@Core@UI@Windows@@QEAA@XZ
    WindowInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hwnd@WindowInformation@Core@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Hwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@WindowInformation@Core@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewInstanceId@WindowInformation@Core@UI@Windows@@UEAAJPEAI@Z
    virtual long get_ViewInstanceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewInstanceId@WindowInformation@Core@UI@Windows@@UEAAJI@Z
    virtual long put_ViewInstanceId(unsigned int);
};
} // namespace Windows::UI::Core
