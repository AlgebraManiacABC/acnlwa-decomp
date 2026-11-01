#ifndef ACNLWA_ACNPCDEMODOLL_H
#define ACNLWA_ACNPCDEMODOLL_H

#include "acnlwa/AcNpcDemoDollBase.h"

class AcNpcDemoDoll : public ::AcNpcDemoDollBase {
public:
    virtual ~AcNpcDemoDoll();
    virtual void UtlBase_VF32();
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual bool VF89();
    virtual void VF90();
};

#endif  // ACNLWA_ACNPCDEMODOLL_H
