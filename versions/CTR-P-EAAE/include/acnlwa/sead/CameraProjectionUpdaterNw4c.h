#ifndef ACNLWA_SEAD_CAMERAPROJECTIONUPDATERNW4C_H
#define ACNLWA_SEAD_CAMERAPROJECTIONUPDATERNW4C_H

#include "acnlwa/nw/gfx/CameraProjectionUpdater.h"

namespace sead {

class CameraProjectionUpdaterNw4c : public ::nw::gfx::CameraProjectionUpdater {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CAMERAPROJECTIONUPDATERNW4C_H
