#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 30 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewApplySettingsRequestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_NI@Z
    virtual long InvokeComplete(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewApplySettingsRequestProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertAppStreamingChromeSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@_N111111@Z
    virtual long OnInsertAppStreamingChromeSetting(WindissectOpaque const &, bool, bool, bool, bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertAppStreamingPositionerSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@PEBW4AppStreamingPositionerSettings@WindowingEnvironment@345@IAEBUSize@Foundation@5@AEBUPoint@Foundation@5@AEBURect@Foundation@5@H_N5W4ShowModeInternal@8345@@Z
    virtual long OnInsertAppStreamingPositionerSetting(WindissectOpaque const &, int const *, unsigned int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertCompactOverlayPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertCompactOverlayPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertDefaultPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertDefaultPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertDisplayRegionRelativePositionSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@AEBUDisplayRegionId@WindowingEnvironment@345@AEBUPoint@Foundation@5@@Z
    virtual long OnInsertDisplayRegionRelativePositionSetting(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertDisplayRegionsSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@PEBUDisplayRegionId@WindowingEnvironment@345@I@Z
    virtual long OnInsertDisplayRegionsSetting(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertFullscreenPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@_N@Z
    virtual long OnInsertFullscreenPresenterSetting(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertIconSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@PEBEI@Z
    virtual long OnInsertIconSetting(WindissectOpaque const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertMaximizedPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertMaximizedPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertOverlappedPositionerSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertOverlappedPositionerSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertPositionAndSizeWithContextSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@AEBUDisplayRegionId@WindowingEnvironment@345@AEBUPoint@Foundation@5@AEBUSize@Foundation@5@123@Z
    virtual long OnInsertPositionAndSizeWithContextSetting(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &, WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertPreferredTopMostZOrderSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertPreferredTopMostZOrderSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertProjectionPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@PEBG@Z
    virtual long OnInsertProjectionPresenterSetting(WindissectOpaque const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertRelativeZOrderBeneathSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@0@Z
    virtual long OnInsertRelativeZOrderBeneathSetting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSecondaryIconSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@PEBEI@Z
    virtual long OnInsertSecondaryIconSetting(WindissectOpaque const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSizeSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@AEBUSize@Foundation@5@@Z
    virtual long OnInsertSizeSetting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSnappedPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertSnappedPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSpanningFullscreenPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@_N@Z
    virtual long OnInsertSpanningFullscreenPresenterSetting(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSpanningPresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@W4SpanningPresenterLayoutKind@WindowingEnvironment@345@W4SpanningPresenterAffinityKind@8345@@Z
    virtual long OnInsertSpanningPresenterSetting(WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSupplementalPanePresenterSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertSupplementalPanePresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertThumbnailSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@PEBEI@Z
    virtual long OnInsertThumbnailSetting(WindissectOpaque const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertViewAdjacentPositionSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@0AEBUWindowId@2345@@Z
    virtual long OnInsertViewAdjacentPositionSetting(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertViewRelativePositionSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@0AEBUWindowId@2345@AEBUPoint@Foundation@5@_NW4BoundsPreferenceInternal@WindowingEnvironment@345@33@Z
    virtual long OnInsertViewRelativePositionSetting(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, bool, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertWindowingEnvironmentSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUAppViewId@2345@@Z
    virtual long OnInsertWindowingEnvironmentSetting(WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushSettings@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long FlushSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSetting@AppViewApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJUAppViewId@2345@PEAUISetting@WindowingEnvironment@345@@Z
    long OnInsertSetting(WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
