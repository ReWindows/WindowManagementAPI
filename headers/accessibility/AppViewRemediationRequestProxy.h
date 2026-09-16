#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewRemediationRequestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@AppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewRemediationRequestProxy();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
