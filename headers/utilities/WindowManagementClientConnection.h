#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 10 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement {
class WindowManagementClientConnection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@SA?AV?$ComPtr@VWindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@PEAUIMessageSession@@@Z
    static WindissectOpaque Create(IMessageSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementUsageCount@WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@QEAAXXZ
    void DecrementUsageCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentProcess@WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@SA?AV?$ComPtr@VWindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetForCurrentProcess();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@UEAA@XZ
    virtual ~WindowManagementClientConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::WindowManagement_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoPeer@WindowManagement_AutoBamos@@_N@Z
    virtual long OnPeerDisconnected(::WindowManagement_AutoBamos::BamoPeer *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxy(::Microsoft::Bamo::BamoProxy *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowManagementClientConnection@WindowManagement@ApplicationModel@Internal@Windows@@IEAA@XZ
    WindowManagementClientConnection();
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement
