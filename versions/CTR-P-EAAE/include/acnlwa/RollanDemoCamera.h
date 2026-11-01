#ifndef ACNLWA_ROLLANDEMOCAMERA_H
#define ACNLWA_ROLLANDEMOCAMERA_H

#include "acnlwa/ICameraUpdater.h"

class RollanDemoCamera : public ::ICameraUpdater {
public:
    virtual void VF00();
};

#endif  // ACNLWA_ROLLANDEMOCAMERA_H
