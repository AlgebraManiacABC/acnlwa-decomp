#ifndef ACNLWA_CAMERASHUTTER_H
#define ACNLWA_CAMERASHUTTER_H

#include "acnlwa/state/Mode.h"

class CameraShutter : public ::state::Mode< ::CameraShutter> {
public:
    virtual ~CameraShutter();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_CAMERASHUTTER_H
