#ifndef ACNLWA_NN_FND_UNITHEAPTEMPLATE_H
#define ACNLWA_NN_FND_UNITHEAPTEMPLATE_H

#include "acnlwa/nn/fnd/UnitHeapBase.h"

namespace nn {
namespace fnd {

template <typename T0>
class UnitHeapTemplate : public ::nn::fnd::UnitHeapBase, private T0::LockObject {
public:
    virtual ~UnitHeapTemplate();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

template <typename T0>
UnitHeapTemplate<T0>::~UnitHeapTemplate() {}

template <typename T0>
void UnitHeapTemplate<T0>::VF02() {}

template <typename T0>
void UnitHeapTemplate<T0>::VF03() {}

template <typename T0>
void UnitHeapTemplate<T0>::VF04() {}

template <typename T0>
void UnitHeapTemplate<T0>::VF05() {}

template <typename T0>
void UnitHeapTemplate<T0>::VF06() {}


}  // namespace fnd
}  // namespace nn

#endif  // ACNLWA_NN_FND_UNITHEAPTEMPLATE_H
