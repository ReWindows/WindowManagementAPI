#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 45 member(s).
namespace Windows::UI::WindowManagement {
class UnknownWindowingEnvironment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChrome@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowChrome@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    virtual long GetChrome(::Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowChrome * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegions@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDisplayRegion@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetDisplayRegions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKindSupported@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@4@PEAE@Z
    virtual long IsKindSupported(int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyChangesAsync@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyChangesAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyChangesForViewAsync@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJHPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyChangesForViewAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyChangesForWindowAsync@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUWindowId@2ApplicationModel@Internal@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyChangesForWindowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyPresentationChangesForWindowAsync@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUWindowId@2ApplicationModel@Internal@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyPresentationChangesForWindowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDefaultPositioner@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAUIPositionerBroker@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    virtual long TryGetDefaultPositioner(::Windows::Internal::ApplicationModel::WindowingEnvironment::IPositionerBroker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDisplayRegionForWin32Point@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@PEAPEAUIDisplayRegion@234@@Z
    virtual long TryGetDisplayRegionForWin32Point(WindissectOpaque, ::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDisplayRegionForWin32PointPrivate@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@PEAPEAUIDisplayRegionPrivate@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    virtual long TryGetDisplayRegionForWin32PointPrivate(WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::IDisplayRegionPrivate * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnknownWindowingEnvironment@WindowManagement@UI@Windows@@QEAA@XZ
    UnknownWindowingEnvironment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowingEnvironment@WindowManagement@UI@Windows@@PEAVWindowingEnvironmentChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAUWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    virtual long get_Id(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAW4WindowingEnvironmentKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnknownWindowingEnvironment@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~UnknownWindowingEnvironment();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireUnknownWindowingEnvironmentAsyncOperation@UnknownWindowingEnvironment@WindowManagement@UI@Windows@@AEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    long FireUnknownWindowingEnvironmentAsyncOperation(WindissectOpaque * *);
};
} // namespace Windows::UI::WindowManagement
