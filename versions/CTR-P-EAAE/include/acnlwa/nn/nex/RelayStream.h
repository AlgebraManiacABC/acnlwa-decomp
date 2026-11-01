#ifndef ACNLWA_NN_NEX_RELAYSTREAM_H
#define ACNLWA_NN_NEX_RELAYSTREAM_H

#include "acnlwa/nn/nex/Stream.h"

namespace nn {
namespace nex {

class RelayStream : public ::nn::nex::Stream {
public:
    virtual ~RelayStream();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_RELAYSTREAM_H
