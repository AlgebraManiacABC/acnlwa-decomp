#ifndef ACNLWA_ACISFDSTUMP_H
#define ACNLWA_ACISFDSTUMP_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdStump : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdStump> {
public:
    virtual ~AcIsFdStump();
};

#endif  // ACNLWA_ACISFDSTUMP_H
