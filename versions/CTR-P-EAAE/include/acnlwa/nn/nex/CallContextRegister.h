#ifndef ACNLWA_NN_NEX_CALLCONTEXTREGISTER_H
#define ACNLWA_NN_NEX_CALLCONTEXTREGISTER_H

#include "acnlwa/nn/nex/SystemComponent.h"

namespace nn {
namespace nex {

class CallContextRegister : public ::nn::nex::SystemComponent {
public:
    virtual ~CallContextRegister();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF08();
    virtual void VF10();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CALLCONTEXTREGISTER_H
