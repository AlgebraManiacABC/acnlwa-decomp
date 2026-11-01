#ifndef ACNLWA_BSMENUMAILBOX_H
#define ACNLWA_BSMENUMAILBOX_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuMailbox : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuMailbox> {
public:
    virtual ~BsMenuMailbox();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENUMAILBOX_H
