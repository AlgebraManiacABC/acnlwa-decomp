#ifndef ACNLWA_NN_NEX_NATTRAVERSALRELAYPROTOCOLIMPL_H
#define ACNLWA_NN_NEX_NATTRAVERSALRELAYPROTOCOLIMPL_H

#include "acnlwa/nn/nex/NATTraversalRelayProtocol.h"

namespace nn {
namespace nex {

class NATTraversalRelayProtocolImpl : public ::nn::nex::NATTraversalRelayProtocol {
public:
    virtual ~NATTraversalRelayProtocolImpl();
    virtual void VF24();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALRELAYPROTOCOLIMPL_H
