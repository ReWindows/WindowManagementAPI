#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 8 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WatcherBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@WatcherBase@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void Abort();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@WatcherBase@WindowManagement@ApplicationModel@Internal@Windows@@QEAA?AW4WatcherStatus@2345@XZ
    int GetStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@WatcherBase@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WatcherBase@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WatcherBase@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WatcherBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionStatus@WatcherBase@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJW4WatcherStatus@2345@@Z
    virtual long TransitionStatus(int);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
