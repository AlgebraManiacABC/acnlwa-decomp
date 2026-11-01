#ifndef ACNLWA_SEAD_CTRACCELEROMETERADDON_H
#define ACNLWA_SEAD_CTRACCELEROMETERADDON_H

#include "acnlwa/sead/AccelerometerAddon.h"

namespace sead {

class CtrAccelerometerAddon : public ::sead::AccelerometerAddon {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~CtrAccelerometerAddon();
    virtual void VF04();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CTRACCELEROMETERADDON_H
