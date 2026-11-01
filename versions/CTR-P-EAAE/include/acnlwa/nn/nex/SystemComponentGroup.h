#ifndef ACNLWA_NN_NEX_SYSTEMCOMPONENTGROUP_H
#define ACNLWA_NN_NEX_SYSTEMCOMPONENTGROUP_H

#include "acnlwa/nn/nex/SystemComponent.h"

namespace nn {
namespace nex {

class SystemComponentGroup : public ::nn::nex::SystemComponent {
public:
    virtual ~SystemComponentGroup();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SYSTEMCOMPONENTGROUP_H
