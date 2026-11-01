#ifndef ACNLWA_BSSEADPARTICLEDRAWFOOTMARK_H
#define ACNLWA_BSSEADPARTICLEDRAWFOOTMARK_H

#include "acnlwa/BsSeadParticleDrawBase.h"

class BsSeadParticleDrawFootmark : public ::BsSeadParticleDrawBase {
public:
    virtual ~BsSeadParticleDrawFootmark();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char VF17();
    virtual unsigned char VF18();
    virtual unsigned char VF19();
    virtual void VF20();
};

#endif  // ACNLWA_BSSEADPARTICLEDRAWFOOTMARK_H
