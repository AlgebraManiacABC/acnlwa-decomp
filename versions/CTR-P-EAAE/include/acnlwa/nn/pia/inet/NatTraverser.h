#ifndef ACNLWA_NN_PIA_INET_NATTRAVERSER_H
#define ACNLWA_NN_PIA_INET_NATTRAVERSER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace inet {

class NatTraverser : public ::nn::pia::common::RootObject {
public:
    virtual ~NatTraverser();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATTRAVERSER_H
