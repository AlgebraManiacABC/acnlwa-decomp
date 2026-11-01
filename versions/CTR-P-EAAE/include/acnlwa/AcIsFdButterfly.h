#ifndef ACNLWA_ACISFDBUTTERFLY_H
#define ACNLWA_ACISFDBUTTERFLY_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdButterfly : public ::AcInsectFieldFly, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdButterfly> {
public:
    virtual ~AcIsFdButterfly();
};

#endif  // ACNLWA_ACISFDBUTTERFLY_H
