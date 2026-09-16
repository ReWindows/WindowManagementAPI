#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 31 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class AppStreamingSettingsInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAA@XZ
    AppStreamingSettingsInProc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAAJPEAU?$IVectorView@W4AppStreamingPositionerSettings@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@USize@85@UPoint@85@URect@85@HEEW4ShowModeInternal@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, int, unsigned char, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AbsoluteZOrder@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_AbsoluteZOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Activatable@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Activatable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AvailableSettings@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@W4AppStreamingPositionerSettings@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long get_AvailableSettings(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredBounds@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_DesiredBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredPosition@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUPoint@Foundation@5@@Z
    virtual long get_DesiredPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredSize@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_DesiredSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestedTopMost@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RequestedTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowMode@AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4ShowModeInternal@2345@@Z
    virtual long get_ShowMode(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppStreamingSettingsInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppStreamingSettingsInProc();
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
