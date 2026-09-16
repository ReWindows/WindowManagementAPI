#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 29 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewVisibilityChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    AppViewVisibilityChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppView@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppView@2345@@Z
    virtual long get_AppView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visibility@AppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewVisibility@2345@@Z
    virtual long get_Visibility(int *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
