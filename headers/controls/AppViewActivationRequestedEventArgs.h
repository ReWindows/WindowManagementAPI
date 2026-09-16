#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 45 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewActivationRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    AppViewActivationRequestedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreen@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUISplashScreen@2345@@Z
    virtual long GetSplashScreen(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentlyShownAppViewId@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUAppViewId@2345@@Z
    virtual long SetCurrentlyShownAppViewId(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayRegionIds@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long SetDisplayRegionIds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorCode@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJJ@Z
    virtual long SetErrorCode(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHolographic@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetHolographic(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowDisplayId@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJI@Z
    virtual long SetWindowDisplayId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowExperienceId@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetWindowExperienceId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z
    virtual long get_Context(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContractId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingWindow@AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIWindow@2345@@Z
    virtual long get_RequestingWindow(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewActivationRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
