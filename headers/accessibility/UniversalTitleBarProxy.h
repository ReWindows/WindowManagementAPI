#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 18 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class UniversalTitleBarProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    UniversalTitleBarProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonBackgroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonForegroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonForegroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonHoverBackgroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonHoverBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonHoverForegroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonHoverForegroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonInactiveBackgroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonInactiveBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonInactiveForegroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonInactiveForegroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressedBackgroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonPressedBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressedForegroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnButtonPressedForegroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendsContentIntoTitleBarChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnExtendsContentIntoTitleBarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnForegroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInactiveBackgroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnInactiveBackgroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInactiveForegroundColorChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnInactiveForegroundColorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredVisibilityChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnPreferredVisibilityChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@UniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJW4UniversalPropertyId@2345@PEAUIInspectable@@@Z
    long RaiseUniversalPropertyChanged(int, IInspectable *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
