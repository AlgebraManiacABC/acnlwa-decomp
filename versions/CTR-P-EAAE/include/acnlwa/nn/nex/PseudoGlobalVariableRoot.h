#ifndef ACNLWA_NN_NEX_PSEUDOGLOBALVARIABLEROOT_H
#define ACNLWA_NN_NEX_PSEUDOGLOBALVARIABLEROOT_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class PseudoGlobalVariableRoot : public ::nn::nex::RootObject {
public:
    virtual ~PseudoGlobalVariableRoot();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PSEUDOGLOBALVARIABLEROOT_H
