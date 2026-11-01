#ifndef ACNLWA_SEAD_HOSTIOMGR_PARAMETER_H
#define ACNLWA_SEAD_HOSTIOMGR_PARAMETER_H

#include "acnlwa/sead/TaskParameter.h"

namespace sead {
namespace HostIOMgr {

class Parameter : public ::sead::TaskParameter {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace HostIOMgr
}  // namespace sead

#endif  // ACNLWA_SEAD_HOSTIOMGR_PARAMETER_H
