#ifndef ACNLWA_ACISFDFEATHER_H
#define ACNLWA_ACISFDFEATHER_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceGetSklVisMat.h"
#include "acnlwa/ObjectState.h"

class AcIsFdFeather : public ::AcInsectFieldFly, public ::ResourceGetSklVisMat, public ::ObjectState< ::AcIsFdFeather> {
public:
    virtual ~AcIsFdFeather();
};

#endif  // ACNLWA_ACISFDFEATHER_H
