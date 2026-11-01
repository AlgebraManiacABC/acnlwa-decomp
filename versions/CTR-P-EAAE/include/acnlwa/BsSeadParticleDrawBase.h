#ifndef ACNLWA_BSSEADPARTICLEDRAWBASE_H
#define ACNLWA_BSSEADPARTICLEDRAWBASE_H

#include "acnlwa/Base.h"

class BsSeadParticleDrawBase : public ::Base {
public:
    virtual ~BsSeadParticleDrawBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual unsigned char VF17();
    virtual unsigned char VF18();
    virtual unsigned char VF19();
    virtual void VF20();
};

#endif  // ACNLWA_BSSEADPARTICLEDRAWBASE_H
