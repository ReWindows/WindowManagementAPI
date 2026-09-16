#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 27 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoWindowManagementProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewStatics@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppViewStaticsProxy@2345@XZ
    virtual WindissectOpaque * GetAppViewStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreAppModelStatics@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoCoreAppModelStaticsProxy@2345@XZ
    virtual WindissectOpaque * GetCoreAppModelStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniversalAppModelStatics@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoUniversalAppModelStaticsProxy@2345@XZ
    virtual WindissectOpaque * GetUniversalAppModelStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowClientRegistrar@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowClientRegistrarProxy@2345@XZ
    virtual WindissectOpaque * GetWindowClientRegistrar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowStatics@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowStaticsProxy@2345@XZ
    virtual WindissectOpaque * GetWindowStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewStaticsChanged@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppViewStaticsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewStaticsChanging@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppViewStaticsProxy@2345@@Z
    virtual long OnAppViewStaticsChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreAppModelStaticsChanged@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnCoreAppModelStaticsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreAppModelStaticsChanging@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoCoreAppModelStaticsProxy@2345@@Z
    virtual long OnCoreAppModelStaticsChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniversalAppModelStaticsChanged@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnUniversalAppModelStaticsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniversalAppModelStaticsChanging@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoUniversalAppModelStaticsProxy@2345@@Z
    virtual long OnUniversalAppModelStaticsChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientRegistrarChanged@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowClientRegistrarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientRegistrarChanging@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientRegistrarProxy@2345@@Z
    virtual long OnWindowClientRegistrarChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStaticsChanged@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowStaticsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStaticsChanging@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowStaticsProxy@2345@@Z
    virtual long OnWindowStaticsChanging(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoWindowManagementProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
