#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class SpanningPresenterSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AffinityKind@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4SpanningPresenterAffinityKind@2345@@Z
    virtual long get_AffinityKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LayoutKind@SpanningPresenterSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4SpanningPresenterLayoutKind@2345@@Z
    virtual long get_LayoutKind(int *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
