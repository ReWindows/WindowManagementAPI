#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 29 member(s).
namespace Windows::UI::WindowManagement {
class WindowInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowInfo@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@WindowInfo@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@WindowInfo@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowInfo@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowInfo@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowInfo@WindowManagement@UI@Windows@@QEAAJPEAUIWindowInfoBroker@2ApplicationModel@Internal@4@UWindowId@34@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::UI::WindowId);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowInfo@WindowManagement@UI@Windows@@QEAA@XZ
    WindowInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelIdDetails@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelIdDetails(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@WindowInfo@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowInfo@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~WindowInfo();
};
} // namespace Windows::UI::WindowManagement
