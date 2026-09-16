#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 135 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowWatcherInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIActivationRequestedEventArgs@2345@@Z
    virtual long RaiseActivationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAdded@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowChangedEventArgs@2345@@Z
    virtual long RaiseAdded(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseApplyWindowingEnvironmentSettingsRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Z
    virtual long RaiseApplyWindowingEnvironmentSettingsRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseBackRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIBackRequestedEventArgs@2345@@Z
    virtual long RaiseBackRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClearPersistedStateRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIClearPersistedStateRequestedEventArgs@2345@@Z
    virtual long RaiseClearPersistedStateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseConsolidateRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIConsolidateRequestedEventArgs@2345@@Z
    virtual long RaiseConsolidateRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCorePropertyChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUICorePropertyChangedEventArgs@2345@@Z
    virtual long RaiseCorePropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseForegroundChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowForegroundChangedEventArgs@2345@@Z
    virtual long RaiseForegroundChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseHideRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIHideRequestedEventArgs@2345@@Z
    virtual long RaiseHideRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseInitialPlacementRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIInitialPlacementRequestedEventArgs@2345@@Z
    virtual long RaiseInitialPlacementRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLayoutCompleted@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUILayoutCompletedEventArgs@2345@@Z
    virtual long RaiseLayoutCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOcclusionChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowOcclusionChangedEventArgs@2345@@Z
    virtual long RaiseOcclusionChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOrderRegionChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowOrderRegionChangedEventArgs@2345@@Z
    virtual long RaiseOrderRegionChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePresentationRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIPresentationRequestedEventArgs@2345@@Z
    virtual long RaisePresentationRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRemoved@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowChangedEventArgs@2345@@Z
    virtual long RaiseRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseShowRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIShowRequestedEventArgs@2345@@Z
    virtual long RaiseShowRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseShowStandardSystemOverlaysRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIShowStandardSystemOverlaysRequestedEventArgs@2345@@Z
    virtual long RaiseShowStandardSystemOverlaysRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSwitchRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUISwitchRequestedEventArgs@2345@@Z
    virtual long RaiseSwitchRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTouchInputRoutingInfoChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowChangedEventArgs@2345@@Z
    virtual long RaiseTouchInputRoutingInfoChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUniversalPropertyChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIUniversalPropertyChangedEventArgs@2345@@Z
    virtual long RaiseUniversalPropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVisibilityChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAUIWindowVisibilityChangedEventArgs@2345@@Z
    virtual long RaiseVisibilityChanged(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@QEAA@XZ
    WindowWatcherInProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivationRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVActivationRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivationRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Added@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Added(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ApplyWindowingEnvironmentSettingsRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ApplyWindowingEnvironmentSettingsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVBackRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_BackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ClearPersistedStateRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVClearPersistedStateRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ClearPersistedStateRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ConsolidateRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVConsolidateRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ConsolidateRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CorePropertyChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUICoreAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVCorePropertyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CorePropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnumerationCompleted@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_EnumerationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ForegroundChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowForegroundChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ForegroundChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HideRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVHideRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_HideRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InitialPlacementRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVInitialPlacementRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_InitialPlacementRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LayoutCompleted@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVLayoutCompletedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_LayoutCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OcclusionChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowOcclusionChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OcclusionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrderRegionChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowOrderRegionChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OrderRegionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVPresentationRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Removed@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Removed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShowRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVShowRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ShowRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShowStandardSystemOverlaysRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVShowStandardSystemOverlaysRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ShowStandardSystemOverlaysRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Stopped@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Stopped(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SwitchRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVSwitchRequestedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_SwitchRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TouchInputRoutingInfoChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TouchInputRoutingInfoChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UniversalPropertyChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVUniversalPropertyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_UniversalPropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowVisibilityChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEAW4WindowWatcherStatus@2345@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivationRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivationRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Added@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Added(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ApplyWindowingEnvironmentSettingsRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ApplyWindowingEnvironmentSettingsRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ClearPersistedStateRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ClearPersistedStateRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ConsolidateRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ConsolidateRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CorePropertyChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CorePropertyChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnumerationCompleted@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnumerationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ForegroundChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ForegroundChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HideRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HideRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InitialPlacementRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InitialPlacementRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LayoutCompleted@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LayoutCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OcclusionChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OcclusionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrderRegionChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrderRegionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Removed@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Removed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShowRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShowRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShowStandardSystemOverlaysRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShowStandardSystemOverlaysRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Stopped@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Stopped(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SwitchRequested@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SwitchRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TouchInputRoutingInfoChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TouchInputRoutingInfoChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UniversalPropertyChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UniversalPropertyChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowWatcherInProc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateOperation@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long EnumerateOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEnumerationCompleted@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long RaiseEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStopped@WindowWatcherInProc@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long RaiseStopped();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
