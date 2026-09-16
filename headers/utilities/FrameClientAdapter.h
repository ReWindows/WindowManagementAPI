#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 5 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class FrameClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Style@FrameClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationWindowFrameStyleInternal@2345@@Z
    virtual long get_Style(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Style@FrameClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4ApplicationWindowFrameStyleInternal@2345@@Z
    virtual long put_Style(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~FrameClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
