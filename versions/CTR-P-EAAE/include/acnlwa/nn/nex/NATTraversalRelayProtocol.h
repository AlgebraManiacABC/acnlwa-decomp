#ifndef ACNLWA_NN_NEX_NATTRAVERSALRELAYPROTOCOL_H
#define ACNLWA_NN_NEX_NATTRAVERSALRELAYPROTOCOL_H

#include "acnlwa/nn/nex/_Proto_NATTraversalProtocolServer.h"

namespace nn {
namespace nex {

class NATTraversalRelayProtocol : public ::nn::nex::_Proto_NATTraversalProtocolServer {
public:
    virtual ~NATTraversalRelayProtocol();
    virtual void VF20();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
    virtual void VF27();
    virtual void VF28();
    virtual void VF29();
    virtual void VF30();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALRELAYPROTOCOL_H
