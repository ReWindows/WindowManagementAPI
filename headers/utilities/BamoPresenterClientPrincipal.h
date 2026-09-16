#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 19 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class BamoPresenterClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestPresentation@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJ_KW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long BroadcastRequestPresentation(uint64_t, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEAPEAVBamoPresenterClientStub@2345@@Z
    virtual long AllocateStubUnderLock(::WindowManagement_AutoBamos::BamoPeer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long InitializeProxyUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKindChanged@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnKindChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKindChanging@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@W4ApplicationWindowPresenterKindInternal@WindowingEnvironment@345@@Z
    virtual long OnKindChanging(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnPropertiesRefreshed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpanningRectsChanged@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnSpanningRectsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpanningRectsChanging@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@PEAVBamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy@WindowManagement_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnSpanningRectsChanging(WindissectOpaque *, ::Microsoft::Bamo::Lib::WindowManagement_AutoBamos::BamoList_Windows_Internal_ApplicationModel_WindowManagement_Rect_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnStubConnectedUnderLock(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPresenterClientStub@2345@@Z
    virtual long OnStubDisconnected(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPresenterClientPrincipal@WindowManagement@ApplicationModel@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
