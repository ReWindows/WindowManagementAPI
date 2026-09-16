#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewApplySettingsRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironmentId@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUWindowingEnvironmentId@WindowingEnvironment@345@XZ
    virtual ::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId const & GetWindowingEnvironmentId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_NI@Z
    virtual long InvokeComplete(bool, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentIdChanged@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowingEnvironmentIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentIdChanging@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowingEnvironmentId@WindowingEnvironment@345@@Z
    virtual long OnWindowingEnvironmentIdChanging(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
