#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 14 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowClientPrincipal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long Unregister();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@W4ClientKind@1234@UWindowId@1234@@Z
    WindowClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, int, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Closed@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long Closed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidated@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_KW4AppModelConsolidationStatus@2345@@Z
    virtual long Consolidated(WindissectOpaque *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideComplete@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_K_N@Z
    virtual long HideComplete(WindissectOpaque *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewIdChanged@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnAppViewIdChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanged@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnBoundsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_N@Z
    virtual long Present(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowComplete@WindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_K_N@Z
    virtual long ShowComplete(WindissectOpaque *, uint64_t, bool);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
