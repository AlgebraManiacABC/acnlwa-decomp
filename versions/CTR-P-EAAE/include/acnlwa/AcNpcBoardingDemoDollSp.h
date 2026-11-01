#ifndef ACNLWA_ACNPCBOARDINGDEMODOLLSP_H
#define ACNLWA_ACNPCBOARDINGDEMODOLLSP_H

#include "acnlwa/AcNpcDemoDollBase.h"

class AcNpcBoardingDemoDollSp : public ::AcNpcDemoDollBase {
public:
    virtual ~AcNpcBoardingDemoDollSp();
    virtual void UtlBase_VF32();
    virtual void VF42();
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual bool VF89();
    virtual void VF90();
};

#endif  // ACNLWA_ACNPCBOARDINGDEMODOLLSP_H
