#ifndef ACNLWA_NN_PIA_LOCAL_LOCALNETWORKSETTING_H
#define ACNLWA_NN_PIA_LOCAL_LOCALNETWORKSETTING_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace local {

class LocalNetworkSetting : public ::nn::pia::common::RootObject {
public:
    virtual void VF00() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALNETWORKSETTING_H
