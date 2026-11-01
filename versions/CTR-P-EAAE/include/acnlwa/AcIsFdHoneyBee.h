#ifndef ACNLWA_ACISFDHONEYBEE_H
#define ACNLWA_ACISFDHONEYBEE_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdHoneyBee : public ::AcInsectFieldFly, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdHoneyBee> {
public:
    virtual ~AcIsFdHoneyBee();
};

#endif  // ACNLWA_ACISFDHONEYBEE_H
