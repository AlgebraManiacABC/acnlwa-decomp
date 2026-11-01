#ifndef ACNLWA_NN_PIA_TRANSPORT_PACKETHANDLER_H
#define ACNLWA_NN_PIA_TRANSPORT_PACKETHANDLER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class PacketHandler : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~PacketHandler();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_PACKETHANDLER_H
