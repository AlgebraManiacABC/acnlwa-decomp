#ifndef ACNLWA_NN_PIA_SESSION_JOINTSESSIONJOB_H
#define ACNLWA_NN_PIA_SESSION_JOINTSESSIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class JointSessionJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~JointSessionJob();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07();
    virtual void VF08();
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24() = 0;
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_JOINTSESSIONJOB_H
