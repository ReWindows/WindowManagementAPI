#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 15 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class SystemNavigationClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateBackRequest@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long OnNavigateBackRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long RequestClose(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_BackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloseRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CloseRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FirstChanceBackRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_FirstChanceBackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewBackButtonVisibility@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewBackButtonVisibility@Core@UI@5@@Z
    virtual long get_AppViewBackButtonVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHandleCloseRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CanHandleCloseRequested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppViewBackButtonVisibility@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4AppViewBackButtonVisibility@Core@UI@5@@Z
    virtual long put_AppViewBackButtonVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHandleCloseRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_CanHandleCloseRequested(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloseRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloseRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FirstChanceBackRequested@SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FirstChanceBackRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~SystemNavigationClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
