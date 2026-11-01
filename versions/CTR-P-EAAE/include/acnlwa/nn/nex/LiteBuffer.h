#ifndef ACNLWA_NN_NEX_LITEBUFFER_H
#define ACNLWA_NN_NEX_LITEBUFFER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <int T0>
class LiteBuffer : public ::nn::nex::RootObject {
public:
    virtual ~LiteBuffer();
};

template <int T0>
LiteBuffer<T0>::~LiteBuffer() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_LITEBUFFER_H
