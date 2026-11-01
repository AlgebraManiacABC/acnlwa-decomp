#ifndef ACNLWA_GMOLOADER_H
#define ACNLWA_GMOLOADER_H

#include "acnlwa/dLoadSplit.h"

class GmoLoader : public ::dLoadSplit {
public:
    virtual ~GmoLoader();
    virtual void VF02();
};

#endif  // ACNLWA_GMOLOADER_H
