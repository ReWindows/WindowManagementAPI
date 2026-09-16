#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 23 member(s).
namespace Windows::UI::Core::Preview {
class CoreAppWindowPreviewStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@QEAA@XZ
    CoreAppWindowPreviewStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdFromWindow@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAUIAppWindow@WindowManagement@45@PEAH@Z
    virtual long GetIdFromWindow(::Windows::UI::WindowManagement::IAppWindow *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureApplicationWindowLAFIsAvailable@CoreAppWindowPreviewStatics@Preview@Core@UI@Windows@@AEAAJXZ
    long EnsureApplicationWindowLAFIsAvailable();
};
} // namespace Windows::UI::Core::Preview
