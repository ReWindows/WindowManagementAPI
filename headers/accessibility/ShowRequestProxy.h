#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ShowRequestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@ShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ShowRequestProxy();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
