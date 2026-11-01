#ifndef ACNLWA_BSMENUNUMBERINPUT_H
#define ACNLWA_BSMENUNUMBERINPUT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuNumberInput : public ::MenuBase, public ::state::Mode< ::BsMenuNumberInput> {
public:
    virtual ~BsMenuNumberInput();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUNUMBERINPUT_H
