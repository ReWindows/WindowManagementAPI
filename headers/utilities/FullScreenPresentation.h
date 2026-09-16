#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 28 member(s).
namespace Windows::UI::WindowManagement {
class FullScreenPresentation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FullScreenPresentation@WindowManagement@UI@Windows@@QEAA@XZ
    FullScreenPresentation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@FullScreenPresentation@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@FullScreenPresentation@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExclusive@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsExclusive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsExclusive@FullScreenPresentation@WindowManagement@UI@Windows@@UEAAJE@Z
    virtual long put_IsExclusive(unsigned char);
};
} // namespace Windows::UI::WindowManagement
