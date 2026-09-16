#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CoreApplicationViewClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationLoading@CoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationLoading(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationUnloaded@CoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationUnloaded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationLoading@CoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationLoading(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationUnloaded@CoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationUnloaded(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~CoreApplicationViewClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
