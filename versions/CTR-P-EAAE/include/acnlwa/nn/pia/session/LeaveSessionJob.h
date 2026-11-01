#ifndef ACNLWA_NN_PIA_SESSION_LEAVESESSIONJOB_H
#define ACNLWA_NN_PIA_SESSION_LEAVESESSIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class LeaveSessionJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LeaveSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10();
    virtual void VF11() = 0;
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_LEAVESESSIONJOB_H
