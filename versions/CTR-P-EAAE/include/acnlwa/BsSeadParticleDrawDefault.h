#ifndef ACNLWA_BSSEADPARTICLEDRAWDEFAULT_H
#define ACNLWA_BSSEADPARTICLEDRAWDEFAULT_H

#include "acnlwa/BsSeadParticleDrawBase.h"

class BsSeadParticleDrawDefault : public ::BsSeadParticleDrawBase {
public:
    virtual ~BsSeadParticleDrawDefault();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSSEADPARTICLEDRAWDEFAULT_H
