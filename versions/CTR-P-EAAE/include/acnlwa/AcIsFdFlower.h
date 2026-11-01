#ifndef ACNLWA_ACISFDFLOWER_H
#define ACNLWA_ACISFDFLOWER_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdFlower : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdFlower> {
public:
    virtual ~AcIsFdFlower();
};

#endif  // ACNLWA_ACISFDFLOWER_H
