#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 2 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class SettingInProc {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAA@XZ
    SettingInProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@SettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4SettingKind@2345@@Z
    virtual long get_Kind(int *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
