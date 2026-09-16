#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 31 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppActivationClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastActivate@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long BroadcastActivate(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceId@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetExperienceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialBounds@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBURect@Foundation@5@XZ
    virtual WindissectOpaque const & GetInitialBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsComponent@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsComponent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHosted@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsHosted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMain@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTopLevel@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsTopLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExperienceId@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetExperienceId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialBounds@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBURect@Foundation@5@@Z
    virtual void SetInitialBounds(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsComponent@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsComponent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHosted@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsHosted(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMain@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsMain(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTopLevel@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsTopLevel(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoAppActivationClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageLocationChanged@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnImageLocationChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageLocationChanging@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@AEBURect@Foundation@5@@Z
    virtual long OnImageLocationChanging(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDismissedChanged@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnIsDismissedChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDismissedChanging@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@_N@Z
    virtual long OnIsDismissedChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoAppActivationClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppActivationClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
