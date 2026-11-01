#ifndef ACNLWA_BSSEADPARTICLEMGR_H
#define ACNLWA_BSSEADPARTICLEMGR_H

#include "acnlwa/Base.h"

class BsSeadParticleMgr : public ::Base {
public:
    virtual ~BsSeadParticleMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSSEADPARTICLEMGR_H
