#ifndef ACNLWA_NN_FND_HEAPBASE_H
#define ACNLWA_NN_FND_HEAPBASE_H

#include "acnlwa/nn/fnd/IntrusiveLinkedList.h"

namespace nn {
namespace fnd {

class HeapBase : public ::nn::fnd::IntrusiveLinkedList< ::nn::fnd::HeapBase,void>::Item {
public:
    virtual void VF00() = 0;
    virtual void VF01() = 0;
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
};

}  // namespace fnd
}  // namespace nn

#endif  // ACNLWA_NN_FND_HEAPBASE_H
