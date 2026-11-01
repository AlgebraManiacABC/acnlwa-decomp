#ifndef ACNLWA_ACINSECTFIELDRESTLESS_H
#define ACNLWA_ACINSECTFIELDRESTLESS_H

#include "acnlwa/AcInsectFieldBase.h"

class AcInsectFieldRestless : public ::AcInsectFieldBase {
public:
    virtual ~AcInsectFieldRestless();
    virtual void VF50();
    virtual void VF56();
};

#endif  // ACNLWA_ACINSECTFIELDRESTLESS_H
