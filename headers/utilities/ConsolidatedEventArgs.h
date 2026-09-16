#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 3 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ConsolidatedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConsolidatedReason@ConsolidatedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ConsolidationStatus@Core@UI@5@@Z
    virtual long get_ConsolidatedReason(int *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
