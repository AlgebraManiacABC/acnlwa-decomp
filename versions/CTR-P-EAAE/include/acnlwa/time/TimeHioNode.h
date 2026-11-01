#ifndef ACNLWA_TIME_TIMEHIONODE_H
#define ACNLWA_TIME_TIMEHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

namespace time {

class TimeHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace time

#endif  // ACNLWA_TIME_TIMEHIONODE_H
