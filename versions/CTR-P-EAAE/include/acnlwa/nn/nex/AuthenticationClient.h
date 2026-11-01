#ifndef ACNLWA_NN_NEX_AUTHENTICATIONCLIENT_H
#define ACNLWA_NN_NEX_AUTHENTICATIONCLIENT_H

#include "acnlwa/nn/nex/ServiceClient.h"

namespace nn {
namespace nex {

class AuthenticationClient : public ::nn::nex::ServiceClient {
public:
    virtual ~AuthenticationClient();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_AUTHENTICATIONCLIENT_H
