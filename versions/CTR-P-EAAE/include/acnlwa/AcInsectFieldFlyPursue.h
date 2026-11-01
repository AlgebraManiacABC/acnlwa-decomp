#ifndef ACNLWA_ACINSECTFIELDFLYPURSUE_H
#define ACNLWA_ACINSECTFIELDFLYPURSUE_H

#include "acnlwa/AcInsectFieldFly.h"

class AcInsectFieldFlyPursue : public ::AcInsectFieldFly {
public:
    virtual ~AcInsectFieldFlyPursue();
    virtual void VF50();
    virtual void VF51();
};

#endif  // ACNLWA_ACINSECTFIELDFLYPURSUE_H
