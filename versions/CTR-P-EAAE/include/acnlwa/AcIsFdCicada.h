#ifndef ACNLWA_ACISFDCICADA_H
#define ACNLWA_ACISFDCICADA_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdCicada : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdCicada> {
public:
    virtual ~AcIsFdCicada();
};

#endif  // ACNLWA_ACISFDCICADA_H
