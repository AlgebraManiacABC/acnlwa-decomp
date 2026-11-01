#ifndef ACNLWA_CHANGESTOCKCOOLER_H
#define ACNLWA_CHANGESTOCKCOOLER_H

#include "acnlwa/ChangeListBase.h"

class ChangeStockCooler : public ::ChangeListBase {
public:
    virtual ~ChangeStockCooler();
    virtual void VF08();
    virtual void VF09();
};

#endif  // ACNLWA_CHANGESTOCKCOOLER_H
