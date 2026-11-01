#ifndef ACNLWA_NN_PIA_TRANSPORT_STATIONCONNECTIONINFO_H
#define ACNLWA_NN_PIA_TRANSPORT_STATIONCONNECTIONINFO_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class StationConnectionInfo : public ::nn::pia::common::RootObject {
public:
    virtual ~StationConnectionInfo();
    virtual int VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_STATIONCONNECTIONINFO_H
