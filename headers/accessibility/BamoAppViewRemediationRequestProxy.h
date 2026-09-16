#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewRemediationRequestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppView@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewProxy@2345@XZ
    virtual WindissectOpaque * GetAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorCode@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetErrorCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestId@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetRequestId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long InvokeComplete(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanged@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewChanging@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewProxy@2345@@Z
    virtual long OnAppViewChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnErrorCodeChanged@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnErrorCodeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnErrorCodeChanging@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJI@Z
    virtual long OnErrorCodeChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanged@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnRequestIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestIdChanging@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnRequestIdChanging(uint64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewRemediationRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
