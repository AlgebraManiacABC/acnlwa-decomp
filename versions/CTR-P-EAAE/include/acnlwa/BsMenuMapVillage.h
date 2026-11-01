#ifndef ACNLWA_BSMENUMAPVILLAGE_H
#define ACNLWA_BSMENUMAPVILLAGE_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuMapVillage : public ::Base, public ::state::Mode< ::BsMenuMapVillage> {
public:
    virtual ~BsMenuMapVillage();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMAPVILLAGE_H
