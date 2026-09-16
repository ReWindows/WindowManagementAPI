#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppActivationClientPrincipal {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppActivationClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateComplete@AppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@_K@Z
    virtual long ActivateComplete(WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageLocationChanged@AppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnImageLocationChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDismissedChanged@AppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnIsDismissedChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@AppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
