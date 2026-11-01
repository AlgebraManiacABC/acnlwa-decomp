#ifndef ACNLWA_ACISFDTIGERBEETLE_H
#define ACNLWA_ACISFDTIGERBEETLE_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdTigerBeetle : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdTigerBeetle> {
public:
    virtual ~AcIsFdTigerBeetle();
};

#endif  // ACNLWA_ACISFDTIGERBEETLE_H
