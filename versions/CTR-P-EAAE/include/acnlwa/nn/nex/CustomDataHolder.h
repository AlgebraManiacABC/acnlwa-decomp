#ifndef ACNLWA_NN_NEX_CUSTOMDATAHOLDER_H
#define ACNLWA_NN_NEX_CUSTOMDATAHOLDER_H

#include "acnlwa/nn/nex/AnyObjectHolder.h"
#include "acnlwa/nn/nex/Data.h"
#include "acnlwa/nn/nex/String.h"

namespace nn {
namespace nex {

template <typename T0>
class CustomDataHolder : public ::nn::nex::AnyObjectHolder< ::nn::nex::Data, ::nn::nex::String> {
public:
    virtual ~CustomDataHolder();
};

template <typename T0>
CustomDataHolder<T0>::~CustomDataHolder() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CUSTOMDATAHOLDER_H
