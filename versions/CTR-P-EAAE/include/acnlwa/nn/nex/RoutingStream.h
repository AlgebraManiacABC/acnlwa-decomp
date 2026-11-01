#ifndef ACNLWA_NN_NEX_ROUTINGSTREAM_H
#define ACNLWA_NN_NEX_ROUTINGSTREAM_H

#include "acnlwa/nn/nex/Stream.h"

namespace nn {
namespace nex {

class RoutingStream : public ::nn::nex::Stream {
public:
    virtual ~RoutingStream();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ROUTINGSTREAM_H
