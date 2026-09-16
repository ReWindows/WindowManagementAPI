#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 42 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ShowRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@W4AppModelPresentationKind@2345@USize@Foundation@5@0W4ViewSizePreference@ViewManagement@UI@5@3W4AppWindowShowOptionsInternal@2345@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, WindissectOpaque, WindissectOpaque *, int, int, int, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    ShowRequestedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppWindowShowOptions@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppWindowShowOptionsInternal@2345@@Z
    virtual long get_AppWindowShowOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomSize@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_CustomSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PresentationKind@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelPresentationKind@2345@@Z
    virtual long get_PresentationKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingSizePreference@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long get_RequestingSizePreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingWindowId@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@2345@@Z
    virtual long get_RequestingWindowId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizePreference@ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long get_SizePreference(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ShowRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
