#ifndef ACNLWA_DEMO_ORDERLIST_H
#define ACNLWA_DEMO_ORDERLIST_H

#include "acnlwa/ssys/st/ListPriority.h"

namespace demo {

class OrderList : public ::ssys::st::ListPriority {
public:
    virtual ~OrderList();
};

}  // namespace demo

#endif  // ACNLWA_DEMO_ORDERLIST_H
