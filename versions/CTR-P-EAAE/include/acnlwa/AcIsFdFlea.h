#ifndef ACNLWA_ACISFDFLEA_H
#define ACNLWA_ACISFDFLEA_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdFlea : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdFlea> {
public:
    virtual ~AcIsFdFlea();
};

#endif  // ACNLWA_ACISFDFLEA_H
