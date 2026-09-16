#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 38 member(s).
class CAppWindowChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppWindowChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppWindowChangedEventArgs@@QEAA@XZ
    CAppWindowChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppWindowChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppWindowChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppWindowChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppWindowChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppWindowChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidAvailableWindowPresentationsChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidAvailableWindowPresentationsChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidDisplayRegionsChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidDisplayRegionsChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidFrameChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidFrameChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidOffsetChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidOffsetChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidSizeChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidSizeChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidTitleBarChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidTitleBarChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidTopMostChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidTopMostChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidVisibilityChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidVisibilityChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidVisibilityDetailsChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidVisibilityDetailsChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidWindowPresentationChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidWindowPresentationChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DidWindowingEnvironmentChange@CAppWindowChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_DidWindowingEnvironmentChange(unsigned char *);
};
