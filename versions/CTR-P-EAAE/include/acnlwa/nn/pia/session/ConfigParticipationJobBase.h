#ifndef ACNLWA_NN_PIA_SESSION_CONFIGPARTICIPATIONJOBBASE_H
#define ACNLWA_NN_PIA_SESSION_CONFIGPARTICIPATIONJOBBASE_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class ConfigParticipationJobBase : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~ConfigParticipationJobBase();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_CONFIGPARTICIPATIONJOBBASE_H
