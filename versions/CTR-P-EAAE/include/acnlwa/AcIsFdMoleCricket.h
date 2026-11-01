#ifndef ACNLWA_ACISFDMOLECRICKET_H
#define ACNLWA_ACISFDMOLECRICKET_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdMoleCricket : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdMoleCricket> {
public:
    virtual ~AcIsFdMoleCricket();
};

#endif  // ACNLWA_ACISFDMOLECRICKET_H
