#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewActivationRequestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@AppViewActivationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_NAEBUAppViewId@2345@PEBUDisplayRegionId@WindowingEnvironment@345@II0IPEBG@Z
    virtual long InvokeComplete(bool, WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int, unsigned int, bool, unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewActivationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewActivationRequestProxy();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
