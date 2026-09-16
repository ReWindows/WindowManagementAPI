#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 34 member(s).
namespace Windows::UI::WindowManagement {
class VisualElementVector {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualElementVector@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAUIVisualElement@Composition@34@@Z
    virtual long Append(::Windows::UI::Composition::IVisualElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@VisualElementVector@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAUIVisualElement@Composition@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@VisualElementVector@WindowManagement@UI@Windows@@UEAAJIPEAPEAUIVisualElement@Composition@34@@Z
    virtual long GetAt(unsigned int, ::Windows::UI::Composition::IVisualElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIVisualElement@Composition@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAUIVisualElement@Composition@34@PEAIPEAE@Z
    virtual long IndexOf(::Windows::UI::Composition::IVisualElement *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@VisualElementVector@WindowManagement@UI@Windows@@UEAAJIPEAUIVisualElement@Composition@34@@Z
    virtual long InsertAt(unsigned int, ::Windows::UI::Composition::IVisualElement *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualElementVector@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualElementVector@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@VisualElementVector@WindowManagement@UI@Windows@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@VisualElementVector@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualElementVector@WindowManagement@UI@Windows@@QEAAJPEAVAppWindowFrame@234@@Z
    long RuntimeClassInitialize(::Windows::UI::WindowManagement::AppWindowFrame *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@VisualElementVector@WindowManagement@UI@Windows@@UEAAJIPEAUIVisualElement@Composition@34@@Z
    virtual long SetAt(unsigned int, ::Windows::UI::Composition::IVisualElement *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualElementVector@WindowManagement@UI@Windows@@QEAA@XZ
    VisualElementVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@VisualElementVector@WindowManagement@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualElementVector@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~VisualElementVector();
};
} // namespace Windows::UI::WindowManagement
