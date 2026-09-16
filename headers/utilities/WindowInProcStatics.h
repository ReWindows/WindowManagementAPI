#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 59 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowInProcStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIWindowWatcher@2345@@Z
    virtual long CreateWatcher(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowAsync@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long DestroyWindowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAsync@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z
    virtual long FindAllAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllTopLevelAsync@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z
    virtual long FindAllTopLevelAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundWindow@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUIWindow@2345@@Z
    virtual long GetForegroundWindow(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromId@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAUIWindow@2345@@Z
    virtual long GetFromId(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromIdAndRelationship@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4WindowRelationship@2345@PEAPEAU?$IVectorView@PEAVWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long GetFromIdAndRelationship(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromIdAndRelationshipWithOptions@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4WindowRelationship@2345@W4WindowRelationshipOptions@2345@PEAPEAU?$IVectorView@PEAVWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long GetFromIdAndRelationshipWithOptions(WindissectOpaque, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerVisibilityPropagationGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long GetOwnerVisibilityPropagationGlobalBehavior(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerActivatedForegroundBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAU?$IReference@_N@Foundation@5@@Z
    virtual long GetPointerActivatedForegroundBehavior(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerActivatedForegroundGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAU?$IReference@_N@Foundation@5@@Z
    virtual long GetPointerActivatedForegroundGlobalBehavior(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityOnHideRequestedGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long GetVisibilityOnHideRequestedGlobalBehavior(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityOnShowRequestedGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long GetVisibilityOnShowRequestedGlobalBehavior(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsForOrderRegion@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJW4WindowOrderRegion@2345@PEAIPEAPEAUWindowId@2345@@Z
    virtual long GetWindowsForOrderRegion(int, unsigned int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@I@Z
    virtual long SetDisplayId(WindissectOpaque, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindowAsync@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SetForegroundWindowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOcclusion@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4WindowOcclusion@2345@@Z
    virtual long SetOcclusion(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrderRegion@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4WindowOrderRegion@2345@@Z
    virtual long SetOrderRegion(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwnerVisibilityPropagationGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetOwnerVisibilityPropagationGlobalBehavior(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerActivatedForegroundBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@PEAU?$IReference@_N@Foundation@5@@Z
    virtual long SetPointerActivatedForegroundBehavior(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerActivatedForegroundGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$IReference@_N@Foundation@5@@Z
    virtual long SetPointerActivatedForegroundGlobalBehavior(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityOnHideRequestedGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetVisibilityOnHideRequestedGlobalBehavior(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilityOnShowRequestedGlobalBehavior@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetVisibilityOnShowRequestedGlobalBehavior(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowVisibilityAsync@WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUWindowId@2345@W4WindowVisibility@2345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long SetWindowVisibilityAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WindowInProcStatics();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowInProcStatics@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowInProcStatics();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
