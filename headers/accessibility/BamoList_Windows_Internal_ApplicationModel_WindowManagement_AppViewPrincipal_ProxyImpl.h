#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::WindowManagement_AutoBamos {
class BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoProxy@56@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@36@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteReplace(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoList_Windows_Internal_ApplicationModel_WindowManagement_AppViewPrincipal_ProxyImpl@WindowManagement_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAVBamoProxyImpl@36@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::WindowManagement_AutoBamos
