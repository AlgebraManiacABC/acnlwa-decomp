#ifndef ACNLWA_NN_PIA_COMMON_JOB_H
#define ACNLWA_NN_PIA_COMMON_JOB_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace common {

class Job : public ::nn::pia::common::RootObject {
public:
    virtual ~Job();
    virtual void VF02();
    virtual void VF03() = 0;
};

}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_JOB_H
