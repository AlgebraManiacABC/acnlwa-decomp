#ifndef ACNLWA_BSMENUMYDESIGNDREAMPRESENT_H
#define ACNLWA_BSMENUMYDESIGNDREAMPRESENT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuMyDesignDreamPresent : public ::MenuBase, public ::state::Mode< ::BsMenuMyDesignDreamPresent> {
public:
    virtual ~BsMenuMyDesignDreamPresent();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMYDESIGNDREAMPRESENT_H
