#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 5 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppWindowProxiedIdentityClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@UWindowId@1234@@Z
    AppWindowProxiedIdentityClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppWindowProxiedIdentityClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@AppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppWindowProxiedIdentityClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
