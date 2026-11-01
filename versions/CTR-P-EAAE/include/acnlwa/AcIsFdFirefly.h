#ifndef ACNLWA_ACISFDFIREFLY_H
#define ACNLWA_ACISFDFIREFLY_H

#include "acnlwa/AcInsectFieldFly.h"
#include "acnlwa/ResourceNone.h"
#include "acnlwa/ObjectState.h"

class AcIsFdFirefly : public ::AcInsectFieldFly, public ::ResourceNone, public ::ObjectState< ::AcIsFdFirefly> {
public:
    virtual ~AcIsFdFirefly();
};

#endif  // ACNLWA_ACISFDFIREFLY_H
