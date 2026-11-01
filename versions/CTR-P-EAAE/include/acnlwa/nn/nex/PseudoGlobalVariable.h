#ifndef ACNLWA_NN_NEX_PSEUDOGLOBALVARIABLE_H
#define ACNLWA_NN_NEX_PSEUDOGLOBALVARIABLE_H

#include "acnlwa/nn/nex/PseudoGlobalVariableRoot.h"

namespace nn {
namespace nex {

template <typename T0>
class PseudoGlobalVariable : public ::nn::nex::PseudoGlobalVariableRoot {
public:
    virtual ~PseudoGlobalVariable();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

template <typename T0>
PseudoGlobalVariable<T0>::~PseudoGlobalVariable() {}

template <typename T0>
void PseudoGlobalVariable<T0>::VF02() {}

template <typename T0>
void PseudoGlobalVariable<T0>::VF03() {}

template <typename T0>
void PseudoGlobalVariable<T0>::VF04() {}

template <typename T0>
void PseudoGlobalVariable<T0>::VF05() {}

template <typename T0>
void PseudoGlobalVariable<T0>::VF06() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PSEUDOGLOBALVARIABLE_H
