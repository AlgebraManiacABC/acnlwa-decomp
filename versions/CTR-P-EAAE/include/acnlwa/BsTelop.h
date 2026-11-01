#ifndef ACNLWA_BSTELOP_H
#define ACNLWA_BSTELOP_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsTelop : public ::Base, public ::state::Mode< ::BsTelop> {
public:
    virtual ~BsTelop();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSTELOP_H
