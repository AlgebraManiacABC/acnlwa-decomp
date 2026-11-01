#ifndef ACNLWA_CAMERACATALOG_H
#define ACNLWA_CAMERACATALOG_H

#include "acnlwa/CameraBase.h"

class CameraCatalog : public ::CameraBase {
public:
    virtual ~CameraCatalog();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_CAMERACATALOG_H
