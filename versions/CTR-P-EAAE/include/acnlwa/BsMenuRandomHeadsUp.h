#ifndef ACNLWA_BSMENURANDOMHEADSUP_H
#define ACNLWA_BSMENURANDOMHEADSUP_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuRandomHeadsUp : public ::Base, public ::state::Mode< ::BsMenuRandomHeadsUp> {
public:
    virtual ~BsMenuRandomHeadsUp();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENURANDOMHEADSUP_H
