#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 46 member(s).
namespace Windows::UI::WindowManagement {
class WindowingEnvironment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChrome@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowChrome@1ApplicationModel@Internal@4@@Z
    virtual long GetChrome(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegions@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDisplayRegion@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetDisplayRegions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKindSupported@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJW4ApplicationWindowPresenterKindInternal@1ApplicationModel@Internal@4@PEAE@Z
    virtual long IsKindSupported(int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyChangesAsync@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyChangesAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyChangesForViewAsync@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJHPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyChangesForViewAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyChangesForWindowAsync@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUWindowId@2ApplicationModel@Internal@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyChangesForWindowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyPresentationChangesForWindowAsync@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUWindowId@2ApplicationModel@Internal@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryApplyPresentationChangesForWindowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDefaultPositioner@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAPEAUIPositionerBroker@1ApplicationModel@Internal@4@@Z
    virtual long TryGetDefaultPositioner(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDisplayRegionForWin32Point@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@PEAPEAUIDisplayRegion@234@@Z
    virtual long TryGetDisplayRegionForWin32Point(WindissectOpaque, ::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDisplayRegionForWin32PointInternal@WindowingEnvironment@WindowManagement@UI@Windows@@QEAAJUPoint@Foundation@4@PEAPEAUIDisplayRegion@234@PEAE@Z
    long TryGetDisplayRegionForWin32PointInternal(WindissectOpaque, ::Windows::UI::WindowManagement::IDisplayRegion * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDisplayRegionForWin32PointPrivate@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@PEAPEAUIDisplayRegionPrivate@1ApplicationModel@Internal@4@@Z
    virtual long TryGetDisplayRegionForWin32PointPrivate(WindissectOpaque, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowingEnvironment@WindowManagement@UI@Windows@@QEAA@XZ
    WindowingEnvironment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowingEnvironment@WindowManagement@UI@Windows@@PEAVWindowingEnvironmentChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAUWindowingEnvironmentId@1ApplicationModel@Internal@4@@Z
    virtual long get_Id(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJPEAW4WindowingEnvironmentKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@WindowingEnvironment@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowingEnvironment@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~WindowingEnvironment();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectWindowingEnvironmentChanged@WindowingEnvironment@WindowManagement@UI@Windows@@AEAAJXZ
    long ConnectWindowingEnvironmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentModelChanged@WindowingEnvironment@WindowManagement@UI@Windows@@AEAAJPEAUIWindowingEnvironmentModelBroker@1ApplicationModel@Internal@4@PEAUIInspectable@@@Z
    long OnWindowingEnvironmentModelChanged(WindissectOpaque *, IInspectable *);
};
} // namespace Windows::UI::WindowManagement
