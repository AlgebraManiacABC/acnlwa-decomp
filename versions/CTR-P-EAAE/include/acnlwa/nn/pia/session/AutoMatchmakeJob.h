#ifndef ACNLWA_NN_PIA_SESSION_AUTOMATCHMAKEJOB_H
#define ACNLWA_NN_PIA_SESSION_AUTOMATCHMAKEJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class AutoMatchmakeJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~AutoMatchmakeJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10() = 0;
    virtual void VF11();
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_AUTOMATCHMAKEJOB_H
