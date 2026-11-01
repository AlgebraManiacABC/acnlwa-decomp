#ifndef ACNLWA_ACISFDSPIDER_H
#define ACNLWA_ACISFDSPIDER_H

#include "acnlwa/AcInsectFieldBase.h"
#include "acnlwa/ResourceGetSklVis.h"
#include "acnlwa/ObjectState.h"

class AcIsFdSpider : public ::AcInsectFieldBase, public ::ResourceGetSklVis, public ::ObjectState< ::AcIsFdSpider> {
public:
    virtual ~AcIsFdSpider();
};

#endif  // ACNLWA_ACISFDSPIDER_H
