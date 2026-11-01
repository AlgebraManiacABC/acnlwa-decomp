#ifndef ACNLWA_NN_NEX_MESSAGINGCLIENT_H
#define ACNLWA_NN_NEX_MESSAGINGCLIENT_H

#include "acnlwa/nn/nex/ServiceClient.h"

namespace nn {
namespace nex {

class MessagingClient : public ::nn::nex::ServiceClient {
public:
    virtual ~MessagingClient();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGINGCLIENT_H
