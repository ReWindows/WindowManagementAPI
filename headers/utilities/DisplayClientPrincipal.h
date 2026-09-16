#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class DisplayClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@UWindowId@1234@@Z
    DisplayClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~DisplayClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentOrientationChanged@DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnCurrentOrientationChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayScaleChanged@DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnDisplayScaleChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNativeOrientationChanged@DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnNativeOrientationChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRasterizationScaleChanged@DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnRasterizationScaleChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@DisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
