#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CoreAppModelProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIAppView@2345@@Z
    long SetRoot(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~CoreAppModelProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@CoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnVisibilityChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCorePropertyChanged@CoreAppModelProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJW4CorePropertyId@2345@PEAUIInspectable@@@Z
    long RaiseCorePropertyChanged(int, IInspectable *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
