#ifndef ACNLWA_NN_PIA_COMMON_MONITORINGDATASENDER_H
#define ACNLWA_NN_PIA_COMMON_MONITORINGDATASENDER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace common {

class MonitoringDataSender : public ::nn::pia::common::RootObject {
public:
    virtual ~MonitoringDataSender();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05();
};

}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_MONITORINGDATASENDER_H
