#ifndef ACNLWA_SEAD_ULCDMETHODTREEMGR_H
#define ACNLWA_SEAD_ULCDMETHODTREEMGR_H

#include "acnlwa/sead/DualScreenMethodTreeMgr.h"

namespace sead {

class UlcdMethodTreeMgr : public ::sead::DualScreenMethodTreeMgr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~UlcdMethodTreeMgr();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_ULCDMETHODTREEMGR_H
