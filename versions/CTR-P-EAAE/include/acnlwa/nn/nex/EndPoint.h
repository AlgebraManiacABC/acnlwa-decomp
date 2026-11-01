#ifndef ACNLWA_NN_NEX_ENDPOINT_H
#define ACNLWA_NN_NEX_ENDPOINT_H

#include "acnlwa/nn/nex/EndPointInfoInterface.h"
#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class EndPoint : public ::nn::nex::EndPointInfoInterface, public ::nn::nex::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14();
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual void VF19() = 0;
    virtual void VF20() = 0;
    virtual void VF21() = 0;
    virtual void VF22() = 0;
    virtual ~EndPoint();
    virtual void VF25() = 0;
    virtual void VF26() = 0;
    virtual void VF27() = 0;
    virtual void VF28() = 0;
    virtual void VF29() = 0;
    virtual void VF30() = 0;
    virtual void VF31() = 0;
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35() = 0;
    virtual void VF36() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ENDPOINT_H
