#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 35 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class ViewRelativePositionSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAA@XZ
    ViewRelativePositionSettingInProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowDisplayRegionSpanning@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AllowDisplayRegionSpanning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorAppViewId@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_AnchorAppViewId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorWindowId@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@WindowManagement@345@@Z
    virtual long get_AnchorWindowId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundsPreference@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4BoundsPreferenceInternal@2345@@Z
    virtual long get_BoundsPreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncludeSystemChrome@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IncludeSystemChrome(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeepAspectRatio@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_KeepAspectRatio(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUPoint@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewRelativePositionPreferences@ViewRelativePositionSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIViewRelativePositionPreferences@2345@@Z
    virtual long get_ViewRelativePositionPreferences(::Windows::Internal::ApplicationModel::WindowingEnvironment::IViewRelativePositionPreferences * *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
