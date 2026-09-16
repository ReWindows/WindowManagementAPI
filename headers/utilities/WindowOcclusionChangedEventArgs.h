#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 30 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowOcclusionChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WindowOcclusionChangedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4WindowOcclusion@2345@@Z
    virtual long get_Occlusion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIWindow@2345@@Z
    virtual long get_Window(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowOcclusionChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowOcclusionChangedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
