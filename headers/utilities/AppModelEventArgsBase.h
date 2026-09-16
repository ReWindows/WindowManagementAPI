#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 2 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppModelEventArgsBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@AppModelEventArgsBase@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUWindowId@2345@@Z
    virtual long get_WindowId(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppModelEventArgsBase@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    ~AppModelEventArgsBase();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
