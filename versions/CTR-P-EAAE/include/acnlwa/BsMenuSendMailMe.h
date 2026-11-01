#ifndef ACNLWA_BSMENUSENDMAILME_H
#define ACNLWA_BSMENUSENDMAILME_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuSendMailMe : public ::MenuBase, public ::state::Mode< ::BsMenuSendMailMe> {
public:
    virtual ~BsMenuSendMailMe();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUSENDMAILME_H
