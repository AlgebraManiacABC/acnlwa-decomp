#ifndef ACNLWA_NN_PIA_LOCAL_UDSNETWORKCONNECTIONSTATUS_H
#define ACNLWA_NN_PIA_LOCAL_UDSNETWORKCONNECTIONSTATUS_H

#include "acnlwa/nn/pia/local/LocalConnectionStatus.h"

namespace nn {
namespace pia {
namespace local {

class UdsNetworkConnectionStatus : public ::nn::pia::local::LocalConnectionStatus {
public:
    virtual void VF00();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSNETWORKCONNECTIONSTATUS_H
