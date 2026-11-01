#ifndef ACNLWA_NPCBOARDINGSIMPLEMODEL_H
#define ACNLWA_NPCBOARDINGSIMPLEMODEL_H

#include "acnlwa/NpcSimpleModel.h"

class NpcBoardingSimpleModel : public ::NpcSimpleModel {
public:
    virtual ~NpcBoardingSimpleModel();
    virtual void VF09();
};

#endif  // ACNLWA_NPCBOARDINGSIMPLEMODEL_H
