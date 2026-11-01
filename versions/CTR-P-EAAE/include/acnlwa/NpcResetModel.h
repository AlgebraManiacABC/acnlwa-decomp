#ifndef ACNLWA_NPCRESETMODEL_H
#define ACNLWA_NPCRESETMODEL_H

#include "acnlwa/NpcSimpleModel.h"

class NpcResetModel : public ::NpcSimpleModel {
public:
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual ~NpcResetModel();
    virtual void VF09();
    virtual void VF12();
    virtual void VF13();
};

#endif  // ACNLWA_NPCRESETMODEL_H
