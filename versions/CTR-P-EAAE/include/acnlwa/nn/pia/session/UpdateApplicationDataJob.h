#ifndef ACNLWA_NN_PIA_SESSION_UPDATEAPPLICATIONDATAJOB_H
#define ACNLWA_NN_PIA_SESSION_UPDATEAPPLICATIONDATAJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class UpdateApplicationDataJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~UpdateApplicationDataJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07() = 0;
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_UPDATEAPPLICATIONDATAJOB_H
