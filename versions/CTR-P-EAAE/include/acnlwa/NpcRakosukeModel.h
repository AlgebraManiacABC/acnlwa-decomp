#ifndef ACNLWA_NPCRAKOSUKEMODEL_H
#define ACNLWA_NPCRAKOSUKEMODEL_H

#include "acnlwa/NpcSimpleModel.h"

class NpcRakosukeModel : public ::NpcSimpleModel {
public:
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual ~NpcRakosukeModel();
    virtual void VF12();
    virtual void VF13();
    virtual void VF20();
};

#endif  // ACNLWA_NPCRAKOSUKEMODEL_H
