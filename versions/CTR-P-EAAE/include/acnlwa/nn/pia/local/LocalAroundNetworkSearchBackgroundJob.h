#ifndef ACNLWA_NN_PIA_LOCAL_LOCALAROUNDNETWORKSEARCHBACKGROUNDJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALAROUNDNETWORKSEARCHBACKGROUNDJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalAroundNetworkSearchBackgroundJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalAroundNetworkSearchBackgroundJob();
    virtual void VF05();
    virtual void VF06() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALAROUNDNETWORKSEARCHBACKGROUNDJOB_H
