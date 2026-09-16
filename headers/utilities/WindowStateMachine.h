#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 9 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowStateMachine {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetState@WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXW4WindowState@2345@@Z
    void SetTargetState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowStateMachine();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activating@WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJPEAUIActivationController@Input@4UI@5@PEAUIActivatingEventArgs@7485@@Z
    long Activating(::Windows::UI::Internal::Input::IActivationController *, ::Windows::UI::Internal::Input::IActivatingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationStateChanged@WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJPEAUIActivationController@Input@4UI@5@PEAUIActivationStateChangedEventArgs@7485@@Z
    long ActivationStateChanged(::Windows::UI::Internal::Input::IActivationController *, ::Windows::UI::Internal::Input::IActivationStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterState@WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXW4WindowState@2345@@Z
    void EnterState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInput@WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long InitializeInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNextState@WindowStateMachine@WindowManagement@ApplicationModel@Internal@Windows@@AEAAXXZ
    void ProcessNextState();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
