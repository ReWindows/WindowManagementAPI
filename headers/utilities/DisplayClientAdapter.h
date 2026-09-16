#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 16 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class DisplayClientAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    DisplayClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyScaleChanged@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long NotifyScaleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long OnOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScaleChanged@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ScaleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRotationPreferences@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long get_AutoRotationPreferences(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long get_CurrentOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAM@Z
    virtual long get_DisplayScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeOrientation@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long get_NativeOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAM@Z
    virtual long get_RasterizationScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRotationPreferences@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long put_AutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScaleChanged@DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScaleChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~DisplayClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
