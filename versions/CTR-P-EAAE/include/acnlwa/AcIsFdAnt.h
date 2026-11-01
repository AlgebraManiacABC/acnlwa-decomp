#ifndef ACNLWA_ACISFDANT_H
#define ACNLWA_ACISFDANT_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVisMat.h"
#include "acnlwa/ObjectState.h"

class AcIsFdAnt : public ::AcInsectFieldBase, public ::ResourceGetSklVisMat, public ::ObjectState< ::AcIsFdAnt> {
public:
    virtual ~AcIsFdAnt();
};

#endif  // ACNLWA_ACISFDANT_H
