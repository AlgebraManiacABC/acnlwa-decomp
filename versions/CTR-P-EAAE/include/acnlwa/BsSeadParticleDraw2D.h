#ifndef ACNLWA_BSSEADPARTICLEDRAW2D_H
#define ACNLWA_BSSEADPARTICLEDRAW2D_H

#include "acnlwa/BsSeadParticleDrawBase.h"

class BsSeadParticleDraw2D : public ::BsSeadParticleDrawBase {
public:
    virtual ~BsSeadParticleDraw2D();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char VF17();
    virtual unsigned char VF18();
    virtual unsigned char VF19();
    virtual void VF20();
};

#endif  // ACNLWA_BSSEADPARTICLEDRAW2D_H
