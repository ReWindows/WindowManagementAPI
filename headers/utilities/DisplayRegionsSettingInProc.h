#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 23 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class DisplayRegionsSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAA@XZ
    DisplayRegionsSettingInProc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegions@DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long get_DisplayRegions(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayRegionsSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~DisplayRegionsSettingInProc();
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
