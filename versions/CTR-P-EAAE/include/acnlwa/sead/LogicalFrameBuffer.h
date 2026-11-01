#ifndef ACNLWA_SEAD_LOGICALFRAMEBUFFER_H
#define ACNLWA_SEAD_LOGICALFRAMEBUFFER_H

namespace sead {

class LogicalFrameBuffer {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~LogicalFrameBuffer();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_LOGICALFRAMEBUFFER_H
