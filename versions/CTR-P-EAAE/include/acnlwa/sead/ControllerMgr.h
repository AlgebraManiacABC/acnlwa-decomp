#ifndef ACNLWA_SEAD_CONTROLLERMGR_H
#define ACNLWA_SEAD_CONTROLLERMGR_H

#include "acnlwa/sead/CalculateTask.h"

namespace sead {

class ControllerMgr : public ::sead::CalculateTask {
public:
    virtual ~ControllerMgr();
    virtual void VF02();
    virtual void VF03();
    virtual void VF10();
    virtual void VF22();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CONTROLLERMGR_H
