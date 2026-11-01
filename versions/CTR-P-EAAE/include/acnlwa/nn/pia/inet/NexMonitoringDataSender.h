#ifndef ACNLWA_NN_PIA_INET_NEXMONITORINGDATASENDER_H
#define ACNLWA_NN_PIA_INET_NEXMONITORINGDATASENDER_H

#include "acnlwa/nn/pia/common/MonitoringDataSender.h"

namespace nn {
namespace pia {
namespace inet {

class NexMonitoringDataSender : public ::nn::pia::common::MonitoringDataSender {
public:
    virtual ~NexMonitoringDataSender();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMONITORINGDATASENDER_H
