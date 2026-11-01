#ifndef ACNLWA_NN_NEX_CALLBACK_H
#define ACNLWA_NN_NEX_CALLBACK_H

#include "acnlwa/nn/nex/CallbackRoot.h"

namespace nn {
namespace nex {

template <typename T0, typename T1>
class Callback : public ::nn::nex::CallbackRoot {
public:
    virtual ~Callback();
    virtual void VF02();
    virtual void VF03();
};

template <typename T0, typename T1>
Callback<T0, T1>::~Callback() {}

template <typename T0, typename T1>
void Callback<T0, T1>::VF02() {}

template <typename T0, typename T1>
void Callback<T0, T1>::VF03() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CALLBACK_H
