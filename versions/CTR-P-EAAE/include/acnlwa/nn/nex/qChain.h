#ifndef ACNLWA_NN_NEX_QCHAIN_H
#define ACNLWA_NN_NEX_QCHAIN_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <typename T0, typename T1>
class qChain : public ::nn::nex::RootObject {
public:
    virtual ~qChain();
};

template <typename T0, typename T1>
qChain<T0, T1>::~qChain() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_QCHAIN_H
