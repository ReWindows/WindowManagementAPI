#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 11 member(s).
namespace Microsoft::Bamo::Lib::WindowManagement_AutoBamos {
class BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoProxyImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoList_Windows_Internal_ApplicationModel_WindowManagement_WindowPrincipal_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Microsoft::Bamo::Lib::WindowManagement_AutoBamos
