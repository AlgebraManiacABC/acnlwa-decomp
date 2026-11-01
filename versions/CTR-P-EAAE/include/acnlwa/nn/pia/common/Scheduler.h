#ifndef ACNLWA_NN_PIA_COMMON_SCHEDULER_H
#define ACNLWA_NN_PIA_COMMON_SCHEDULER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace common {

class Scheduler : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
};

}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_SCHEDULER_H
