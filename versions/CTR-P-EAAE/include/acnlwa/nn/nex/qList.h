#ifndef ACNLWA_NN_NEX_QLIST_H
#define ACNLWA_NN_NEX_QLIST_H

#include <list>

#include "acnlwa/nn/nex/MemAllocator.h"
#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <typename T0>
class qList : public ::std::list<T0, ::nn::nex::MemAllocator<T0> >, public ::nn::nex::RootObject {
public:
};
}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_QLIST_H
