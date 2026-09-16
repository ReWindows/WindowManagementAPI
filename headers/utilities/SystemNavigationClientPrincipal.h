#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class SystemNavigationClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@UWindowId@1234@@Z
    SystemNavigationClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~SystemNavigationClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@SystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBack@SystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@_K@Z
    virtual long RequestBack(WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@SystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@_K@Z
    virtual long RequestClose(WindissectOpaque *, uint64_t);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
