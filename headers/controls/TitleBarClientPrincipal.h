#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 10 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class TitleBarClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@UWindowId@1234@@Z
    TitleBarClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~TitleBarClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeightChanged@TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnHeightChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsVisibleChanged@TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnIsVisibleChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemOverlayLeftInsetChanged@TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnSystemOverlayLeftInsetChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemOverlayRightInsetChanged@TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnSystemOverlayRightInsetChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWidthChanged@TitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnWidthChanged(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
