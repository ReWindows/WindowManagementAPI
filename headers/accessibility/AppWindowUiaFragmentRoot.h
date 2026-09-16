#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 17 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowUiaFragmentRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementProviderFromPoint@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    virtual long ElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentHostElement@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJU_GUID@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetComponentHostElement(_GUID, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetFocus(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowUiaFragmentRoot();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaceholderAsFragment@AppWindowUiaFragmentRoot@WindowManagement@UI@Windows@@AEAAJPEAPEAUIRawElementProviderFragment@@@Z
    long GetPlaceholderAsFragment(IRawElementProviderFragment * *);
};
} // namespace Windows::UI::WindowManagement
