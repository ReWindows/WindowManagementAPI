#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 52 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoTitleBarClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHoverBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonHoverBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHoverForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonHoverForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonInactiveBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonInactiveBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonInactiveForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonInactiveForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonPressedBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonPressedBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonPressedForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetButtonPressedForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendsContentIntoTitleBar@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA_NXZ
    virtual bool GetExtendsContentIntoTitleBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetInactiveBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAAEBUNullableColor@2345@XZ
    virtual WindissectOpaque const & GetInactiveForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredVisibility@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4ApplicationWindowTitleBarVisibilityInternal@2345@XZ
    virtual int GetPreferredVisibility();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetBackgroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonBackgroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonForegroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonHoverBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonHoverBackgroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonHoverForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonHoverForegroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonInactiveBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonInactiveBackgroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonInactiveForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonInactiveForegroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonPressedBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonPressedBackgroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonPressedForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetButtonPressedForegroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendsContentIntoTitleBar@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAX_N@Z
    virtual void SetExtendsContentIntoTitleBar(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetForegroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInactiveBackgroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetInactiveBackgroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInactiveForegroundColor@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXAEBUNullableColor@2345@@Z
    virtual void SetInactiveForegroundColor(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredVisibility@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4ApplicationWindowTitleBarVisibilityInternal@2345@@Z
    virtual void SetPreferredVisibility(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoTitleBarClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeightChanged@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnHeightChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeightChanging@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@N@Z
    virtual long OnHeightChanging(WindissectOpaque *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsVisibleChanged@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnIsVisibleChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsVisibleChanging@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@_N@Z
    virtual long OnIsVisibleChanging(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemOverlayLeftInsetChanged@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnSystemOverlayLeftInsetChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemOverlayLeftInsetChanging@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@N@Z
    virtual long OnSystemOverlayLeftInsetChanging(WindissectOpaque *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemOverlayRightInsetChanged@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnSystemOverlayRightInsetChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemOverlayRightInsetChanging@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@N@Z
    virtual long OnSystemOverlayRightInsetChanging(WindissectOpaque *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWidthChanged@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@@Z
    virtual long OnWidthChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWidthChanging@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoTitleBarClientStub@2345@N@Z
    virtual long OnWidthChanging(WindissectOpaque *, double);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoTitleBarClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
