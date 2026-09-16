#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CoreAppModelStaticsProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxy@CoreAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@SA?AV?$ComPtr@VCoreAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCorePropertyChanged@CoreAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAUIWindow@2345@W4CorePropertyId@2345@PEAUIInspectable@@@Z
    long RaiseCorePropertyChanged(WindissectOpaque *, int, IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CoreAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CoreAppModelStaticsProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnDisconnected();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
