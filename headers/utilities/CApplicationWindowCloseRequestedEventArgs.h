#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 19 member(s).
class CApplicationWindowCloseRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationWindowCloseRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationWindowCloseRequestedEventArgs@@QEAA@XZ
    CApplicationWindowCloseRequestedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CApplicationWindowCloseRequestedEventArgs@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationWindowCloseRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationWindowCloseRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationWindowCloseRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationWindowCloseRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationWindowCloseRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@CApplicationWindowCloseRequestedEventArgs@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@CApplicationWindowCloseRequestedEventArgs@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationWindowCloseRequestedEventArgs@@UEAA@XZ
    virtual ~CApplicationWindowCloseRequestedEventArgs();
};
