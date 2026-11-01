#ifndef ACNLWA_NN_PIA_INET_NATDETECTIONJOB_H
#define ACNLWA_NN_PIA_INET_NATDETECTIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace inet {

class NatDetectionJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~NatDetectionJob();
    virtual void VF04();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATDETECTIONJOB_H
