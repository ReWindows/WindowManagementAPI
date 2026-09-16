#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 24 member(s).
namespace Windows::UI::WindowManagement {
class WindowServicesStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllTopLevelWindowIds@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@UWindowId@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllTopLevelWindowIds(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@WindowServicesStatics@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@WindowServicesStatics@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowServicesStatics@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowServicesStatics@WindowManagement@UI@Windows@@QEAA@XZ
    WindowServicesStatics();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowServicesStatics@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~WindowServicesStatics();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowServicesBroker@WindowServicesStatics@WindowManagement@UI@Windows@@AEAAJPEAPEAUIWindowServicesBroker@2ApplicationModel@Internal@4@@Z
    long GetWindowServicesBroker(WindissectOpaque * *);
};
} // namespace Windows::UI::WindowManagement
