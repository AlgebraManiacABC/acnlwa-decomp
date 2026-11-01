#ifndef ACNLWA_NN_PIA_INET_NEXCONNECTSTATIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXCONNECTSTATIONJOB_H

#include "acnlwa/nn/pia/transport/ConnectStationJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexConnectStationJob : public ::nn::pia::transport::ConnectStationJob {
public:
    virtual ~NexConnectStationJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXCONNECTSTATIONJOB_H
