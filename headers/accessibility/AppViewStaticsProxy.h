#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 26 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewStaticsProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    AppViewStaticsProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppViewById@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJUAppViewId@2345@PEAPEAUIAppView@2345@@Z
    long FindAppViewById(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxy@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@SA?AV?$ComPtr@VAppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLayoutCompleted@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIAppView@2345@@Z
    long RaiseLayoutCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIAppView@2345@W4UniversalPropertyId@2345@PEAUIInspectable@@@Z
    long RaiseUniversalPropertyChanged(WindissectOpaque *, int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAppViewWatcher@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIAppViewWatcher@2345@@Z
    long RemoveAppViewWatcher(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewStaticsProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewAdded@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVAppViewProxy@2345@@Z
    virtual long OnAppViewAdded(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewRemoved@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVAppViewProxy@2345@@Z
    virtual long OnAppViewRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeActivationRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewActivationRequestProxy@2345@@Z
    virtual long OnInvokeActivationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeActivationShowRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewActivationShowRequestProxy@2345@@Z
    virtual long OnInvokeActivationShowRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeApplySettingsRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewApplySettingsRequestProxy@2345@@Z
    virtual long OnInvokeApplySettingsRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeBackRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewBackRequestProxy@2345@@Z
    virtual long OnInvokeBackRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeClearPersistedStateRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewClearPersistedStateRequestProxy@2345@@Z
    virtual long OnInvokeClearPersistedStateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeConsolidateRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewConsolidateRequestProxy@2345@@Z
    virtual long OnInvokeConsolidateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeHideRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewHideRequestProxy@2345@@Z
    virtual long OnInvokeHideRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeHideStatusBarRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewHideStatusBarRequestProxy@2345@@Z
    virtual long OnInvokeHideStatusBarRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeRemediationRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewRemediationRequestProxy@2345@@Z
    virtual long OnInvokeRemediationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewShowRequestProxy@2345@@Z
    virtual long OnInvokeShowRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowStandardSystemOverlaysRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewShowStandardSystemOverlaysRequestProxy@2345@@Z
    virtual long OnInvokeShowStandardSystemOverlaysRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowStatusBarRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewShowStatusBarRequestProxy@2345@@Z
    virtual long OnInvokeShowStatusBarRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeSwitchRequested@AppViewStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewSwitchRequestProxy@2345@@Z
    virtual long OnInvokeSwitchRequested(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
