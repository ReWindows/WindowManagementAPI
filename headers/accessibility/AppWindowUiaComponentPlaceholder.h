#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 16 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowUiaComponentPlaceholder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindowUiaComponentPlaceholder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentSiteId@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ComponentSiteId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementId@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAPEAG@Z
    virtual long get_ElementId(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowUiaComponentPlaceholder@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowUiaComponentPlaceholder();
};
} // namespace Windows::UI::WindowManagement
