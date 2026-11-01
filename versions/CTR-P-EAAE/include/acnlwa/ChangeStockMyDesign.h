#ifndef ACNLWA_CHANGESTOCKMYDESIGN_H
#define ACNLWA_CHANGESTOCKMYDESIGN_H

#include "acnlwa/ChangeListBase.h"
#include "acnlwa/state/Mode.h"

class ChangeStockMyDesign : public ::ChangeListBase, public ::state::Mode< ::ChangeStockMyDesign> {
public:
    virtual ~ChangeStockMyDesign();
    virtual void VF03();
    virtual void VF08();
};

#endif  // ACNLWA_CHANGESTOCKMYDESIGN_H
