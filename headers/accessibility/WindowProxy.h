#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@WindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAPEAUIWindow@2345@@Z
    long GetOwner(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionChanged@WindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnOcclusionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchInputRoutingInfoChanged@WindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnTouchInputRoutingInfoChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@WindowProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnVisibilityChanged();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
