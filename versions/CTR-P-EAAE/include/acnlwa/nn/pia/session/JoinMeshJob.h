#ifndef ACNLWA_NN_PIA_SESSION_JOINMESHJOB_H
#define ACNLWA_NN_PIA_SESSION_JOINMESHJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class JoinMeshJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~JoinMeshJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_JOINMESHJOB_H
