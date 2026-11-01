#ifndef ACNLWA_BSSEADPARTICLEDRAWMINIGAME_H
#define ACNLWA_BSSEADPARTICLEDRAWMINIGAME_H

#include "acnlwa/BsSeadParticleDrawBase.h"

class BsSeadParticleDrawMinigame : public ::BsSeadParticleDrawBase {
public:
    virtual ~BsSeadParticleDrawMinigame();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char VF17();
    virtual unsigned char VF18();
    virtual unsigned char VF19();
    virtual void VF20();
};

#endif  // ACNLWA_BSSEADPARTICLEDRAWMINIGAME_H
