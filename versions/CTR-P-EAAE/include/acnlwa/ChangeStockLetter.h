#ifndef ACNLWA_CHANGESTOCKLETTER_H
#define ACNLWA_CHANGESTOCKLETTER_H

#include "acnlwa/ChangeListBase.h"
#include "acnlwa/state/Mode.h"

class ChangeStockLetter : public ::ChangeListBase, public ::state::Mode< ::ChangeStockLetter> {
public:
    virtual ~ChangeStockLetter();
    virtual void VF08();
};

#endif  // ACNLWA_CHANGESTOCKLETTER_H
