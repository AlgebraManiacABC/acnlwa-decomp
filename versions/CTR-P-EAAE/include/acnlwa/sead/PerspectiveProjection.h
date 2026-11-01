#ifndef ACNLWA_SEAD_PERSPECTIVEPROJECTION_H
#define ACNLWA_SEAD_PERSPECTIVEPROJECTION_H

#include "acnlwa/sead/Projection.h"

namespace sead {

class PerspectiveProjection : public ::sead::Projection {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~PerspectiveProjection();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_PERSPECTIVEPROJECTION_H
