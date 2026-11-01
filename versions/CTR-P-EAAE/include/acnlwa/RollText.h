#ifndef ACNLWA_ROLLTEXT_H
#define ACNLWA_ROLLTEXT_H

#include "acnlwa/state/Mode.h"

class RollText : public ::state::Mode< ::RollText> {
public:
    virtual ~RollText();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ROLLTEXT_H
