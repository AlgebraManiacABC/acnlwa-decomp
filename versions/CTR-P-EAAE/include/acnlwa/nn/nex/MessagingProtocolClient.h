#ifndef ACNLWA_NN_NEX_MESSAGINGPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_MESSAGINGPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class MessagingProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~MessagingProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGINGPROTOCOLCLIENT_H
