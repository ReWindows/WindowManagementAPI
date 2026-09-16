#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 43 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class PropertyStoreInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorker@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long ClearWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z
    virtual long Insert(HSTRING__*, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(HSTRING__*, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MapChanged@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$MapChangedEventHandler@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_MapChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MapChanged@PropertyStoreInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MapChanged(EventRegistrationToken);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
