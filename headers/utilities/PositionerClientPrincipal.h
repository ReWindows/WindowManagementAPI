#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 14 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class PositionerClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@UWindowId@1234@@Z
    PositionerClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~PositionerClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveAdjacentToWindowComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long MoveAdjacentToWindowComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveRelativeToDisplayRegionComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long MoveRelativeToDisplayRegionComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveRelativeToWindowComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long MoveRelativeToWindowComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToDisplayRegionComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long MoveToDisplayRegionComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionIdsChanged@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnDisplayRegionIdsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentIdChanged@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnWindowingEnvironmentIdChanged(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredTopMostComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long SetPreferredTopMostComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeZOrderBeneathComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long SetRelativeZOrderBeneathComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeComplete@PositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@_K_N@Z
    virtual long SetSizeComplete(WindissectOpaque *, uint64_t, bool);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
