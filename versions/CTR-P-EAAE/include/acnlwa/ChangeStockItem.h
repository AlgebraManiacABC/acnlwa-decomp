#ifndef ACNLWA_CHANGESTOCKITEM_H
#define ACNLWA_CHANGESTOCKITEM_H

#include "acnlwa/Cabinet.h"

class ChangeStockItem : public ::Cabinet {
public:
    virtual ~ChangeStockItem();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

#endif  // ACNLWA_CHANGESTOCKITEM_H
