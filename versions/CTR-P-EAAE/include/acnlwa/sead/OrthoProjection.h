#ifndef ACNLWA_SEAD_ORTHOPROJECTION_H
#define ACNLWA_SEAD_ORTHOPROJECTION_H

#include "acnlwa/sead/Projection.h"

namespace sead {

class OrthoProjection : public ::sead::Projection {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~OrthoProjection();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_ORTHOPROJECTION_H
