#ifndef ACNLWA_ACISFDLEAF_H
#define ACNLWA_ACISFDLEAF_H

#include "acnlwa/AcInsectFieldRestless.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdLeaf : public ::AcInsectFieldRestless, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdLeaf> {
public:
    virtual ~AcIsFdLeaf();
};

#endif  // ACNLWA_ACISFDLEAF_H
