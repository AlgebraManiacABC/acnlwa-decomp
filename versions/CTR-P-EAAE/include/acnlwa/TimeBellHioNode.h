#ifndef ACNLWA_TIMEBELLHIONODE_H
#define ACNLWA_TIMEBELLHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class TimeBellHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_TIMEBELLHIONODE_H
