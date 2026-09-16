#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 27 member(s).
namespace Windows::Internal::ApplicationModel::WindowingEnvironment {
class AppStreamingChromeSettingInProc {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLayered@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsLayered(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsNonActivatable@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsNonActivatable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRightToLeft@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRightToLeft(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowAsResizable@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ShowAsResizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressCaptionControls@AppStreamingChromeSettingInProc@WindowingEnvironment@ApplicationModel@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SuppressCaptionControls(unsigned char *);
};
} // namespace Windows::Internal::ApplicationModel::WindowingEnvironment
