#ifndef ACNLWA_NN_PIA_SESSION_CLOSEPARTICIPATIONJOB_H
#define ACNLWA_NN_PIA_SESSION_CLOSEPARTICIPATIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class CloseParticipationJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~CloseParticipationJob();
    virtual void VF05();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_CLOSEPARTICIPATIONJOB_H
