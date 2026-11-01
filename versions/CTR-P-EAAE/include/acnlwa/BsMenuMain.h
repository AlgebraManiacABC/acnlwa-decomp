#ifndef ACNLWA_BSMENUMAIN_H
#define ACNLWA_BSMENUMAIN_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuMain : public ::Base, public ::state::Mode< ::BsMenuMain> {
public:
    virtual ~BsMenuMain();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMAIN_H
