#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 27 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowFrame {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppWindowFrame@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowFrame@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindowFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStyle@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJPEAW4AppWindowFrameStyle@234@@Z
    virtual long GetFrameStyle(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppWindowFrame@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppWindowFrame@WindowManagement@UI@Windows@@QEAAJPEAUIFrameClientAdapter@2ApplicationModel@Internal@4@PEAVAppWindow@234@PEAUICoreApplicationViewTitleBar@Core@64@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::UI::WindowManagement::AppWindow *, ::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragRegion@AppWindowFrame@WindowManagement@UI@Windows@@QEAAJPEAUIVisualElement@Composition@34@@Z
    long SetDragRegion(::Windows::UI::Composition::IVisualElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameStyle@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJW4AppWindowFrameStyle@234@@Z
    virtual long SetFrameStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragRegionVisuals@AppWindowFrame@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAUIVisualElement@Composition@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long get_DragRegionVisuals(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowFrame@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowFrame();
};
} // namespace Windows::UI::WindowManagement
