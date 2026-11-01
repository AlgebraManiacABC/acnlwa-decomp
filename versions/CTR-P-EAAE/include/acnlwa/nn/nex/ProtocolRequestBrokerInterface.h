#ifndef ACNLWA_NN_NEX_PROTOCOLREQUESTBROKERINTERFACE_H
#define ACNLWA_NN_NEX_PROTOCOLREQUESTBROKERINTERFACE_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class ProtocolRequestBrokerInterface : public ::nn::nex::RootObject {
public:
    virtual ~ProtocolRequestBrokerInterface();
    virtual void VF02(unsigned int, unsigned int) = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PROTOCOLREQUESTBROKERINTERFACE_H
