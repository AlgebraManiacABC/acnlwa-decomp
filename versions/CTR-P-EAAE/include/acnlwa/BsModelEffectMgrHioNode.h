#ifndef ACNLWA_BSMODELEFFECTMGRHIONODE_H
#define ACNLWA_BSMODELEFFECTMGRHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class BsModelEffectMgrHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_BSMODELEFFECTMGRHIONODE_H
