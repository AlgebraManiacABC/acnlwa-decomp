#ifndef ACNLWA_NN_NEX_VIRTUALINTERNET_H
#define ACNLWA_NN_NEX_VIRTUALINTERNET_H

#include "acnlwa/nn/nex/TimedQueue.h"

namespace nn {
namespace nex {

template <typename T0>
class VirtualInternet : public ::nn::nex::TimedQueue<T0> {
public:
    virtual ~VirtualInternet();
    virtual void VF02();
};

template <typename T0>
VirtualInternet<T0>::~VirtualInternet() {}

template <typename T0>
void VirtualInternet<T0>::VF02() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_VIRTUALINTERNET_H
