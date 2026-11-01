#ifndef ACNLWA_ACISFDBEETLE_H
#define ACNLWA_ACISFDBEETLE_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdBeetle : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdBeetle> {
public:
    virtual ~AcIsFdBeetle();
};

#endif  // ACNLWA_ACISFDBEETLE_H
