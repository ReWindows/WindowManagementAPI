#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 38 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowComplete@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJUWindowId@2345@J_N@Z
    long DestroyWindowComplete(WindissectOpaque, long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxy@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAPEAVWindowProxy@2345@@Z
    long GetProxy(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayRegionIds@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long SetDisplayRegionIds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppModel@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppModel@2345@@Z
    virtual long get_AppModel(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayId@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_DisplayId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegionIds@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long get_DisplayRegionIds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceId@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ExperienceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@2345@@Z
    virtual long get_Id(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsForeground@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsForeground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4WindowKind@2345@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4WindowOcclusion@2345@@Z
    virtual long get_Occlusion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrderRegion@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4WindowOrderRegion@2345@@Z
    virtual long get_OrderRegion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ProcessId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PropagatableProperties@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z
    virtual long get_PropagatableProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThreadId@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ThreadId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TouchInputRoutingInfo@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUMessageRoutingInfo@2345@@Z
    virtual long get_TouchInputRoutingInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visibility@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4WindowVisibility@2345@@Z
    virtual long get_Visibility(int *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
