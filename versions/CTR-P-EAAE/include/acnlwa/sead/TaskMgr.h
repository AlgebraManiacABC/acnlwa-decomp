#ifndef ACNLWA_SEAD_TASKMGR_H
#define ACNLWA_SEAD_TASKMGR_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class TaskMgr : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_TASKMGR_H
