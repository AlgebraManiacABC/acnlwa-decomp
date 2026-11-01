#ifndef ACNLWA_NN_NEX_NATTRAVERSALPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_NATTRAVERSALPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class NATTraversalProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~NATTraversalProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALPROTOCOLCLIENT_H
