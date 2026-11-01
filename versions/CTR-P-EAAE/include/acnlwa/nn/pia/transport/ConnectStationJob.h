#ifndef ACNLWA_NN_PIA_TRANSPORT_CONNECTSTATIONJOB_H
#define ACNLWA_NN_PIA_TRANSPORT_CONNECTSTATIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace transport {

class ConnectStationJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~ConnectStationJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_CONNECTSTATIONJOB_H
