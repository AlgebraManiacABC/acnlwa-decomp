#ifndef ACNLWA_NN_PIA_INET_NEXFACADE_H
#define ACNLWA_NN_PIA_INET_NEXFACADE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace inet {

class NexFacade : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual ~NexFacade();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXFACADE_H
