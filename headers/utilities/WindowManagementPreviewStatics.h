#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 30 member(s).
namespace Windows::UI::WindowManagement::Preview {
class WindowManagementPreviewStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForContainerIdAndHwnd@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJU_GUID@@_KPEAUWindowId@45@@Z
    virtual long GetForContainerIdAndHwnd(_GUID, uint64_t, ::Windows::UI::WindowId *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@UEAAJPEAUIAppWindow@345@USize@Foundation@5@@Z
    virtual long SetPreferredMinSize(::Windows::UI::WindowManagement::IAppWindow *, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@QEAA@XZ
    WindowManagementPreviewStatics();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowManagementPreviewBroker@WindowManagementPreviewStatics@Preview@WindowManagement@UI@Windows@@AEAAJPEAPEAUIWindowManagementPreviewBroker@3ApplicationModel@Internal@5@@Z
    long GetWindowManagementPreviewBroker(WindissectOpaque * *);
};
} // namespace Windows::UI::WindowManagement::Preview
