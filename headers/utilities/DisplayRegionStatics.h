#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 37 member(s).
namespace Windows::UI::WindowManagement {
class DisplayRegionStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayRegionStatics@WindowManagement@UI@Windows@@QEAA@XZ
    DisplayRegionStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegion@DisplayRegionStatics@WindowManagement@UI@Windows@@SAJPEAUIDisplayRegionModelBroker@WindowingEnvironment@ApplicationModel@Internal@4@PEAPEAUIDisplayRegion@234@@Z
    static long GetDisplayRegion(::Windows::Internal::ApplicationModel::WindowingEnvironment::IDisplayRegionModelBroker *, ::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegion@DisplayRegionStatics@WindowManagement@UI@Windows@@SAJHPEAPEAUIDisplayRegion@234@@Z
    static long GetDisplayRegion(int, ::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegion@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@4@PEAPEAUIInspectable@@@Z
    virtual long GetDisplayRegion(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUIContext@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJPEAUIUIContext@34@PEAPEAUIDisplayRegion@234@@Z
    virtual long GetForUIContext(::Windows::UI::IUIContext *, ::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegionsForWindowId@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJIPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@4@@Z
    virtual long GetRegionsForWindowId(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DisplayRegionStatics@WindowManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@DisplayRegionStatics@WindowManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayRegionStatics@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDisplayRegion@DisplayRegionStatics@WindowManagement@UI@Windows@@SAJH@Z
    static long RemoveDisplayRegion(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayRegionStatics@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~DisplayRegionStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotification@DisplayRegionStatics@WindowManagement@UI@Windows@@CAX_N@Z
    static void AppStateChangeNotification(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotificationRoutine@DisplayRegionStatics@WindowManagement@UI@Windows@@CAXEPEAX0@Z
    static void AppStateChangeNotificationRoutine(unsigned char, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPsmEvents@DisplayRegionStatics@WindowManagement@UI@Windows@@CAJXZ
    static long ConnectPsmEvents();
};
} // namespace Windows::UI::WindowManagement
