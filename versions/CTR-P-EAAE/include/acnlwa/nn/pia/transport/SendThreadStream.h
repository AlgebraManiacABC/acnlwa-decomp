#ifndef ACNLWA_NN_PIA_TRANSPORT_SENDTHREADSTREAM_H
#define ACNLWA_NN_PIA_TRANSPORT_SENDTHREADSTREAM_H

#include "acnlwa/nn/pia/transport/TransportThreadStream.h"

namespace nn {
namespace pia {
namespace transport {

class SendThreadStream : public ::nn::pia::transport::TransportThreadStream {
public:
    virtual ~SendThreadStream();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_SENDTHREADSTREAM_H
