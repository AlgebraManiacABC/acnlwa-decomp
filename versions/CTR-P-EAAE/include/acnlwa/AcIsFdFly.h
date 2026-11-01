#ifndef ACNLWA_ACISFDFLY_H
#define ACNLWA_ACISFDFLY_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceGetSkeletal.h"
#include "acnlwa/ObjectState.h"

class AcIsFdFly : public ::AcInsectFieldFly, public ::ResourceGetSkeletal, public ::ObjectState< ::AcIsFdFly> {
public:
    virtual ~AcIsFdFly();
};

#endif  // ACNLWA_ACISFDFLY_H
