#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ImmersiveAppModelProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@ImmersiveAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIAppView@2345@@Z
    long SetRoot(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImmersiveAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ImmersiveAppModelProxy();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
