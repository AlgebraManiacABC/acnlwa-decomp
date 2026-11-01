#ifndef ACNLWA_NPCDCOANIMMODEL_H
#define ACNLWA_NPCDCOANIMMODEL_H

#include "acnlwa/NpcSimpleModel.h"

class NpcDcoAnimModel : public ::NpcSimpleModel {
public:
    virtual void VF00();
    virtual void VF03();
    virtual ~NpcDcoAnimModel();
};

#endif  // ACNLWA_NPCDCOANIMMODEL_H
