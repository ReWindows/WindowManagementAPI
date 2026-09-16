#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 42 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoApplicationViewClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastShowAsStandaloneView@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@1W4ViewSizePreference@ViewManagement@UI@5@2@Z
    virtual long BroadcastShowAsStandaloneView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastShowAsViewMode@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@W4ApplicationViewMode@ViewManagement@UI@5@AEBUSize@Foundation@5@W4ViewSizePreference@895@@Z
    virtual long BroadcastShowAsViewMode(uint64_t, WindissectOpaque const &, int, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastShowStandardSystemOverlays@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long BroadcastShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSwitchView@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@1I@Z
    virtual long BroadcastSwitchView(uint64_t, WindissectOpaque const &, WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsApplicationMultiviewActivationPolicyEnabled@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsApplicationMultiviewActivationPolicyEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsOnLockScreen@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsOnLockScreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchViewSize@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetPreferredLaunchViewSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchWindowingMode@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationViewWindowingMode@ViewManagement@UI@5@XZ
    virtual int GetPreferredLaunchWindowingMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressSystemOverlays@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4FULL_SCREEN_TYPE@Core@UI@Phone@5@XZ
    virtual int GetSuppressSystemOverlays();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsApplicationMultiviewActivationPolicyEnabled@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsApplicationMultiviewActivationPolicyEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOnLockScreen@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsOnLockScreen(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredLaunchViewSize@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUSize@Foundation@5@@Z
    virtual void SetPreferredLaunchViewSize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredLaunchWindowingMode@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4ApplicationViewWindowingMode@ViewManagement@UI@5@@Z
    virtual void SetPreferredLaunchWindowingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressSystemOverlays@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4FULL_SCREEN_TYPE@Core@UI@Phone@5@@Z
    virtual void SetSuppressSystemOverlays(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToLeftDisplayEdgeChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnAdjacentToLeftDisplayEdgeChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToLeftDisplayEdgeChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@_N@Z
    virtual long OnAdjacentToLeftDisplayEdgeChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToRightDisplayEdgeChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnAdjacentToRightDisplayEdgeChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjacentToRightDisplayEdgeChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@_N@Z
    virtual long OnAdjacentToRightDisplayEdgeChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewModeChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnAppViewModeChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewModeChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@W4ApplicationViewMode@ViewManagement@UI@5@@Z
    virtual long OnAppViewModeChanging(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewStateChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnApplicationViewStateChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewStateChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@W4ApplicationViewState@ViewManagement@UI@5@@Z
    virtual long OnApplicationViewStateChanging(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFullScreenChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnIsFullScreenChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFullScreenChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@_N@Z
    virtual long OnIsFullScreenChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpanningRectsChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnSpanningRectsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpanningRectsChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@PEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnSpanningRectsChanging(WindissectOpaque *, ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserInteractionModeChanged@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@@Z
    virtual long OnUserInteractionModeChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserInteractionModeChanging@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoApplicationViewClientStub@2345@W4UserInteractionMode@ViewManagement@UI@5@@Z
    virtual long OnUserInteractionModeChanging(WindissectOpaque *, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoApplicationViewClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
