#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 17 member(s).
namespace Windows::UI::WindowManagement {
class WindowingEnvironmentRemovedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@QEAA@XZ
    WindowingEnvironmentRemovedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironment@WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowingEnvironment@234@@Z
    virtual long get_WindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~WindowingEnvironmentRemovedEventArgs();
};
} // namespace Windows::UI::WindowManagement
