#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CPresentationChangingEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CPresentationChangingEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIDeferral@Foundation@5@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPresentationChangingEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~CPresentationChangingEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
