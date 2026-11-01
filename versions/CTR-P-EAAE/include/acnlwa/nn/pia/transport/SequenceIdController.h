#ifndef ACNLWA_NN_PIA_TRANSPORT_SEQUENCEIDCONTROLLER_H
#define ACNLWA_NN_PIA_TRANSPORT_SEQUENCEIDCONTROLLER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class SequenceIdController : public ::nn::pia::common::RootObject {
public:
    virtual ~SequenceIdController();
    virtual void VF02();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_SEQUENCEIDCONTROLLER_H
