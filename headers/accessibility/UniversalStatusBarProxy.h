#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalStatusBarProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundColorChanged@UniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundOpacityChanged@UniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnBackgroundOpacityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundColorChanged@UniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnForegroundColorChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@UniversalStatusBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJW4UniversalPropertyId@2345@PEAUIInspectable@@@Z
    long RaiseUniversalPropertyChanged(int, IInspectable *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
