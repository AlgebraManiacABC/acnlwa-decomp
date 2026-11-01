#ifndef ACNLWA_SEADEMOCAMERA_H
#define ACNLWA_SEADEMOCAMERA_H

#include "acnlwa/ICameraUpdater.h"

class SeaDemoCamera : public ::ICameraUpdater {
public:
    virtual void VF00();
};

#endif  // ACNLWA_SEADEMOCAMERA_H
