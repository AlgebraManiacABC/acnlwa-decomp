#ifndef ACNLWA_NN_PIA_TRANSPORT_STATIONPACKETHANDLER_H
#define ACNLWA_NN_PIA_TRANSPORT_STATIONPACKETHANDLER_H

#include "acnlwa/nn/pia/transport/PacketHandler.h"

namespace nn {
namespace pia {
namespace transport {

class StationPacketHandler : public ::nn::pia::transport::PacketHandler {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~StationPacketHandler();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_STATIONPACKETHANDLER_H
