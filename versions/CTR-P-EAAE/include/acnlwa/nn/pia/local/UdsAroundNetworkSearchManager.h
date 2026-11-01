#ifndef ACNLWA_NN_PIA_LOCAL_UDSAROUNDNETWORKSEARCHMANAGER_H
#define ACNLWA_NN_PIA_LOCAL_UDSAROUNDNETWORKSEARCHMANAGER_H

#include "acnlwa/nn/pia/local/LocalAroundNetworkSearchManager.h"

namespace nn {
namespace pia {
namespace local {

class UdsAroundNetworkSearchManager : public ::nn::pia::local::LocalAroundNetworkSearchManager {
public:
    virtual ~UdsAroundNetworkSearchManager();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSAROUNDNETWORKSEARCHMANAGER_H
