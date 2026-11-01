#ifndef ACNLWA_NN_NEX_COMPONENTSTATE_H
#define ACNLWA_NN_NEX_COMPONENTSTATE_H

#include "acnlwa/nn/nex/SystemComponent.h"

namespace nn {
namespace nex {

class ComponentState : public ::nn::nex::SystemComponent {
public:
    virtual ~ComponentState();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_COMPONENTSTATE_H
