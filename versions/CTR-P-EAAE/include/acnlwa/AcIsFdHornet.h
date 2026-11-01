#ifndef ACNLWA_ACISFDHORNET_H
#define ACNLWA_ACISFDHORNET_H

#include "acnlwa/AcInsectFieldFlyPursue.h"
#include "acnlwa/ResourceGetSklVisMat.h"
#include "acnlwa/ObjectState.h"

class AcIsFdHornet : public ::AcInsectFieldFlyPursue, public ::ResourceGetSklVisMat, public ::ObjectState< ::AcIsFdHornet> {
public:
    virtual ~AcIsFdHornet();
};

#endif  // ACNLWA_ACISFDHORNET_H
