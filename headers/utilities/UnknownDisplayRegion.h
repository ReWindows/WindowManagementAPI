#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 42 member(s).
namespace Windows::UI::WindowManagement {
class UnknownDisplayRegion {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsWin32Point@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJUPoint@Foundation@4@PEAE@Z
    virtual long ContainsWin32Point(WindissectOpaque, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesignatedDisplayMonitor@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@PEA_K1@Z
    virtual long GetDesignatedDisplayMonitor(HSTRING__* *, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapDisplayRegionToWin32Rect@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJURect@Foundation@4@PEAU564@@Z
    virtual long MapDisplayRegionToWin32Rect(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapWin32ToDisplayRegionRect@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJURect@Foundation@4@PEAU564@@Z
    virtual long MapWin32ToDisplayRegionRect(WindissectOpaque, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnknownDisplayRegion@WindowManagement@UI@Windows@@QEAA@XZ
    UnknownDisplayRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDisplayRegion@WindowManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayId@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUDisplayId@Graphics@4@@Z
    virtual long get_DisplayId(::Windows::Graphics::DisplayId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayMonitorDeviceId@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayMonitorDeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HiMetricScale@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAM@Z
    virtual long get_HiMetricScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@4@@Z
    virtual long get_Id(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironment@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAPEAUIWindowingEnvironment@234@@Z
    virtual long get_WindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkAreaOffset@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_WorkAreaOffset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkAreaSize@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_WorkAreaSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnknownDisplayRegion@WindowManagement@UI@Windows@@UEAA@XZ
    virtual ~UnknownDisplayRegion();
};
} // namespace Windows::UI::WindowManagement
