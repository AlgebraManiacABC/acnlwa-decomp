#ifndef ACNLWA_NN_NEX_UDPTRANSPORT_H
#define ACNLWA_NN_NEX_UDPTRANSPORT_H

#include "acnlwa/nn/nex/SocketTransport.h"

namespace nn {
namespace nex {

class UDPTransport : public ::nn::nex::SocketTransport {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_UDPTRANSPORT_H
