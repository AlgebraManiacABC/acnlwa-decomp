#ifndef ACNLWA_ACISFDTUMBLEBUG_H
#define ACNLWA_ACISFDTUMBLEBUG_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdTumblebug : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdTumblebug> {
public:
    virtual ~AcIsFdTumblebug();
};

#endif  // ACNLWA_ACISFDTUMBLEBUG_H
