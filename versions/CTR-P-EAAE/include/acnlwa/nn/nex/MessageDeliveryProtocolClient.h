#ifndef ACNLWA_NN_NEX_MESSAGEDELIVERYPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_MESSAGEDELIVERYPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class MessageDeliveryProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~MessageDeliveryProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGEDELIVERYPROTOCOLCLIENT_H
