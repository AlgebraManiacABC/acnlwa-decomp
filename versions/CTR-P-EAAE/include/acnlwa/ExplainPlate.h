#ifndef ACNLWA_EXPLAINPLATE_H
#define ACNLWA_EXPLAINPLATE_H

#include "acnlwa/ExplainPlateBase.h"

class ExplainPlate : public ::ExplainPlateBase {
public:
    virtual ~ExplainPlate();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_EXPLAINPLATE_H
