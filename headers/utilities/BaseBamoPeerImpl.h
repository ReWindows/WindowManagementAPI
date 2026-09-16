#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 6 member(s).
namespace Microsoft::BamoImpl {
class BaseBamoPeerImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ
    IMessageCallSendHost * GetSendHost() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z
    void Initialize(::Microsoft::BamoImpl::BaseBamoConnectionImpl *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z
    ::Microsoft::BamoImpl::BamoProxyImpl * TryGetProxy(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ
    virtual ~BaseBamoPeerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Microsoft::BamoImpl
