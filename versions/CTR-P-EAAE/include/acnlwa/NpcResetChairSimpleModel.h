#ifndef ACNLWA_NPCRESETCHAIRSIMPLEMODEL_H
#define ACNLWA_NPCRESETCHAIRSIMPLEMODEL_H

#include "acnlwa/NpcSimpleModel.h"

class NpcResetChairSimpleModel : public ::NpcSimpleModel {
public:
    virtual ~NpcResetChairSimpleModel();
    virtual void VF09();
};

#endif  // ACNLWA_NPCRESETCHAIRSIMPLEMODEL_H
