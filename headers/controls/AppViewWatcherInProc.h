#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 109 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class AppViewWatcherInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    AppViewWatcherInProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHandle@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppView@2345@PEAE@Z
    virtual long CanHandle(WindissectOpaque *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewActivationRequestedEventArgs@2345@@Z
    virtual long RaiseActivationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@2345@@Z
    virtual long RaiseActivationShowRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAdded@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewChangedEventArgs@2345@@Z
    virtual long RaiseAdded(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseApplyWindowingEnvironmentSettingsRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Z
    virtual long RaiseApplyWindowingEnvironmentSettingsRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseBackRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewRequestEventArgs@2345@@Z
    virtual long RaiseBackRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClearPersistedStateRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewClearPersistedStateRequestedEventArgs@2345@@Z
    virtual long RaiseClearPersistedStateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseConsolidateRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewRequestEventArgs@2345@@Z
    virtual long RaiseConsolidateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExecutionStateChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewExecutionStateChangedEventArgs@2345@@Z
    virtual long RaiseExecutionStateChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseHideRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewHideRequestedEventArgs@2345@@Z
    virtual long RaiseHideRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseHideStatusBarRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewRequestEventArgs@2345@@Z
    virtual long RaiseHideStatusBarRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseInputStateChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewInputStateChangedEventArgs@2345@@Z
    virtual long RaiseInputStateChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLayoutCompleted@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewChangedEventArgs@2345@@Z
    virtual long RaiseLayoutCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseModalDialogChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewChangedEventArgs@2345@@Z
    virtual long RaiseModalDialogChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRemediationRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewRemediationRequestedEventArgs@2345@@Z
    virtual long RaiseRemediationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRemoved@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewChangedEventArgs@2345@@Z
    virtual long RaiseRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewShowRequestedEventArgs@2345@@Z
    virtual long RaiseShowRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseShowStandardSystemOverlaysRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewRequestEventArgs@2345@@Z
    virtual long RaiseShowStandardSystemOverlaysRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseShowStatusBarRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewRequestEventArgs@2345@@Z
    virtual long RaiseShowStatusBarRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSwitchRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@2345@@Z
    virtual long RaiseSwitchRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTargetVisibilityChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@2345@@Z
    virtual long RaiseTargetVisibilityChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@2345@@Z
    virtual long RaiseUniversalPropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVisibilityChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@2345@@Z
    virtual long RaiseVisibilityChanged(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivationRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewActivationRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivationRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivationShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewActivationShowRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivationShowRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Added@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Added(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ApplyWindowingEnvironmentSettingsRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ApplyWindowingEnvironmentSettingsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewBackRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_BackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ClearPersistedStateRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewClearPersistedStateRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ClearPersistedStateRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ConsolidateRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewConsolidateRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ConsolidateRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnumerationCompleted@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_EnumerationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ExecutionStateChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewExecutionStateChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ExecutionStateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HideRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewHideRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_HideRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InputStateChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewInputStateChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_InputStateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LayoutCompleted@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_LayoutCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ModalDialogChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ModalDialogChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RemediationRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewRemediationRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_RemediationRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Removed@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Removed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewShowRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ShowRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Stopped@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Stopped(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SwitchRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_SwitchRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TargetVisibilityChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewVisibilityChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TargetVisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UniversalPropertyChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewUniversalPropertyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_UniversalPropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UniversalShowStandardSystemOverlaysRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewUniversalShowStandardSystemOverlaysRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_UniversalShowStandardSystemOverlaysRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UniversalStatusBarHideRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewUniversalStatusBarHideRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_UniversalStatusBarHideRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UniversalStatusBarShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewUniversalStatusBarShowRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_UniversalStatusBarShowRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewVisibilityChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4AppViewWatcherStatus@2345@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivationRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivationRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivationShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivationShowRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Added@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Added(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ApplyWindowingEnvironmentSettingsRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ApplyWindowingEnvironmentSettingsRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ClearPersistedStateRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ClearPersistedStateRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ConsolidateRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ConsolidateRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnumerationCompleted@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnumerationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ExecutionStateChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ExecutionStateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HideRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HideRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InputStateChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InputStateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LayoutCompleted@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LayoutCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ModalDialogChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ModalDialogChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RemediationRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RemediationRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Removed@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Removed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShowRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Stopped@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Stopped(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SwitchRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SwitchRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TargetVisibilityChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TargetVisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UniversalPropertyChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UniversalPropertyChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UniversalShowStandardSystemOverlaysRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UniversalShowStandardSystemOverlaysRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UniversalStatusBarHideRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UniversalStatusBarHideRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UniversalStatusBarShowRequested@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UniversalStatusBarShowRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~AppViewWatcherInProc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateOperation@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long EnumerateOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEnumerationCompleted@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long RaiseEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStopped@AppViewWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long RaiseStopped();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
