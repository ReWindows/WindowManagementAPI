#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 26 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class PositionAndSizeWithContextSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextDisplayRegionId@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUDisplayRegionId@2345@@Z
    virtual long get_ContextDisplayRegionId(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextOffset@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUPoint@Foundation@5@@Z
    virtual long get_ContextOffset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextSize@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_ContextSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegionId@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUDisplayRegionId@2345@@Z
    virtual long get_DisplayRegionId(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUPoint@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@PositionAndSizeWithContextSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_Size(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
