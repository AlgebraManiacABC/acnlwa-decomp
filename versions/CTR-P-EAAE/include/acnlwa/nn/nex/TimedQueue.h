#ifndef ACNLWA_NN_NEX_TIMEDQUEUE_H
#define ACNLWA_NN_NEX_TIMEDQUEUE_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <typename T0>
class TimedQueue : public ::nn::nex::RootObject {
public:
    virtual ~TimedQueue();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

template <typename T0>
TimedQueue<T0>::~TimedQueue() {}

template <typename T0>
void TimedQueue<T0>::VF02() {}

template <typename T0>
void TimedQueue<T0>::VF03() {}

template <typename T0>
void TimedQueue<T0>::VF04() {}

template <typename T0>
void TimedQueue<T0>::VF05() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TIMEDQUEUE_H
