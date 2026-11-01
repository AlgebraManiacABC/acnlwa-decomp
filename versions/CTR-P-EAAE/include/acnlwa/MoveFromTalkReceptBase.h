#ifndef ACNLWA_MOVEFROMTALKRECEPTBASE_H
#define ACNLWA_MOVEFROMTALKRECEPTBASE_H

#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/script/IFlowRecept.h"

class MoveFromTalkReceptBase : public ::script::ITalkRecept, public ::script::IFlowRecept {
public:
    virtual ~MoveFromTalkReceptBase();
    virtual void ITalkRecept_VF37();
    virtual void ITalkRecept_VF39();
    virtual void ITalkRecept_VF43();
    virtual void VF63();
};

#endif  // ACNLWA_MOVEFROMTALKRECEPTBASE_H
