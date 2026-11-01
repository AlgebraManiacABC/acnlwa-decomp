#ifndef ACNLWA_NN_PIA_LOCAL_LOCALKICKOUTMANAGEJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALKICKOUTMANAGEJOB_H

#include "acnlwa/nn/pia/session/KickoutManageJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalKickoutManageJob : public ::nn::pia::session::KickoutManageJob {
public:
    virtual ~LocalKickoutManageJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALKICKOUTMANAGEJOB_H
