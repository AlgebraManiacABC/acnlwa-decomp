#ifndef ACNLWA_NN_NEX_TICKETGRANTINGPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_TICKETGRANTINGPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class TicketGrantingProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~TicketGrantingProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TICKETGRANTINGPROTOCOLCLIENT_H
