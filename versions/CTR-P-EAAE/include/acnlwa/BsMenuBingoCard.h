#ifndef ACNLWA_BSMENUBINGOCARD_H
#define ACNLWA_BSMENUBINGOCARD_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBingoCard : public ::MenuBase, public ::state::Mode< ::BsMenuBingoCard> {
public:
    virtual ~BsMenuBingoCard();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBINGOCARD_H
