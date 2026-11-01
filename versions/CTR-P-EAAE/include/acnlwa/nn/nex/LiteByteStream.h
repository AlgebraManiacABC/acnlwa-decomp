#ifndef ACNLWA_NN_NEX_LITEBYTESTREAM_H
#define ACNLWA_NN_NEX_LITEBYTESTREAM_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <int T0>
class LiteByteStream : public ::nn::nex::RootObject {
public:
    virtual ~LiteByteStream();
};

template <int T0>
LiteByteStream<T0>::~LiteByteStream() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_LITEBYTESTREAM_H
