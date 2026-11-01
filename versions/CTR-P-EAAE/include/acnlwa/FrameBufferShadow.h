#ifndef ACNLWA_FRAMEBUFFERSHADOW_H
#define ACNLWA_FRAMEBUFFERSHADOW_H

#include "acnlwa/sead/FrameBufferCtr.h"

class FrameBufferShadow : public ::sead::FrameBufferCtr {
public:
    virtual ~FrameBufferShadow();
    virtual void VF07();
};

#endif  // ACNLWA_FRAMEBUFFERSHADOW_H
