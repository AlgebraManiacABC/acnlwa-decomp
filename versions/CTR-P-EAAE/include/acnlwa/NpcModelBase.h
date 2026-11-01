#ifndef ACNLWA_NPCMODELBASE_H
#define ACNLWA_NPCMODELBASE_H

#include "acnlwa/HumanModel.h"

class NpcModelBase : public ::HumanModel {
public:
    virtual void VF00();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual ~NpcModelBase();
    virtual void VF09();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual unsigned int VF19();
};

#endif  // ACNLWA_NPCMODELBASE_H
