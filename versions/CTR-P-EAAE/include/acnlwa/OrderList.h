#ifndef ACNLWA_ORDERLIST_H
#define ACNLWA_ORDERLIST_H

#include "acnlwa/InstSelect.h"

class OrderList : public ::InstSelect<8> {
public:
    virtual ~OrderList();
    virtual void VF03();
    virtual void VF08();
    virtual void VF10();
    virtual void VF11();
    virtual void VF13();
    virtual void VF24();
    virtual void VF25();
};

#endif  // ACNLWA_ORDERLIST_H
