#ifndef ACNLWA_SYSTEMTASK_H
#define ACNLWA_SYSTEMTASK_H

#include "acnlwa/sead/UlcdTask.h"

class SystemTask : public ::sead::UlcdTask {
public:
    virtual ~SystemTask();
    virtual void VF10();
    virtual void VF12();
    virtual void VF13();
    virtual void VF22();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
};

#endif  // ACNLWA_SYSTEMTASK_H
