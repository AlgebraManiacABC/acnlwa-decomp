#ifndef ACNLWA_ACISFDSCORPION_H
#define ACNLWA_ACISFDSCORPION_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdScorpion : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdScorpion> {
public:
    virtual ~AcIsFdScorpion();
};

#endif  // ACNLWA_ACISFDSCORPION_H
