#ifndef ACNLWA_NN_PIA_SESSION_CREATESESSIONJOB_H
#define ACNLWA_NN_PIA_SESSION_CREATESESSIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class CreateSessionJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~CreateSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_CREATESESSIONJOB_H
