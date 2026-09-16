#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 20 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoSystemNavigationClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastBackComplete@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K_N@Z
    virtual long BroadcastBackComplete(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastCloseComplete@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K_N@Z
    virtual long BroadcastCloseComplete(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppViewBackButtonVisibility@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewBackButtonVisibility@Core@UI@5@XZ
    virtual int GetAppViewBackButtonVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanHandleRequestClose@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetCanHandleRequestClose();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppViewBackButtonVisibility@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4AppViewBackButtonVisibility@Core@UI@5@@Z
    virtual void SetAppViewBackButtonVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCanHandleRequestClose@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetCanHandleRequestClose(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoSystemNavigationClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoSystemNavigationClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemNavigationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
