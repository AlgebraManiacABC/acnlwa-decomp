#ifndef ACNLWA_NPCMODEL_H
#define ACNLWA_NPCMODEL_H

#include "acnlwa/NpcModelBase.h"

class NpcModel : public ::NpcModelBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual ~NpcModel();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual unsigned int VF19();
};

#endif  // ACNLWA_NPCMODEL_H
