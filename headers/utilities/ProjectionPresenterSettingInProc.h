#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 23 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class ProjectionPresenterSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAA@XZ
    ProjectionPresenterSettingInProc();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetDisplayMonitorDeviceId@ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetDisplayMonitorDeviceId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProjectionPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ProjectionPresenterSettingInProc();
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
