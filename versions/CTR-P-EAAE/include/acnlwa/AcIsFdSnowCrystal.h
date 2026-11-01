#ifndef ACNLWA_ACISFDSNOWCRYSTAL_H
#define ACNLWA_ACISFDSNOWCRYSTAL_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdSnowCrystal : public ::AcInsectFieldFly, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdSnowCrystal> {
public:
    virtual ~AcIsFdSnowCrystal();
};

#endif  // ACNLWA_ACISFDSNOWCRYSTAL_H
