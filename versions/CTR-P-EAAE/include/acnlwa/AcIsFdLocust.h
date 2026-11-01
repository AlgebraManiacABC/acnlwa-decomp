#ifndef ACNLWA_ACISFDLOCUST_H
#define ACNLWA_ACISFDLOCUST_H

#include "acnlwa/AcInsectFieldStraight.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdLocust : public ::AcInsectFieldStraight, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdLocust> {
public:
    virtual ~AcIsFdLocust();
};

#endif  // ACNLWA_ACISFDLOCUST_H
