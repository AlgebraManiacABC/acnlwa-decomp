#ifndef ACNLWA_ACISFDMOTH_H
#define ACNLWA_ACISFDMOTH_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdMoth : public ::AcInsectFieldFly, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdMoth> {
public:
    virtual ~AcIsFdMoth();
};

#endif  // ACNLWA_ACISFDMOTH_H
