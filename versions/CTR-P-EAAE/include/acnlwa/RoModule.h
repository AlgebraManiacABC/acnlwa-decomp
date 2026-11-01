#ifndef ACNLWA_ROMODULE_H
#define ACNLWA_ROMODULE_H

#include "acnlwa/dLoadSplit.h"

class RoModule : public ::dLoadSplit {
public:
    virtual ~RoModule();
    virtual void VF02();
    virtual void VF03();
};

#endif  // ACNLWA_ROMODULE_H
