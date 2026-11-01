#ifndef ACNLWA_NN_PIA_INET_NEXNATRELAYINTERFACE_H
#define ACNLWA_NN_PIA_INET_NEXNATRELAYINTERFACE_H

#include "acnlwa/nn/nex/NATRelayInterface.h"

namespace nn {
namespace pia {
namespace inet {

class NexNatRelayInterface : public ::nn::nex::NATRelayInterface {
public:
    virtual ~NexNatRelayInterface();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXNATRELAYINTERFACE_H
