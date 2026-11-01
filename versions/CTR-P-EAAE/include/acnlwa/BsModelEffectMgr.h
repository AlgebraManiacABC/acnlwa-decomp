#ifndef ACNLWA_BSMODELEFFECTMGR_H
#define ACNLWA_BSMODELEFFECTMGR_H

#include "acnlwa/Base.h"

class BsModelEffectMgr : public ::Base {
public:
    virtual ~BsModelEffectMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMODELEFFECTMGR_H
