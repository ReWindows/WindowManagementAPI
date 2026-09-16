#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalFrameProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStyleChanged@UniversalFrameProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnStyleChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@UniversalFrameProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJW4UniversalPropertyId@2345@PEAUIInspectable@@@Z
    long RaiseUniversalPropertyChanged(int, IInspectable *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
