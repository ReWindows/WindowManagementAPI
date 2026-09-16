#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class PresenterClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@UWindowId@1234@@Z
    PresenterClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~PresenterClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKindChanged@PresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnKindChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@PresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentationComplete@PresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@_K_N@Z
    virtual long PresentationComplete(WindissectOpaque *, uint64_t, bool);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
