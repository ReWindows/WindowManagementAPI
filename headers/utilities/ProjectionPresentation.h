#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 30 member(s).
namespace Windows::UI::WindowManagement {
class ProjectionPresentation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ProjectionPresentation@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ProjectionPresentation@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProjectionPresentation@WindowManagement@UI@Windows@@QEAA@XZ
    ProjectionPresentation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProjectionPresentation@WindowManagement@UI@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetDisplayMonitorDeviceId@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetDisplayMonitorDeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetDisplayMonitorDeviceId@ProjectionPresentation@WindowManagement@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetDisplayMonitorDeviceId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProjectionPresentation@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~ProjectionPresentation();
};
} // namespace Windows::UI::WindowManagement
