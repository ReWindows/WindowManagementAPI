#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 29 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowForegroundChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsForeground@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsForeground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIWindow@2345@@Z
    virtual long get_Window(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowForegroundChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowForegroundChangedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
