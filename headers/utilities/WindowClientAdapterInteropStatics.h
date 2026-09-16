#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 25 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowClientAdapterInteropStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowAdapter@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4ClientKind@2345@UWindowId@2345@PEAPEAUIInspectable@@@Z
    virtual long CreateWindowAdapter(int, WindissectOpaque, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowAdapter@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long RegisterWindowAdapter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowAdapterAsync@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIInspectable@@PEAPEAU?$IAsyncOperation@PEAUIInspectable@@@Foundation@5@@Z
    virtual long RegisterWindowAdapterAsync(IInspectable *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WindowClientAdapterInteropStatics();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowClientAdapterInteropStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowClientAdapterInteropStatics();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
