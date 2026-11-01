#ifndef ACNLWA_NN_NEX_VIRTUALMODEM_H
#define ACNLWA_NN_NEX_VIRTUALMODEM_H

#include "acnlwa/nn/nex/TimedQueue.h"

namespace nn {
namespace nex {

template <typename T0>
class VirtualModem : public ::nn::nex::TimedQueue<T0> {
public:
    virtual ~VirtualModem();
    virtual void VF02();
};

template <typename T0>
VirtualModem<T0>::~VirtualModem() {}

template <typename T0>
void VirtualModem<T0>::VF02() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_VIRTUALMODEM_H
