#ifndef ACNLWA_SEAD_CAMERA_H
#define ACNLWA_SEAD_CAMERA_H

namespace sead {

class Camera {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~Camera();
    virtual void VF04() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CAMERA_H
