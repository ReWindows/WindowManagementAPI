#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 18 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowStaticsProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowById@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJUWindowId@2345@PEAPEAUIWindow@2345@@Z
    long FindWindowById(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxy@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@SA?AV?$ComPtr@VWindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsForOrderRegion@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJW4WindowOrderRegion@2345@PEAIPEAPEAUWindowId@2345@@Z
    long GetWindowsForOrderRegion(int, unsigned int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseForegroundChanged@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@0@Z
    long RaiseForegroundChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOcclusionChanged@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@W4WindowOcclusion@2345@@Z
    long RaiseOcclusionChanged(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTouchInputRoutingInfoChanged@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@@Z
    long RaiseTouchInputRoutingInfoChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowWatcher@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindowWatcher@2345@@Z
    long RemoveWindowWatcher(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WindowStaticsProxy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowStaticsProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowComplete@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@I_N@Z
    virtual long DestroyWindowComplete(WindissectOpaque const &, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundWindowChanged@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnForegroundWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeWindowOrderRegionChanged@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4WindowOrderRegion@2345@PEBUWindowId@2345@I@Z
    virtual long OnInvokeWindowOrderRegionChanged(int, WindissectOpaque const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAdded@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVWindowProxy@2345@@Z
    virtual long OnWindowAdded(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowRemoved@WindowStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVWindowProxy@2345@@Z
    virtual long OnWindowRemoved(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
