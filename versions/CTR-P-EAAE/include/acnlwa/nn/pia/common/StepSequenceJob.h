#ifndef ACNLWA_NN_PIA_COMMON_STEPSEQUENCEJOB_H
#define ACNLWA_NN_PIA_COMMON_STEPSEQUENCEJOB_H

#include "acnlwa/nn/pia/common/Job.h"
#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace common {

class StepSequenceJob : public ::nn::pia::common::Job {
public:
    class Step : public ::nn::pia::common::RootObject {
    public:
        virtual ~Step();
        virtual void VF02();
    };

    virtual ~StepSequenceJob();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_STEPSEQUENCEJOB_H
