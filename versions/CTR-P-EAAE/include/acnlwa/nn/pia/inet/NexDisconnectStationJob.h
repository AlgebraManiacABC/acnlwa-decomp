#ifndef ACNLWA_NN_PIA_INET_NEXDISCONNECTSTATIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXDISCONNECTSTATIONJOB_H

#include "acnlwa/nn/pia/transport/DisconnectStationJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexDisconnectStationJob : public ::nn::pia::transport::DisconnectStationJob {
public:
    virtual ~NexDisconnectStationJob();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXDISCONNECTSTATIONJOB_H
