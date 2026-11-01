#ifndef ACNLWA_NN_PIA_INET_NEXNATRELAY_H
#define ACNLWA_NN_PIA_INET_NEXNATRELAY_H

#include "acnlwa/nn/pia/inet/NatRelayInterface.h"

namespace nn {
namespace pia {
namespace inet {

class NexNatRelay : public ::nn::pia::inet::NatRelayInterface {
public:
    virtual ~NexNatRelay();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXNATRELAY_H
