#ifndef ACNLWA_NN_PIA_LOCAL_LOCALBACKGROUNDPROCESSJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALBACKGROUNDPROCESSJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalBackgroundProcessJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalBackgroundProcessJob();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALBACKGROUNDPROCESSJOB_H
