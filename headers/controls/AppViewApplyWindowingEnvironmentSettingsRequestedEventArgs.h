#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 28 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorCode@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJJ@Z
    virtual long SetErrorCode(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Settings@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IMapView@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Collections@Foundation@5@@Z
    virtual long get_Settings(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowEnvironmentId@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowingEnvironmentId@WindowingEnvironment@345@@Z
    virtual long get_WindowEnvironmentId(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchCompleted@AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long DispatchCompleted();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
