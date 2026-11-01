#ifndef ACNLWA_NN_PIA_INET_SOCKETOUTPUTSTREAM_H
#define ACNLWA_NN_PIA_INET_SOCKETOUTPUTSTREAM_H

#include "acnlwa/nn/pia/inet/SocketStreamBase.h"
#include "acnlwa/nn/pia/common/IPacketOutput.h"

namespace nn {
namespace pia {
namespace inet {

class SocketOutputStream : public ::nn::pia::inet::SocketStreamBase, public ::nn::pia::common::IPacketOutput {
public:
    virtual ~SocketOutputStream();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_SOCKETOUTPUTSTREAM_H
