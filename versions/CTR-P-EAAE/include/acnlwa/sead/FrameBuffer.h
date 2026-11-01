#ifndef ACNLWA_SEAD_FRAMEBUFFER_H
#define ACNLWA_SEAD_FRAMEBUFFER_H

#include "acnlwa/sead/LogicalFrameBuffer.h"

namespace sead {

class FrameBuffer : public ::sead::LogicalFrameBuffer {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~FrameBuffer();
    virtual void VF04();
    virtual void VF05() = 0;
    virtual void VF06();
    virtual void VF07() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_FRAMEBUFFER_H
