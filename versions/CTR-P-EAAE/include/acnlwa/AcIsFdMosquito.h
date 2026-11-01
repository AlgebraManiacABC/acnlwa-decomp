#ifndef ACNLWA_ACISFDMOSQUITO_H
#define ACNLWA_ACISFDMOSQUITO_H

#include "acnlwa/AcInsectFieldFlyPursue.h"
#include "acnlwa/ResourceGetSkeletal.h"
#include "acnlwa/ObjectState.h"

class AcIsFdMosquito : public ::AcInsectFieldFlyPursue, public ::ResourceGetSkeletal, public ::ObjectState< ::AcIsFdMosquito> {
public:
    virtual ~AcIsFdMosquito();
};

#endif  // ACNLWA_ACISFDMOSQUITO_H
