#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class EventArgsBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventListenerDecrement@EventArgsBase@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long EventListenerDecrement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventListenerIncrement@EventArgsBase@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long EventListenerIncrement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDispatchedEventHandler@EventArgsBase@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIDispatchedEventHandler@2345@@Z
    virtual long SetDispatchedEventHandler(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchCompleted@EventArgsBase@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long DispatchCompleted();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
