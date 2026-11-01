#ifndef ACNLWA_SEAD_FRAMEBUFFERCTR_H
#define ACNLWA_SEAD_FRAMEBUFFERCTR_H

#include "acnlwa/sead/FrameBuffer.h"

namespace sead {

class FrameBufferCtr : public ::sead::FrameBuffer {
public:
    virtual ~FrameBufferCtr();
    virtual void VF05();
    virtual void VF07();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_FRAMEBUFFERCTR_H
