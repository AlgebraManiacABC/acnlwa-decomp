#ifndef ACNLWA_NN_PIA_SESSION_CREATEMESHJOB_H
#define ACNLWA_NN_PIA_SESSION_CREATEMESHJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class CreateMeshJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~CreateMeshJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_CREATEMESHJOB_H
