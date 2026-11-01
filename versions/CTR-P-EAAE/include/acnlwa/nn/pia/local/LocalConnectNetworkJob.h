#ifndef ACNLWA_NN_PIA_LOCAL_LOCALCONNECTNETWORKJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALCONNECTNETWORKJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalConnectNetworkJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalConnectNetworkJob();
    virtual void VF05();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALCONNECTNETWORKJOB_H
