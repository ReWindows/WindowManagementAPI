#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 18 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoInputClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationObjectId@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetActivationObjectId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchInputRoutingInfo@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUMessageRoutingInfo@2345@XZ
    virtual WindissectOpaque const & GetTouchInputRoutingInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationObjectId@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_K@Z
    virtual void SetActivationObjectId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchInputRoutingInfo@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUMessageRoutingInfo@2345@@Z
    virtual void SetTouchInputRoutingInfo(WindissectOpaque const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoInputClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoInputClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoInputClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoInputClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoInputClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
