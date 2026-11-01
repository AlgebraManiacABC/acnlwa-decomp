#ifndef ACNLWA_BSSEADPARTICLEDRAWFIREWORKS_H
#define ACNLWA_BSSEADPARTICLEDRAWFIREWORKS_H

#include "acnlwa/BsSeadParticleDrawBase.h"

class BsSeadParticleDrawFireworks : public ::BsSeadParticleDrawBase {
public:
    virtual ~BsSeadParticleDrawFireworks();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char VF18();
    virtual unsigned char VF19();
    virtual void VF20();
};

#endif  // ACNLWA_BSSEADPARTICLEDRAWFIREWORKS_H
