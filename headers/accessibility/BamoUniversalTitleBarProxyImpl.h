#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 27 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoUniversalTitleBarProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonBackgroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonForegroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonHoverBackgroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonHoverBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonHoverForegroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonHoverForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonInactiveBackgroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonInactiveBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonInactiveForegroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonInactiveForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPressedBackgroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonPressedBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonPressedForegroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateButtonPressedForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtendsContentIntoTitleBar@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_N0@Z
    long UpdateExtendsContentIntoTitleBar(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInactiveBackgroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateInactiveBackgroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInactiveForegroundColor@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NPEBUNullableColor@3456@@Z
    long UpdateInactiveForegroundColor(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreferredVisibility@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_NW4ApplicationWindowTitleBarVisibilityInternal@3456@@Z
    long UpdatePreferredVisibility(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeightRemoteCache@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateHeightRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsVisibleRemoteCache@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateIsVisibleRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemOverlayLeftInsetRemoteCache@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateSystemOverlayLeftInsetRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemOverlayRightInsetRemoteCache@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateSystemOverlayRightInsetRemoteCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidthRemoteCache@BamoUniversalTitleBarProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void UpdateWidthRemoteCache();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
