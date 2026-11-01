#ifndef ACNLWA_DEMO_ORDER_H
#define ACNLWA_DEMO_ORDER_H

#include "acnlwa/ListNodePriority.h"

namespace demo {

class Order : public ::ListNodePriority {
public:
    virtual ~Order();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace demo

#endif  // ACNLWA_DEMO_ORDER_H
