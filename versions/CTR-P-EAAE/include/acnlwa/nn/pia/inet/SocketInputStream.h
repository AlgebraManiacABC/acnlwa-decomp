#ifndef ACNLWA_NN_PIA_INET_SOCKETINPUTSTREAM_H
#define ACNLWA_NN_PIA_INET_SOCKETINPUTSTREAM_H

#include "acnlwa/nn/pia/inet/SocketStreamBase.h"
#include "acnlwa/nn/pia/common/IPacketInput.h"

namespace nn {
namespace pia {
namespace inet {

class SocketInputStream : public ::nn::pia::inet::SocketStreamBase, public ::nn::pia::common::IPacketInput {
public:
    virtual ~SocketInputStream();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_SOCKETINPUTSTREAM_H
