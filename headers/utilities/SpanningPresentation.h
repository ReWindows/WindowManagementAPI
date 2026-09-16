#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 30 member(s).
namespace Windows::UI::WindowManagement {
class SpanningPresentation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpanningPresentation@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SpanningPresentation@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SpanningPresentation@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpanningRects@SpanningPresentation@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long GetSpanningRects(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SpanningPresentation@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SpanningPresentation@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SpanningPresentation@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpanningPresentation@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpanningPresentation@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpanningPresentation@WindowManagement@UI@Windows@@QEAAJPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@4@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpanningPresentation@WindowManagement@UI@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SpanningPresentation@WindowManagement@UI@Windows@@QEAA@XZ
    SpanningPresentation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpanningPresentation@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~SpanningPresentation();
};
} // namespace Windows::UI::WindowManagement
