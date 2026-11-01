#ifndef ACNLWA_CAMERABASE_H
#define ACNLWA_CAMERABASE_H

class CameraBase {
public:
    virtual ~CameraBase();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04();
    virtual void VF05();
};

#endif  // ACNLWA_CAMERABASE_H
