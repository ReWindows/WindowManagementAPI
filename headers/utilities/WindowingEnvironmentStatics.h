#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 62 member(s).
namespace Windows::UI::WindowManagement {
class WindowingEnvironmentStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAll@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVWindowingEnvironment@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAll(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllWithKind@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJW4WindowingEnvironmentKind@234@PEAPEAU?$IVectorView@PEAVWindowingEnvironment@WindowManagement@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllWithKind(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindowId@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetForWindowId(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironment@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@SAJHPEAPEAUIWindowingEnvironment@234@@Z
    static long GetWindowingEnvironment(int, ::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironment@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@SAJPEAUIWindowingEnvironmentModelBroker@WindowingEnvironment@ApplicationModel@Internal@4@PEAPEAUIWindowingEnvironment@234@@Z
    static long GetWindowingEnvironment(::Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModelBroker *, ::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironment@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJUWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@4@PEAPEAUIInspectable@@@Z
    virtual long GetWindowingEnvironment(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowingEnvironment@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@SAJH@Z
    static long RemoveWindowingEnvironment(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowOrder@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJIPEA_K@Z
    virtual long SetWindowOrder(unsigned int, uint64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowingEnvironmentStatics@WindowManagement@UI@Windows@@QEAA@XZ
    WindowingEnvironmentStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Added@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVWindowingEnvironmentAddedEventArgs@WindowManagement@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Added(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Removed@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVWindowingEnvironmentRemovedEventArgs@WindowManagement@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Removed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Added@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Added(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Removed@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Removed(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotification@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAX_N@Z
    static void AppStateChangeNotification(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotificationRoutine@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAXEPEAX0@Z
    static void AppStateChangeNotificationRoutine(unsigned char, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPsmEvents@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJXZ
    static long ConnectPsmEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectWindowingEnvironmentAdded@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJXZ
    static long ConnectWindowingEnvironmentAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectWindowingEnvironmentRemoved@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJXZ
    static long ConnectWindowingEnvironmentRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectWindowingEnvironmentAdded@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJXZ
    static long DisconnectWindowingEnvironmentAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectWindowingEnvironmentRemoved@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJXZ
    static long DisconnectWindowingEnvironmentRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireFindOperation@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJPEAU?$IVectorView@PEAUIWindowingEnvironmentModelBroker@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@4@PEAPEAU?$IVectorView@PEAVWindowingEnvironment@WindowManagement@UI@Windows@@@674@@Z
    static long FireFindOperation(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironmentStaticsBroker@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJPEAPEAUIWindowingEnvironmentStaticsBroker@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    static long GetWindowingEnvironmentStaticsBroker(::Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentStaticsBroker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentModelAdded@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJPEAUIInspectable@@PEAUIWindowingEnvironmentModelEventArgs@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    static long OnWindowingEnvironmentModelAdded(IInspectable *, ::Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModelEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowingEnvironmentModelRemoved@WindowingEnvironmentStatics@WindowManagement@UI@Windows@@CAJPEAUIInspectable@@PEAUIWindowingEnvironmentModelEventArgs@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    static long OnWindowingEnvironmentModelRemoved(IInspectable *, ::Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModelEventArgs *);
};
} // namespace Windows::UI::WindowManagement
