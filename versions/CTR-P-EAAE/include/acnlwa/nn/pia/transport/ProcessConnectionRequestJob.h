#ifndef ACNLWA_NN_PIA_TRANSPORT_PROCESSCONNECTIONREQUESTJOB_H
#define ACNLWA_NN_PIA_TRANSPORT_PROCESSCONNECTIONREQUESTJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace transport {

class ProcessConnectionRequestJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~ProcessConnectionRequestJob();
    virtual void VF05();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_PROCESSCONNECTIONREQUESTJOB_H
