#ifndef ACNLWA_NN_PIA_TRANSPORT_STATIONCONNECTIONINFOTABLE_H
#define ACNLWA_NN_PIA_TRANSPORT_STATIONCONNECTIONINFOTABLE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class StationConnectionInfoTable : public ::nn::pia::common::RootObject {
public:
    virtual ~StationConnectionInfoTable();
    virtual void VF02();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_STATIONCONNECTIONINFOTABLE_H
