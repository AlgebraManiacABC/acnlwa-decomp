#ifndef ACNLWA_NN_NEX_CLIENTPROTOCOLREQUESTBROKER_H
#define ACNLWA_NN_NEX_CLIENTPROTOCOLREQUESTBROKER_H

#include "acnlwa/nn/nex/ProtocolRequestBrokerInterface.h"

namespace nn {
namespace nex {

class ClientProtocolRequestBroker : public ::nn::nex::ProtocolRequestBrokerInterface {
public:
    virtual ~ClientProtocolRequestBroker();
    virtual void VF02(unsigned int, unsigned int);
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
    virtual void VF15();
    virtual void VF16();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CLIENTPROTOCOLREQUESTBROKER_H
