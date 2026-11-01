#ifndef ACNLWA_NN_PIA_TRANSPORT_STATIONPROTOCOLRELIABLE_H
#define ACNLWA_NN_PIA_TRANSPORT_STATIONPROTOCOLRELIABLE_H

#include "acnlwa/nn/pia/transport/Protocol.h"

namespace nn {
namespace pia {
namespace transport {

class StationProtocolReliable : public ::nn::pia::transport::Protocol {
public:
    virtual ~StationProtocolReliable();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_STATIONPROTOCOLRELIABLE_H
