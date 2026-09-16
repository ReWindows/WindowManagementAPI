#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 52 member(s).
namespace Windows::UI::WindowManagement {
class DisplayRegion {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayRegion@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsWin32Point@DisplayRegion@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@PEAE@Z
    virtual long ContainsWin32Point(WindissectOpaque, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayRegion@WindowManagement@UI@Windows@@QEAA@XZ
    DisplayRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesignatedDisplayMonitor@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@PEA_K1@Z
    virtual long GetDesignatedDisplayMonitor(HSTRING__* *, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapDisplayRegionToWin32Rect@DisplayRegion@WindowManagement@UI@Windows@@UEAAJURect@Foundation@4@PEAU564@@Z
    virtual long MapDisplayRegionToWin32Rect(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapWin32ToDisplayRegionRect@DisplayRegion@WindowManagement@UI@Windows@@UEAAJURect@Foundation@4@PEAU564@@Z
    virtual long MapWin32ToDisplayRegionRect(WindissectOpaque, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayRegion@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayRegion@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DisplayRegion@WindowManagement@UI@Windows@@QEAAJPEAUIDisplayRegionModelBroker@WindowingEnvironment@ApplicationModel@Internal@4@PEAUIConnectionEndpoint@6784@@Z
    long RuntimeClassInitialize(::Windows::Internal::ApplicationModel::WindowingEnvironment::IDisplayRegionModelBroker *, ::Windows::Internal::ApplicationModel::WindowingEnvironment::IConnectionEndpoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayRegion@WindowManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayId@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUDisplayId@Graphics@4@@Z
    virtual long get_DisplayId(::Windows::Graphics::DisplayId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayMonitorDeviceId@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayMonitorDeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HiMetricScale@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAM@Z
    virtual long get_HiMetricScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hmonitor@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Hmonitor(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    virtual long get_Id(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironment@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowingEnvironment@234@@Z
    virtual long get_WindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkAreaOffset@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_WorkAreaOffset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkAreaSize@DisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_WorkAreaSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@DisplayRegion@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayRegion@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~DisplayRegion();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectDisplayRegionChanged@DisplayRegion@WindowManagement@UI@Windows@@AEAAJXZ
    long ConnectDisplayRegionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRegionModelChanged@DisplayRegion@WindowManagement@UI@Windows@@AEAAJPEAUIDisplayRegionModelBroker@WindowingEnvironment@ApplicationModel@Internal@4@PEAUIInspectable@@@Z
    long OnDisplayRegionModelChanged(::Windows::Internal::ApplicationModel::WindowingEnvironment::IDisplayRegionModelBroker *, IInspectable *);
};
} // namespace Windows::UI::WindowManagement
