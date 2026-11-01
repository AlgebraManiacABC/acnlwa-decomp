#ifndef ACNLWA_ACISFDPILLBUG_H
#define ACNLWA_ACISFDPILLBUG_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdPillBug : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdPillBug> {
public:
    virtual ~AcIsFdPillBug();
};

#endif  // ACNLWA_ACISFDPILLBUG_H
