#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class HoloViewClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameworkViewType@HoloViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelFrameworkKind@2345@@Z
    virtual long get_FrameworkViewType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewPresentationMode@HoloViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppModelHolographicPresentationMode@2345@@Z
    virtual long get_ViewPresentationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FrameworkViewType@HoloViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4AppModelFrameworkKind@2345@@Z
    virtual long put_FrameworkViewType(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HoloViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~HoloViewClientAdapter();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
