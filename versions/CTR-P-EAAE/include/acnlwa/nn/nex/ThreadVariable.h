#ifndef ACNLWA_NN_NEX_THREADVARIABLE_H
#define ACNLWA_NN_NEX_THREADVARIABLE_H

#include "acnlwa/nn/nex/ThreadVariableRoot.h"

namespace nn {
namespace nex {

template <typename T0>
class ThreadVariable : public ::nn::nex::ThreadVariableRoot {
public:
    virtual ~ThreadVariable();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

template <typename T0>
ThreadVariable<T0>::~ThreadVariable() {}

template <typename T0>
void ThreadVariable<T0>::VF02() {}

template <typename T0>
void ThreadVariable<T0>::VF03() {}

template <typename T0>
void ThreadVariable<T0>::VF04() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_THREADVARIABLE_H
