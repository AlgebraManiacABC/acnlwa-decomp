#ifndef ACNLWA_ACISFDWATERSTRIDER_H
#define ACNLWA_ACISFDWATERSTRIDER_H

#include "acnlwa/AcInsectFieldSwim.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdWaterStrider : public ::AcInsectFieldSwim, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdWaterStrider> {
public:
    virtual ~AcIsFdWaterStrider();
};

#endif  // ACNLWA_ACISFDWATERSTRIDER_H
