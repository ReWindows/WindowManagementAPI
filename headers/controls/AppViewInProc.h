#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 37 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxy@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAPEAVAppViewProxy@2345@@Z
    long GetProxy(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceSet@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@5@@Z
    virtual long SetResourceSet(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementTelemetryFlags@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K0@Z
    virtual long UpdateEngagementTelemetryFlags(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivityImportance@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ActivityImportance(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowRunningConnectedStandBy@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AllowRunningConnectedStandBy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppModel@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIAppModel@2345@@Z
    virtual long get_AppModel(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DehydrationEligibility@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewDehydrationEligibility@2345@@Z
    virtual long get_DehydrationEligibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionState@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewExecutionState@2345@@Z
    virtual long get_ExecutionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ExperienceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_HostId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUAppViewId@2345@@Z
    virtual long get_Id(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputState@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewInputState@2345@@Z
    virtual long get_InputState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visibility@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewVisibility@2345@@Z
    virtual long get_Visibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIWindow@2345@@Z
    virtual long get_Window(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivityImportance@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJI@Z
    virtual long put_ActivityImportance(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowRunningConnectedStandBy@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_AllowRunningConnectedStandBy(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DehydrationEligibility@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4AppViewDehydrationEligibility@2345@@Z
    virtual long put_DehydrationEligibility(int);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
