#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 16 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoFrameClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyle@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationWindowFrameStyleInternal@2345@XZ
    virtual int GetStyle();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStyle@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4ApplicationWindowFrameStyleInternal@2345@@Z
    virtual void SetStyle(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoFrameClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoFrameClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoFrameClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoFrameClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoFrameClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoFrameClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
