#ifndef ACNLWA_BSMENULETTERMGR_H
#define ACNLWA_BSMENULETTERMGR_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuLetterMgr : public ::MenuBase, public ::state::Mode< ::BsMenuLetterMgr> {
public:
    virtual ~BsMenuLetterMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENULETTERMGR_H
