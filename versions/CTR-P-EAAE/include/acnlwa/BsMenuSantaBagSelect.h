#ifndef ACNLWA_BSMENUSANTABAGSELECT_H
#define ACNLWA_BSMENUSANTABAGSELECT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuSantaBagSelect : public ::MenuBase, public ::state::Mode< ::BsMenuSantaBagSelect> {
public:
    virtual ~BsMenuSantaBagSelect();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUSANTABAGSELECT_H
