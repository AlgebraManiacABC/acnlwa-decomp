#ifndef ACNLWA_NN_PIA_INET_NATPROBE_H
#define ACNLWA_NN_PIA_INET_NATPROBE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace inet {

class NatProbe : public ::nn::pia::common::RootObject {
public:
    virtual ~NatProbe();
    virtual void VF02();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATPROBE_H
