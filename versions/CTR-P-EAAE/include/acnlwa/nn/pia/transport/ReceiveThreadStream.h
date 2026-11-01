#ifndef ACNLWA_NN_PIA_TRANSPORT_RECEIVETHREADSTREAM_H
#define ACNLWA_NN_PIA_TRANSPORT_RECEIVETHREADSTREAM_H

#include "acnlwa/nn/pia/transport/TransportThreadStream.h"

namespace nn {
namespace pia {
namespace transport {

class ReceiveThreadStream : public ::nn::pia::transport::TransportThreadStream {
public:
    virtual ~ReceiveThreadStream();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_RECEIVETHREADSTREAM_H
