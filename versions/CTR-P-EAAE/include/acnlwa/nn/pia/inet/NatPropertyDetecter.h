#ifndef ACNLWA_NN_PIA_INET_NATPROPERTYDETECTER_H
#define ACNLWA_NN_PIA_INET_NATPROPERTYDETECTER_H

#include "acnlwa/nn/pia/inet/NatDetecter.h"

namespace nn {
namespace pia {
namespace inet {

class NatPropertyDetecter : public ::nn::pia::inet::NatDetecter {
public:
    virtual ~NatPropertyDetecter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATPROPERTYDETECTER_H
