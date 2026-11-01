#ifndef ACNLWA_NN_NEX_ROOTTRANSPORT_H
#define ACNLWA_NN_NEX_ROOTTRANSPORT_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class RootTransport : public ::nn::nex::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual unsigned int VF09(unsigned int, unsigned int, unsigned int) = 0;
    virtual void VF10();
    virtual ~RootTransport();
    virtual void VF13() = 0;
    virtual void VF14();
    virtual void VF15();
    virtual void VF16() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ROOTTRANSPORT_H
