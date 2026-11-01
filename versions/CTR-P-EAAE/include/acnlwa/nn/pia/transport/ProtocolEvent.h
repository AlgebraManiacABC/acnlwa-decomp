#ifndef ACNLWA_NN_PIA_TRANSPORT_PROTOCOLEVENT_H
#define ACNLWA_NN_PIA_TRANSPORT_PROTOCOLEVENT_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class ProtocolEvent : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_PROTOCOLEVENT_H
