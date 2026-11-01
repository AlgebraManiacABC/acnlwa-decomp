#ifndef ACNLWA_NN_PIA_INET_SOCKETSTREAMBASE_H
#define ACNLWA_NN_PIA_INET_SOCKETSTREAMBASE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace inet {

class SocketStreamBase : public ::nn::pia::common::RootObject {
public:
    virtual ~SocketStreamBase();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_SOCKETSTREAMBASE_H
