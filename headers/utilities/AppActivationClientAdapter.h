#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 21 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppActivationClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAsync@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long ActivateAsync(uint64_t, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    AppActivationClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateComplete@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJ_K@Z
    long OnActivateComplete(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDismissedChanged@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long OnIsDismissedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEAVAppActivationClientPrincipal@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExperienceId@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetExperienceId(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialBounds@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJURect@Foundation@5@@Z
    virtual long SetInitialBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsComponent@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetIsComponent(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHosted@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetIsHosted(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMain@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetIsMain(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTopLevel@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJE@Z
    virtual long SetIsTopLevel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SplashScreen@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUISplashScreen@Activation@35@@Z
    virtual long put_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppActivationClientAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitMessageSession@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long ExitMessageSession();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageLocation@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAA?AURect@Foundation@5@XZ
    WindissectOpaque GetImageLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDismissed@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAA_NXZ
    bool GetIsDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySplashScreenDismissed@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long NotifySplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSplashScreenDismissed@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long ResetSplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSplashScreenRect@AppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@AEAAJXZ
    long UpdateSplashScreenRect();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
