#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 49 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoUniversalTitleBarProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonBackgroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonForegroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHoverBackgroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonHoverBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHoverForegroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonHoverForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonInactiveBackgroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonInactiveBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonInactiveForegroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonInactiveForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonPressedBackgroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonPressedBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonPressedForegroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonPressedForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@QEBAPEAVBamoConnection@WindowManagement_AutoBamos@@XZ
    ::WindowManagement_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendsContentIntoTitleBar@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetExtendsContentIntoTitleBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveBackgroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetInactiveBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveForegroundColor@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetInactiveForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsVisible@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetIsVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredVisibility@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationWindowTitleBarVisibilityInternal@2345@XZ
    virtual int GetPreferredVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemOverlayLeftInset@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetSystemOverlayLeftInset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemOverlayRightInset@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetSystemOverlayRightInset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAANXZ
    virtual double GetWidth();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXN@Z
    virtual void SetHeight(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsVisible@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetIsVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemOverlayLeftInset@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXN@Z
    virtual void SetSystemOverlayLeftInset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemOverlayRightInset@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXN@Z
    virtual void SetSystemOverlayRightInset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXN@Z
    virtual void SetWidth(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonBackgroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonForegroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonForegroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonHoverBackgroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonHoverBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonHoverForegroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonHoverForegroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonInactiveBackgroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonInactiveBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonInactiveForegroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonInactiveForegroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressedBackgroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonPressedBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressedForegroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnButtonPressedForegroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtendsContentIntoTitleBarChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJ_N@Z
    virtual long OnExtendsContentIntoTitleBarChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnForegroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInactiveBackgroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnInactiveBackgroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInactiveForegroundColorChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJAEBUNullableColor@2345@@Z
    virtual long OnInactiveForegroundColorChanging(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreferredVisibilityChanging@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJW4ApplicationWindowTitleBarVisibilityInternal@2345@@Z
    virtual long OnPreferredVisibilityChanging(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoUniversalTitleBarProxy@WindowManagement@ApplicationModel@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
