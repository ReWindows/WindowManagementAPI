#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 23 member(s).
namespace Windows::UI::WindowManagement {
class AppWindowPresenter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppWindowPresenter@WindowManagement@UI@Windows@@QEAA@XZ
    AppWindowPresenter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguration@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJPEAPEAUIAppWindowPresentationConfiguration@234@@Z
    virtual long GetConfiguration(::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentationSupported@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJW4AppWindowPresentationKind@234@PEAE@Z
    virtual long IsPresentationSupported(int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPresentation@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJPEAUIAppWindowPresentationConfiguration@234@PEAE@Z
    virtual long RequestPresentation(::Windows::UI::WindowManagement::IAppWindowPresentationConfiguration *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPresentationByKind@AppWindowPresenter@WindowManagement@UI@Windows@@UEAAJW4AppWindowPresentationKind@234@PEAE@Z
    virtual long RequestPresentationByKind(int, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowPresenter@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~AppWindowPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAppWindowPresenterKind@AppWindowPresenter@WindowManagement@UI@Windows@@AEAAJW4AppWindowPresentationKind@234@PEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    long ConvertAppWindowPresenterKind(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullScreenPropertySet@AppWindowPresenter@WindowManagement@UI@Windows@@AEAAJPEAVFullScreenPresentation@234@PEAPEAUIPropertySet@Collections@Foundation@4@@Z
    long GetFullScreenPropertySet(::Windows::UI::WindowManagement::FullScreenPresentation *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionPropertySet@AppWindowPresenter@WindowManagement@UI@Windows@@AEAAJPEAVProjectionPresentation@234@PEAPEAUIPropertySet@Collections@Foundation@4@@Z
    long GetProjectionPropertySet(::Windows::UI::WindowManagement::ProjectionPresentation *, WindissectOpaque * *);
};
} // namespace Windows::UI::WindowManagement
