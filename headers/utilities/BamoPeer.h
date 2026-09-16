#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 4 member(s).
namespace WindowManagement_AutoBamos {
class BamoPeer {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPeer@WindowManagement_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoPeerImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetBootstrapProxy@BamoPeer@WindowManagement_AutoBamos@@EEBAXI@Z
    virtual void LogSetBootstrapProxy(unsigned int) const;
};
} // namespace WindowManagement_AutoBamos
