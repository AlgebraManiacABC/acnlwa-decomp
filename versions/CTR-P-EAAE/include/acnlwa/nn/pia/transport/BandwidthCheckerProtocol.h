#ifndef ACNLWA_NN_PIA_TRANSPORT_BANDWIDTHCHECKERPROTOCOL_H
#define ACNLWA_NN_PIA_TRANSPORT_BANDWIDTHCHECKERPROTOCOL_H

#include "acnlwa/nn/pia/transport/Protocol.h"

namespace nn {
namespace pia {
namespace transport {

class BandwidthCheckerProtocol : public ::nn::pia::transport::Protocol {
public:
    virtual ~BandwidthCheckerProtocol();
    virtual void VF02();
    virtual void VF03();
    virtual void VF06();
    virtual void VF08();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_BANDWIDTHCHECKERPROTOCOL_H
