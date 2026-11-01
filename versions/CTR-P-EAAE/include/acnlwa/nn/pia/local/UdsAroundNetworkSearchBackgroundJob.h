#ifndef ACNLWA_NN_PIA_LOCAL_UDSAROUNDNETWORKSEARCHBACKGROUNDJOB_H
#define ACNLWA_NN_PIA_LOCAL_UDSAROUNDNETWORKSEARCHBACKGROUNDJOB_H

#include "acnlwa/nn/pia/local/LocalAroundNetworkSearchBackgroundJob.h"

namespace nn {
namespace pia {
namespace local {

class UdsAroundNetworkSearchBackgroundJob : public ::nn::pia::local::LocalAroundNetworkSearchBackgroundJob {
public:
    virtual ~UdsAroundNetworkSearchBackgroundJob();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSAROUNDNETWORKSEARCHBACKGROUNDJOB_H
