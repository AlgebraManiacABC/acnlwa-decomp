#ifndef ACNLWA_NN_PIA_SESSION_LEAVEWITHHOSTMIGRATIONJOB_H
#define ACNLWA_NN_PIA_SESSION_LEAVEWITHHOSTMIGRATIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class LeaveWithHostMigrationJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LeaveWithHostMigrationJob();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_LEAVEWITHHOSTMIGRATIONJOB_H
