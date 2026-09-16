#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class CCloseRequestedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCloseRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    CCloseRequestedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@CCloseRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@CCloseRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@CCloseRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCloseRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~CCloseRequestedEventArgs();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
