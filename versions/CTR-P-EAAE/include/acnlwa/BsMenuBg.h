#ifndef ACNLWA_BSMENUBG_H
#define ACNLWA_BSMENUBG_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuBg : public ::Base, public ::state::Mode< ::BsMenuBg> {
public:
    virtual ~BsMenuBg();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBG_H
