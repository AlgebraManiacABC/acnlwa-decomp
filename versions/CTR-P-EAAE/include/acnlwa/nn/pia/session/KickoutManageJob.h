#ifndef ACNLWA_NN_PIA_SESSION_KICKOUTMANAGEJOB_H
#define ACNLWA_NN_PIA_SESSION_KICKOUTMANAGEJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class KickoutManageJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~KickoutManageJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_KICKOUTMANAGEJOB_H
