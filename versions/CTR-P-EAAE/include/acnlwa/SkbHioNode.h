#ifndef ACNLWA_SKBHIONODE_H
#define ACNLWA_SKBHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class SkbHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_SKBHIONODE_H
