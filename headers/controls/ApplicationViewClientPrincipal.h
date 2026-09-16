#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ApplicationViewClientPrincipal {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationViewClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToLeftDisplayEdgeChanged@ApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnAdjacentToLeftDisplayEdgeChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToRightDisplayEdgeChanged@ApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnAdjacentToRightDisplayEdgeChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@ApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchViewComplete@ApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@_K_N@Z
    virtual long SwitchViewComplete(WindissectOpaque *, uint64_t, bool);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
