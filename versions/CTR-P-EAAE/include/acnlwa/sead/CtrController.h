#ifndef ACNLWA_SEAD_CTRCONTROLLER_H
#define ACNLWA_SEAD_CTRCONTROLLER_H

#include "acnlwa/sead/Controller.h"

namespace sead {

class CtrController : public ::sead::Controller {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~CtrController();
    virtual void VF06();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CTRCONTROLLER_H
