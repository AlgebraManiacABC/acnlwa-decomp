#ifndef ACNLWA_ACISFDHERMITCRAB_H
#define ACNLWA_ACISFDHERMITCRAB_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdHermitCrab : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdHermitCrab> {
public:
    virtual ~AcIsFdHermitCrab();
};

#endif  // ACNLWA_ACISFDHERMITCRAB_H
