#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 42 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoAppViewProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppModelKind@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppModelKind@2345@XZ
    virtual int GetAppModelKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreAppModel@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoCoreAppModelProxy@2345@XZ
    virtual WindissectOpaque * GetCoreAppModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutionState@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewExecutionState@2345@XZ
    virtual int GetExecutionState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceId@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEBGXZ
    virtual unsigned short const * GetExperienceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostId@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_KXZ
    virtual uint64_t GetHostId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUAppViewId@2345@XZ
    virtual WindissectOpaque const & GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveAppModel@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoImmersiveAppModelProxy@2345@XZ
    virtual WindissectOpaque * GetImmersiveAppModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreen@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoUniversalSplashScreenProxy@2345@XZ
    virtual WindissectOpaque * GetSplashScreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniversalAppModel@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoUniversalAppModelProxy@2345@XZ
    virtual WindissectOpaque * GetUniversalAppModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4AppViewVisibility@2345@XZ
    virtual int GetVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAPEAVBamoWindowProxy@2345@XZ
    virtual WindissectOpaque * GetWindow();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppModelKindChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnAppModelKindChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppModelKindChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppModelKind@2345@@Z
    virtual long OnAppModelKindChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreAppModelChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnCoreAppModelChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreAppModelChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoCoreAppModelProxy@2345@@Z
    virtual long OnCoreAppModelChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExecutionStateChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppViewExecutionState@2345@@Z
    virtual long OnExecutionStateChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExperienceIdChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnExperienceIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExperienceIdChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEBG@Z
    virtual long OnExperienceIdChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostIdChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnHostIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostIdChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_K@Z
    virtual long OnHostIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnIdChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmersiveAppModelChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnImmersiveAppModelChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmersiveAppModelChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoImmersiveAppModelProxy@2345@@Z
    virtual long OnImmersiveAppModelChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplashScreenChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnSplashScreenChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplashScreenChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoUniversalSplashScreenProxy@2345@@Z
    virtual long OnSplashScreenChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniversalAppModelChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnUniversalAppModelChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniversalAppModelChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoUniversalAppModelProxy@2345@@Z
    virtual long OnUniversalAppModelChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4AppViewVisibility@2345@@Z
    virtual long OnVisibilityChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanged@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJXZ
    virtual long OnWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanging@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoWindowProxy@2345@@Z
    virtual long OnWindowChanging(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAppViewProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
