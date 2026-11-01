#ifndef ACNLWA_NN_FND_EXPHEAPTEMPLATE_H
#define ACNLWA_NN_FND_EXPHEAPTEMPLATE_H

#include "acnlwa/nn/fnd/ExpHeapBase.h"
#include "acnlwa/nn/fnd/IAllocator.h"

namespace nn {
namespace fnd {

template <typename T0>
class ExpHeapTemplate : public ::nn::fnd::ExpHeapBase, private T0::LockObject {
public:
    class Allocator : public ::nn::fnd::IAllocator {
    public:
        virtual void VF00();
        virtual void VF01();
        virtual ~Allocator();
    };

    virtual ~ExpHeapTemplate();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

template <typename T0>
void ExpHeapTemplate<T0>::Allocator::VF00() {}

template <typename T0>
void ExpHeapTemplate<T0>::Allocator::VF01() {}

template <typename T0>
ExpHeapTemplate<T0>::Allocator::~Allocator() {}

template <typename T0>
ExpHeapTemplate<T0>::~ExpHeapTemplate() {}

template <typename T0>
void ExpHeapTemplate<T0>::VF02() {}

template <typename T0>
void ExpHeapTemplate<T0>::VF03() {}

template <typename T0>
void ExpHeapTemplate<T0>::VF04() {}

template <typename T0>
void ExpHeapTemplate<T0>::VF05() {}

template <typename T0>
void ExpHeapTemplate<T0>::VF06() {}


}  // namespace fnd
}  // namespace nn

#endif  // ACNLWA_NN_FND_EXPHEAPTEMPLATE_H
