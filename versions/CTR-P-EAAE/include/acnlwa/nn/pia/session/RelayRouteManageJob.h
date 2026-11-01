#ifndef ACNLWA_NN_PIA_SESSION_RELAYROUTEMANAGEJOB_H
#define ACNLWA_NN_PIA_SESSION_RELAYROUTEMANAGEJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class RelayRouteManageJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~RelayRouteManageJob();
    virtual void VF05();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_RELAYROUTEMANAGEJOB_H
