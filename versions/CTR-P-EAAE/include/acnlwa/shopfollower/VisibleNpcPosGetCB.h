#ifndef ACNLWA_SHOPFOLLOWER_VISIBLENPCPOSGETCB_H
#define ACNLWA_SHOPFOLLOWER_VISIBLENPCPOSGETCB_H

#include "acnlwa/BsNpcMgr.h"

namespace shopfollower {

class VisibleNpcPosGetCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

}  // namespace shopfollower

#endif  // ACNLWA_SHOPFOLLOWER_VISIBLENPCPOSGETCB_H
