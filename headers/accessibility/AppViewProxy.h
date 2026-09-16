#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 5 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@AppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAPEAUIAppView@2345@@Z
    long GetOwner(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExecutionStateChanged@AppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnExecutionStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@AppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnVisibilityChanged();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
