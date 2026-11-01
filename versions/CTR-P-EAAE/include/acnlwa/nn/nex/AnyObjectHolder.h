#ifndef ACNLWA_NN_NEX_ANYOBJECTHOLDER_H
#define ACNLWA_NN_NEX_ANYOBJECTHOLDER_H

#include "acnlwa/nn/nex/Holder.h"

namespace nn {
namespace nex {

template <typename T0, typename T1>
class AnyObjectHolder : public ::nn::nex::Holder<T0> {
public:
    virtual ~AnyObjectHolder();
};

template <typename T0, typename T1>
AnyObjectHolder<T0, T1>::~AnyObjectHolder() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ANYOBJECTHOLDER_H
