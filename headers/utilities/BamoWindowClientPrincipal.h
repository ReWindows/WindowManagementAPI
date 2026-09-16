#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 77 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoWindowClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@PEAVBamoConnection@WindowManagement_AutoBamos@@@Z
    BamoWindowClientPrincipal(::WindowManagement_AutoBamos::BamoConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastConsolidate@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_K@Z
    virtual long BroadcastConsolidate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastHide@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KW4HideOptions@2345@@Z
    virtual long BroadcastHide(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastShow@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KAEBUWindowId@2345@W4AppWindowShowOptionsInternal@2345@@Z
    virtual long BroadcastShow(uint64_t, WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppActivation@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppActivationClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetAppActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowProxiedIdentity@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoAppWindowProxiedIdentityClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetAppWindowProxiedIdentity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationView@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoApplicationViewClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetApplicationView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplay@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoDisplayClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetDisplay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrame@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoFrameClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkKind@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelFrameworkKind@2345@XZ
    virtual int GetFrameworkKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUWindowId@2345@XZ
    virtual WindissectOpaque const & GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInput@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoInputClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetInput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPresenting@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsPresenting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKind@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ClientKind@2345@XZ
    virtual int GetKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositioner@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoPositionerClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetPositioner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredMaxSize@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetPreferredMaxSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredMinSize@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUSize@Foundation@5@XZ
    virtual WindissectOpaque const & GetPreferredMinSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredScale@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetPreferredScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresenter@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoPresenterClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetPresenter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemNavigation@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoSystemNavigationClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetSystemNavigation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadId@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAIXZ
    virtual unsigned int GetThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetTitle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBar@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoTitleBarClientPrincipal@2345@XZ
    virtual WindissectOpaque * GetTitleBar();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppActivation@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoAppActivationClientPrincipal@2345@@Z
    virtual void SetAppActivation(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowProxiedIdentity@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoAppWindowProxiedIdentityClientPrincipal@2345@@Z
    virtual void SetAppWindowProxiedIdentity(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationView@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoApplicationViewClientPrincipal@2345@@Z
    virtual void SetApplicationView(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplay@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoDisplayClientPrincipal@2345@@Z
    virtual void SetDisplay(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrame@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoFrameClientPrincipal@2345@@Z
    virtual void SetFrame(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameworkKind@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4AppModelFrameworkKind@2345@@Z
    virtual void SetFrameworkKind(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUWindowId@2345@@Z
    virtual void SetId(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInput@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoInputClientPrincipal@2345@@Z
    virtual void SetInput(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPresenting@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsPresenting(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKind@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4ClientKind@2345@@Z
    virtual void SetKind(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositioner@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoPositionerClientPrincipal@2345@@Z
    virtual void SetPositioner(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMaxSize@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUSize@Foundation@5@@Z
    virtual void SetPreferredMaxSize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUSize@Foundation@5@@Z
    virtual void SetPreferredMinSize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredScale@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXI@Z
    virtual void SetPreferredScale(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresenter@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoPresenterClientPrincipal@2345@@Z
    virtual void SetPresenter(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessId@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXI@Z
    virtual void SetProcessId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemNavigation@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoSystemNavigationClientPrincipal@2345@@Z
    virtual void SetSystemNavigation(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadId@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXI@Z
    virtual void SetThreadId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitleBar@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoTitleBarClientPrincipal@2345@@Z
    virtual void SetTitleBar(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoWindowClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewIdChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnAppViewIdChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppViewIdChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@AEBUAppViewId@2345@@Z
    virtual long OnAppViewIdChanging(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnBoundsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@AEBURect@Foundation@5@@Z
    virtual long OnBoundsChanging(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCloakedChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnIsCloakedChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCloakedChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_N@Z
    virtual long OnIsCloakedChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMinimizedChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnIsMinimizedChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMinimizedChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_N@Z
    virtual long OnIsMinimizedChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTopMostChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnIsTopMostChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTopMostChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@_N@Z
    virtual long OnIsTopMostChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnOcclusionChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@W4WindowOcclusion@2345@@Z
    virtual long OnOcclusionChanging(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlacementChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnPlacementChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlacementChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@AEBUAppModelPlacement@2345@@Z
    virtual long OnPlacementChanging(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryDisplayRegionChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnPrimaryDisplayRegionChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryDisplayRegionChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@AEBUDisplayRegionId@WindowingEnvironment@345@@Z
    virtual long OnPrimaryDisplayRegionChanging(WindissectOpaque *, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChanged@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@@Z
    virtual long OnVisibleBoundsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChanging@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowClientStub@2345@AEBURect@Foundation@5@@Z
    virtual long OnVisibleBoundsChanging(WindissectOpaque *, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAA@XZ
    virtual ~BamoWindowClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoWindowClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
