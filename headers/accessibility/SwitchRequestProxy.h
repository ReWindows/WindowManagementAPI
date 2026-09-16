#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class SwitchRequestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@SwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwitchRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~SwitchRequestProxy();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
