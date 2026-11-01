#ifndef ACNLWA_NN_PIA_SESSION_DESTROYMESHJOB_H
#define ACNLWA_NN_PIA_SESSION_DESTROYMESHJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class DestroyMeshJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~DestroyMeshJob();
    virtual void VF05();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_DESTROYMESHJOB_H
