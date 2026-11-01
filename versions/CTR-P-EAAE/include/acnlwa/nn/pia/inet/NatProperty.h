#ifndef ACNLWA_NN_PIA_INET_NATPROPERTY_H
#define ACNLWA_NN_PIA_INET_NATPROPERTY_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace inet {

class NatProperty : public ::nn::pia::common::RootObject {
public:
    virtual ~NatProperty();
    virtual void VF02();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATPROPERTY_H
