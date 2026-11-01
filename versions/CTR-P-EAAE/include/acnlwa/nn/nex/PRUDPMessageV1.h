#ifndef ACNLWA_NN_NEX_PRUDPMESSAGEV1_H
#define ACNLWA_NN_NEX_PRUDPMESSAGEV1_H

#include "acnlwa/nn/nex/PRUDPMessageInterface.h"
#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class PRUDPMessageV1 : public ::nn::nex::PRUDPMessageInterface, public ::nn::nex::RootObject {
public:
    virtual ~PRUDPMessageV1();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PRUDPMESSAGEV1_H
