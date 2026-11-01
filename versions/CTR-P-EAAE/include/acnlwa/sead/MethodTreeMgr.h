#ifndef ACNLWA_SEAD_METHODTREEMGR_H
#define ACNLWA_SEAD_METHODTREEMGR_H

namespace sead {

class MethodTreeMgr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~MethodTreeMgr();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_METHODTREEMGR_H
