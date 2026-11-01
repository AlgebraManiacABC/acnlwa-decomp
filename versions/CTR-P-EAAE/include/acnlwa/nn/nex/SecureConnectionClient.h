#ifndef ACNLWA_NN_NEX_SECURECONNECTIONCLIENT_H
#define ACNLWA_NN_NEX_SECURECONNECTIONCLIENT_H

#include "acnlwa/nn/nex/ServiceClient.h"

namespace nn {
namespace nex {

class SecureConnectionClient : public ::nn::nex::ServiceClient {
public:
    virtual ~SecureConnectionClient();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SECURECONNECTIONCLIENT_H
