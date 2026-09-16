#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 22 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppWindowProxiedIdentityClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerId@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetContainerId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxiedAppId@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetProxiedAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxiedHwnd@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetProxiedHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxiedProcessId@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetProxiedProcessId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerId@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBU_GUID@@@Z
    virtual void SetContainerId(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxiedAppId@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetProxiedAppId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxiedHwnd@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_K@Z
    virtual void SetProxiedHwnd(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxiedProcessId@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_K@Z
    virtual void SetProxiedProcessId(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoAppWindowProxiedIdentityClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppWindowProxiedIdentityClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppWindowProxiedIdentityClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppWindowProxiedIdentityClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppWindowProxiedIdentityClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppWindowProxiedIdentityClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
