#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowClientRegistrarProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterComplete@WindowClientRegistrarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientPrincipal@2345@@Z
    virtual long RegisterComplete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterComplete@WindowClientRegistrarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientPrincipal@2345@@Z
    virtual long UnregisterComplete(WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
