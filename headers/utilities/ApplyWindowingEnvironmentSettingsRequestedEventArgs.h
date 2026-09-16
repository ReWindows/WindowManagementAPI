#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 39 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ApplyWindowingEnvironmentSettingsRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    ApplyWindowingEnvironmentSettingsRequestedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@PEAU?$IMapView@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Collections@Foundation@5@UWindowingEnvironmentId@WindowingEnvironment@345@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorCode@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJJ@Z
    virtual long SetErrorCode(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Settings@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IMapView@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Collections@Foundation@5@@Z
    virtual long get_Settings(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowEnvironmentId@ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowingEnvironmentId@WindowingEnvironment@345@@Z
    virtual long get_WindowEnvironmentId(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ApplyWindowingEnvironmentSettingsRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
