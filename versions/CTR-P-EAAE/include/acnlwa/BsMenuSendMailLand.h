#ifndef ACNLWA_BSMENUSENDMAILLAND_H
#define ACNLWA_BSMENUSENDMAILLAND_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuSendMailLand : public ::MenuBase, public ::state::Mode< ::BsMenuSendMailLand> {
public:
    virtual ~BsMenuSendMailLand();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUSENDMAILLAND_H
