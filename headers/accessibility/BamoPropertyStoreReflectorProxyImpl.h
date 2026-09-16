#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 16 member(s).
namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl {
class BamoPropertyStoreReflectorProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJXZ
    long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInt32@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBGH@Z
    long InsertInt32(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInt64@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG_J@Z
    long InsertInt64(unsigned short const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPropertyStore@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBGPEBEI@Z
    long InsertPropertyStore(unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRect@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBGAEBURect@Foundation@6@@Z
    long InsertRect(unsigned short const *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertString@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG0@Z
    long InsertString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertUInt64@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG_K@Z
    long InsertUInt64(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@QEAAJPEBG@Z
    long Remove(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPropertyStoreReflectorProxyImpl@BamoImpl@WindowManagement@ApplicationModel@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace Windows::Internal::ApplicationModel::WindowManagement::BamoImpl
