#ifndef ACNLWA_NN_PIA_INET_NATSERVERADDRESSRESOLVEJOB_H
#define ACNLWA_NN_PIA_INET_NATSERVERADDRESSRESOLVEJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace inet {

class NatServerAddressResolveJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~NatServerAddressResolveJob();
    virtual void VF04();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATSERVERADDRESSRESOLVEJOB_H
