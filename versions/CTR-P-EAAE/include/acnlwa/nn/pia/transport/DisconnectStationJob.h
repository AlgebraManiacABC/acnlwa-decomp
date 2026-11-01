#ifndef ACNLWA_NN_PIA_TRANSPORT_DISCONNECTSTATIONJOB_H
#define ACNLWA_NN_PIA_TRANSPORT_DISCONNECTSTATIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace transport {

class DisconnectStationJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~DisconnectStationJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_DISCONNECTSTATIONJOB_H
