#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowManagementAPI.dll by Windissect. 7 member(s).
class BufferWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@BufferWrapper@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferWrapper@@QEAA@PEAEI@Z
    BufferWrapper(unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@BufferWrapper@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@BufferWrapper@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@BufferWrapper@@UEAAJI@Z
    virtual long put_Length(unsigned int);
};
