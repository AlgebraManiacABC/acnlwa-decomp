#ifndef ACNLWA_ACISFDSEASLATER_H
#define ACNLWA_ACISFDSEASLATER_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdSeaSlater : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdSeaSlater> {
public:
    virtual ~AcIsFdSeaSlater();
};

#endif  // ACNLWA_ACISFDSEASLATER_H
