#ifndef ACNLWA_NN_PIA_LOCAL_UDSNETWORKSETTING_H
#define ACNLWA_NN_PIA_LOCAL_UDSNETWORKSETTING_H

#include "acnlwa/nn/pia/local/LocalNetworkSetting.h"

namespace nn {
namespace pia {
namespace local {

class UdsNetworkSetting : public ::nn::pia::local::LocalNetworkSetting {
public:
    virtual void VF00();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSNETWORKSETTING_H
