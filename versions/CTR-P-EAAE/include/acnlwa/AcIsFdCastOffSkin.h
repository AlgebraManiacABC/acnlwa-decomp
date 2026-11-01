#ifndef ACNLWA_ACISFDCASTOFFSKIN_H
#define ACNLWA_ACISFDCASTOFFSKIN_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdCastOffSkin : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdCastOffSkin> {
public:
    virtual ~AcIsFdCastOffSkin();
};

#endif  // ACNLWA_ACISFDCASTOFFSKIN_H
