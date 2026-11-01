#ifndef ACNLWA_NN_PIA_TRANSPORT_STATIONMANAGER_H
#define ACNLWA_NN_PIA_TRANSPORT_STATIONMANAGER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class StationManager : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_STATIONMANAGER_H
