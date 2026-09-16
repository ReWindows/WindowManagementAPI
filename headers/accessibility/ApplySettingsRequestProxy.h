#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 30 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class ApplySettingsRequestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComplete@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_NI@Z
    virtual long InvokeComplete(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~ApplySettingsRequestProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertAppStreamingChromeSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@_N111111@Z
    virtual long OnInsertAppStreamingChromeSetting(WindissectOpaque const &, bool, bool, bool, bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertAppStreamingPositionerSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@PEBW4AppStreamingPositionerSettings@WindowingEnvironment@345@IAEBUSize@Foundation@5@AEBUPoint@Foundation@5@AEBURect@Foundation@5@H_N5W4ShowModeInternal@8345@@Z
    virtual long OnInsertAppStreamingPositionerSetting(WindissectOpaque const &, int const *, unsigned int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertCompactOverlayPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertCompactOverlayPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertDefaultPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertDefaultPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertDisplayRegionRelativePositionSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@AEBUDisplayRegionId@WindowingEnvironment@345@AEBUPoint@Foundation@5@@Z
    virtual long OnInsertDisplayRegionRelativePositionSetting(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertDisplayRegionsSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@PEBUDisplayRegionId@WindowingEnvironment@345@I@Z
    virtual long OnInsertDisplayRegionsSetting(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertFullscreenPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@_N@Z
    virtual long OnInsertFullscreenPresenterSetting(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertIconSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@PEBEI@Z
    virtual long OnInsertIconSetting(WindissectOpaque const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertMaximizedPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertMaximizedPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertOverlappedPositionerSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertOverlappedPositionerSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertPositionAndSizeWithContextSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@AEBUDisplayRegionId@WindowingEnvironment@345@AEBUPoint@Foundation@5@AEBUSize@Foundation@5@123@Z
    virtual long OnInsertPositionAndSizeWithContextSetting(WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &, WindissectOpaque const &, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertPreferredTopMostZOrderSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertPreferredTopMostZOrderSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertProjectionPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@PEBG@Z
    virtual long OnInsertProjectionPresenterSetting(WindissectOpaque const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertRelativeZOrderBeneathSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@AEBUAppViewId@2345@@Z
    virtual long OnInsertRelativeZOrderBeneathSetting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSecondaryIconSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@PEBEI@Z
    virtual long OnInsertSecondaryIconSetting(WindissectOpaque const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSizeSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@AEBUSize@Foundation@5@@Z
    virtual long OnInsertSizeSetting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSnappedPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertSnappedPresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSpanningFullscreenPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@_N@Z
    virtual long OnInsertSpanningFullscreenPresenterSetting(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSpanningPresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@W4SpanningPresenterLayoutKind@WindowingEnvironment@345@W4SpanningPresenterAffinityKind@8345@@Z
    virtual long OnInsertSpanningPresenterSetting(WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSupplementalPanePresenterSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertSupplementalPanePresenterSetting(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertThumbnailSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@PEBEI@Z
    virtual long OnInsertThumbnailSetting(WindissectOpaque const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertViewAdjacentPositionSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@AEBUAppViewId@2345@0@Z
    virtual long OnInsertViewAdjacentPositionSetting(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertViewRelativePositionSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@AEBUAppViewId@2345@0AEBUPoint@Foundation@5@_NW4BoundsPreferenceInternal@WindowingEnvironment@345@33@Z
    virtual long OnInsertViewRelativePositionSetting(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, bool, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertWindowingEnvironmentSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUWindowId@2345@@Z
    virtual long OnInsertWindowingEnvironmentSetting(WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushSettings@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long FlushSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsertSetting@ApplySettingsRequestProxy@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJUWindowId@2345@PEAUISetting@WindowingEnvironment@345@@Z
    long OnInsertSetting(WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
