#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 17 member(s).
namespace Windows::UI::WindowManagement {
class WindowingEnvironmentAddedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@QEAA@XZ
    WindowingEnvironmentAddedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironment@WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowingEnvironment@234@@Z
    virtual long get_WindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~WindowingEnvironmentAddedEventArgs();
};
} // namespace Windows::UI::WindowManagement
