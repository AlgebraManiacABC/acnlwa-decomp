#ifndef ACNLWA_NN_PIA_TRANSPORT_STATIONLOCATION_H
#define ACNLWA_NN_PIA_TRANSPORT_STATIONLOCATION_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class StationLocation : public ::nn::pia::common::RootObject {
public:
    virtual ~StationLocation();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_STATIONLOCATION_H
