#ifndef ACNLWA_BSMENUMGR_H
#define ACNLWA_BSMENUMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuMgr : public ::Base, public ::state::Mode< ::BsMenuMgr> {
public:
    virtual ~BsMenuMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMGR_H
