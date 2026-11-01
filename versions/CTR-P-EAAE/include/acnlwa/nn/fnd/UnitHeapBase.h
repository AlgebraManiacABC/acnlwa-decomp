#ifndef ACNLWA_NN_FND_UNITHEAPBASE_H
#define ACNLWA_NN_FND_UNITHEAPBASE_H

#include "acnlwa/nn/fnd/HeapBase.h"

namespace nn {
namespace fnd {

class UnitHeapBase : public ::nn::fnd::HeapBase {
public:
    virtual ~UnitHeapBase();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace fnd
}  // namespace nn

#endif  // ACNLWA_NN_FND_UNITHEAPBASE_H
