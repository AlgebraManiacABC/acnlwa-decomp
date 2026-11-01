#ifndef ACNLWA_COMDIALOGA_H
#define ACNLWA_COMDIALOGA_H

#include "acnlwa/state/Mode.h"

class ComDialogA : public ::state::Mode< ::ComDialogA> {
public:
    virtual ~ComDialogA();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_COMDIALOGA_H
