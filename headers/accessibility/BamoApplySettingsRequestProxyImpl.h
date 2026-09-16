#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 14 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoApplySettingsRequestProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long InvokeComplete(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertAppStreamingPositionerSetting@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBUWindowId@3456@PEBW4AppStreamingPositionerSettings@WindowingEnvironment@456@IPEBUSize@Foundation@6@PEBUPoint@Foundation@6@PEBURect@Foundation@6@H_N5W4ShowModeInternal@9456@@Z
    long OnInsertAppStreamingPositionerSetting(WindissectOpaque const *, int const *, unsigned int, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, int, bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequestId@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N_K@Z
    long UpdateRequestId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindow@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NI@Z
    long UpdateWindow(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowingEnvironmentId@BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUWindowingEnvironmentId@WindowingEnvironment@456@@Z
    long UpdateWindowingEnvironmentId(bool, ::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoApplySettingsRequestProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~BamoApplySettingsRequestProxyImpl();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
