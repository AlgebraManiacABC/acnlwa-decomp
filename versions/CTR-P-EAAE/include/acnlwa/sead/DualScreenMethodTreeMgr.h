#ifndef ACNLWA_SEAD_DUALSCREENMETHODTREEMGR_H
#define ACNLWA_SEAD_DUALSCREENMETHODTREEMGR_H

#include "acnlwa/sead/MethodTreeMgr.h"

namespace sead {

class DualScreenMethodTreeMgr : public ::sead::MethodTreeMgr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~DualScreenMethodTreeMgr();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DUALSCREENMETHODTREEMGR_H
