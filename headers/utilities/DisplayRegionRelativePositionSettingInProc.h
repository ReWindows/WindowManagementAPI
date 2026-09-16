#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class DisplayRegionRelativePositionSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegionId@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUDisplayRegionId@2345@@Z
    virtual long get_DisplayRegionId(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@DisplayRegionRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUPoint@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
