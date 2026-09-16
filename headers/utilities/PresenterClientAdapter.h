#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 8 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class PresenterClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPresentationAsync@PresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@PEAUIPropertySet@Collections@Foundation@5@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestPresentationAsync(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AppliedPresenterChanged@PresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_AppliedPresenterChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@PresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpanningRects@PresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long get_SpanningRects(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AppliedPresenterChanged@PresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AppliedPresenterChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~PresenterClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
