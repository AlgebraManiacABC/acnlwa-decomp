#ifndef ACNLWA_NN_PIA_LOCAL_UDSNETWORKDESCRIPTION_H
#define ACNLWA_NN_PIA_LOCAL_UDSNETWORKDESCRIPTION_H

#include "acnlwa/nn/pia/local/LocalNetworkDescription.h"

namespace nn {
namespace pia {
namespace local {

class UdsNetworkDescription : public ::nn::pia::local::LocalNetworkDescription {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~UdsNetworkDescription();
    virtual void VF07();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSNETWORKDESCRIPTION_H
