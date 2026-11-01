#ifndef ACNLWA_NN_PIA_INET_NATDETECTER_H
#define ACNLWA_NN_PIA_INET_NATDETECTER_H

#include "acnlwa/nn/pia/common/RootObject.h"
#include "acnlwa/nn/pia/common/FixedObjList.h"

namespace nn {
namespace pia {
namespace inet {

class NatDetecter : public ::nn::pia::common::RootObject {
public:
    class SendNatCheckMessage;

    class SendNatCheckMessageList : public ::nn::pia::common::FixedObjList<SendNatCheckMessage,20u> {
    public:
        virtual ~SendNatCheckMessageList();
    };

    virtual ~NatDetecter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08();
    virtual void VF09() = 0;
    virtual void VF10();
    virtual void VF11();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATDETECTER_H
