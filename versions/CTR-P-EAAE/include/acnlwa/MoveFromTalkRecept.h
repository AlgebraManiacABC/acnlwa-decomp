#ifndef ACNLWA_MOVEFROMTALKRECEPT_H
#define ACNLWA_MOVEFROMTALKRECEPT_H

#include "acnlwa/MoveFromTalkReceptBase.h"

class MoveFromTalkRecept : public ::MoveFromTalkReceptBase {
public:
    virtual ~MoveFromTalkRecept();
    virtual void ITalkRecept_VF37();
    virtual void VF64();
    virtual void VF65();
};

#endif  // ACNLWA_MOVEFROMTALKRECEPT_H
