#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 24 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoDisplayClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoRotationPreferences@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAA?AW4DisplayOrientations@Display@Graphics@5@XZ
    virtual int GetAutoRotationPreferences();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoRotationPreferences@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXW4DisplayOrientations@Display@Graphics@5@@Z
    virtual void SetAutoRotationPreferences(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoDisplayClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentOrientationChanged@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnCurrentOrientationChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentOrientationChanging@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@W4DisplayOrientations@Display@Graphics@5@@Z
    virtual long OnCurrentOrientationChanging(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayScaleChanged@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnDisplayScaleChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayScaleChanging@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@M@Z
    virtual long OnDisplayScaleChanging(WindissectOpaque *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNativeOrientationChanged@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnNativeOrientationChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNativeOrientationChanging@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@W4DisplayOrientations@Display@Graphics@5@@Z
    virtual long OnNativeOrientationChanging(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRasterizationScaleChanged@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnRasterizationScaleChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRasterizationScaleChanging@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@M@Z
    virtual long OnRasterizationScaleChanging(WindissectOpaque *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoDisplayClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDisplayClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
