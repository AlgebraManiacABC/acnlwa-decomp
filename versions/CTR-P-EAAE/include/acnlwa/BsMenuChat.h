#ifndef ACNLWA_BSMENUCHAT_H
#define ACNLWA_BSMENUCHAT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuChat : public ::MenuBase, public ::state::Mode< ::BsMenuChat> {
public:
    virtual ~BsMenuChat();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
};

#endif  // ACNLWA_BSMENUCHAT_H
