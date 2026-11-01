#ifndef ACNLWA_NN_NEX_MESSAGEDELIVERYSERVER_H
#define ACNLWA_NN_NEX_MESSAGEDELIVERYSERVER_H

#include "acnlwa/nn/nex/_Proto_MessageDeliveryProtocolServer.h"

namespace nn {
namespace nex {

class MessageDeliveryServer : public ::nn::nex::_Proto_MessageDeliveryProtocolServer {
public:
    virtual ~MessageDeliveryServer();
    virtual void VF19();
    virtual void VF20();
    virtual void VF23();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGEDELIVERYSERVER_H
