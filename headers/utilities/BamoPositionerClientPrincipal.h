#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 59 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoPositionerClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastClearPersistedState@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long BroadcastClearPersistedState(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveAdjacentToWindow@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@@Z
    virtual long BroadcastRequestMoveAdjacentToWindow(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveRelativeToDisplayRegion@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@345@AEBUPoint@Foundation@5@@Z
    virtual long BroadcastRequestMoveRelativeToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveRelativeToWindow@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@AEBUPoint@Foundation@5@@Z
    virtual long BroadcastRequestMoveRelativeToWindow(uint64_t, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestMoveToDisplayRegion@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long BroadcastRequestMoveToDisplayRegion(uint64_t, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestSetPreferredTopMost@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long BroadcastRequestSetPreferredTopMost(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestSetRelativeZOrderBeneath@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@@Z
    virtual long BroadcastRequestSetRelativeZOrderBeneath(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestSetSize@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUSize@Foundation@5@@Z
    virtual long BroadcastRequestSetSize(uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastTrySetTopMost@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_N@Z
    virtual long BroadcastTrySetTopMost(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideInTaskSwitcher@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetHideInTaskSwitcher();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDisabled@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMaximizable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMaximizable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMinimizable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMinimizable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMovable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsMovable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPopup@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsProxied@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsProxied();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsResizable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsResizable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32NoActivate@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWin32NoActivate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32ToolWindow@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWin32ToolWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32TopLevelAppWindow@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsWin32TopLevelAppWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedStateId@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetPersistedStateId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferDisableSystemUXPolicy@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetPreferDisableSystemUXPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteConfigurationDescription@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetRemoteConfigurationDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteConfigurationName@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetRemoteConfigurationName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldSuppressCaptionControls@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetShouldSuppressCaptionControls();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHideInTaskSwitcher@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetHideInTaskSwitcher(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDisabled@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsDisabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMaximizable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsMaximizable(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMinimizable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsMinimizable(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMovable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsMovable(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPopup@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsPopup(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsProxied@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsProxied(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsResizable@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsResizable(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWin32NoActivate@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsWin32NoActivate(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWin32ToolWindow@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsWin32ToolWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWin32TopLevelAppWindow@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsWin32TopLevelAppWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPersistedStateId@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetPersistedStateId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferDisableSystemUXPolicy@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetPreferDisableSystemUXPolicy(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteConfigurationDescription@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetRemoteConfigurationDescription(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteConfigurationName@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetRemoteConfigurationName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShouldSuppressCaptionControls@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetShouldSuppressCaptionControls(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoPositionerClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionIdsChanged@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnDisplayRegionIdsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionIdsChanging@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@PEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_DisplayRegionId_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnDisplayRegionIdsChanging(WindissectOpaque *, ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_DisplayRegionId_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentIdChanged@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@@Z
    virtual long OnWindowingEnvironmentIdChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentIdChanging@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPositionerClientStub@2345@AEBUWindowingEnvironmentId@WindowingEnvironment@345@@Z
    virtual long OnWindowingEnvironmentIdChanging(WindissectOpaque *, ::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPositionerClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
