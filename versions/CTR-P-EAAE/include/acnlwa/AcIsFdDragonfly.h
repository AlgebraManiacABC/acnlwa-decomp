#ifndef ACNLWA_ACISFDDRAGONFLY_H
#define ACNLWA_ACISFDDRAGONFLY_H

#include "acnlwa/AcInsectFieldStraight.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdDragonfly : public ::AcInsectFieldStraight, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdDragonfly> {
public:
    virtual ~AcIsFdDragonfly();
};

#endif  // ACNLWA_ACISFDDRAGONFLY_H
