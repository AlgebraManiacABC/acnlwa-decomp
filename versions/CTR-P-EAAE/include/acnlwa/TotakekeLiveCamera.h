#ifndef ACNLWA_TOTAKEKELIVECAMERA_H
#define ACNLWA_TOTAKEKELIVECAMERA_H

#include "acnlwa/ICameraUpdater.h"

class TotakekeLiveCamera : public ::ICameraUpdater {
public:
    virtual void VF00();
};

#endif  // ACNLWA_TOTAKEKELIVECAMERA_H
