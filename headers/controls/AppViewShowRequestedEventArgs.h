#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 34 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewShowRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewMode@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewModes@2345@@Z
    virtual long get_AppViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppWindowShowOptions@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppWindowShowOptionsInternal@2345@@Z
    virtual long get_AppWindowShowOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomSize@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_CustomSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingAppView@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppView@2345@@Z
    virtual long get_RequestingAppView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingSizePreference@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long get_RequestingSizePreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizePreference@AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@5@@Z
    virtual long get_SizePreference(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewShowRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
