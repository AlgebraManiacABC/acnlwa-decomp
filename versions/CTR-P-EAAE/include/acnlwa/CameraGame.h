#ifndef ACNLWA_CAMERAGAME_H
#define ACNLWA_CAMERAGAME_H

#include "acnlwa/CameraBase.h"

class CameraGame : public ::CameraBase {
public:
    virtual ~CameraGame();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

#endif  // ACNLWA_CAMERAGAME_H
