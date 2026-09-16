#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowListProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInserted@WindowListProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJI@Z
    virtual long OnInserted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoved@WindowListProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJIPEAVBamoWindowProxy@2345@@Z
    virtual long OnRemoved(unsigned int, WindissectOpaque *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
