#ifndef ACNLWA_ROOTTASK_H
#define ACNLWA_ROOTTASK_H

#include "acnlwa/sead/UlcdTask.h"

class RootTask : public ::sead::UlcdTask {
public:
    virtual ~RootTask();
    virtual void VF10();
    virtual void VF12();
    virtual void VF22();
};

#endif  // ACNLWA_ROOTTASK_H
