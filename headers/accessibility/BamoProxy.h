#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 5 member(s).
namespace Microsoft::Bamo {
class BamoProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ
    bool GetIsReady() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnPropertiesRefreshed();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ
    void AbandonOnDisconnect();
};
} // namespace Microsoft::Bamo
