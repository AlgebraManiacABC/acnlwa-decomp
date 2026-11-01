#ifndef ACNLWA_NN_PIA_LOCAL_LOCALSCANNETWORKJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALSCANNETWORKJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalScanNetworkJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalScanNetworkJob();
    virtual void VF05();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALSCANNETWORKJOB_H
