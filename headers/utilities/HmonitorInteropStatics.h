#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::UI::WindowManagement {
class HmonitorInteropStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUIContext@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAJPEAUIUIContext@35@PEA_K@Z
    virtual long GetForUIContext(::Windows::UI::IUIContext *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@QEAA@XZ
    HmonitorInteropStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HmonitorInteropStatics@WindowManagement@UI@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Internal::UI::WindowManagement
