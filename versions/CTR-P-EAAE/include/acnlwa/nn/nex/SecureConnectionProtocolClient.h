#ifndef ACNLWA_NN_NEX_SECURECONNECTIONPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_SECURECONNECTIONPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class SecureConnectionProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~SecureConnectionProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SECURECONNECTIONPROTOCOLCLIENT_H
