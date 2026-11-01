#ifndef ACNLWA_ACISFDWATERBEETLE_H
#define ACNLWA_ACISFDWATERBEETLE_H

#include "acnlwa/AcInsectFieldSwim.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdWaterBeetle : public ::AcInsectFieldSwim, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdWaterBeetle> {
public:
    virtual ~AcIsFdWaterBeetle();
};

#endif  // ACNLWA_ACISFDWATERBEETLE_H
