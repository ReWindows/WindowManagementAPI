#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 19 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalAppModelStaticsProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromWindowId@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJUWindowId@2345@PEAPEAUIUniversalAppModel@2345@@Z
    long GetFromWindowId(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxy@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@SA?AV?$ComPtr@VUniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLayoutCompleted@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@@Z
    long RaiseLayoutCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@W4UniversalPropertyId@2345@PEAUIInspectable@@@Z
    long RaiseUniversalPropertyChanged(WindissectOpaque *, int, IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestedComplete@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@I_N@Z
    virtual long CloseRequestedComplete(WindissectOpaque const &, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeActivationRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoActivationRequestProxy@2345@@Z
    virtual long OnInvokeActivationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeApplySettingsRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplySettingsRequestProxy@2345@@Z
    virtual long OnInvokeApplySettingsRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeBackRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoBackRequestProxy@2345@@Z
    virtual long OnInvokeBackRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeClearPersistedStateRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoClearPersistedStateRequestProxy@2345@@Z
    virtual long OnInvokeClearPersistedStateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeConsolidateRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoConsolidateRequestProxy@2345@@Z
    virtual long OnInvokeConsolidateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeHideRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoHideRequestProxy@2345@@Z
    virtual long OnInvokeHideRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoShowRequestProxy@2345@@Z
    virtual long OnInvokeShowRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeShowStandardSystemOverlaysRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoShowStandardSystemOverlaysRequestProxy@2345@@Z
    virtual long OnInvokeShowStandardSystemOverlaysRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeSwitchRequested@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSwitchRequestProxy@2345@@Z
    virtual long OnInvokeSwitchRequested(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityComplete@UniversalAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@I_N@Z
    virtual long SetVisibilityComplete(WindissectOpaque const &, unsigned int, bool);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
