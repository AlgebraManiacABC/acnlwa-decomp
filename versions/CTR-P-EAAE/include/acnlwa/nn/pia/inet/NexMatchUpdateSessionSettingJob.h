#ifndef ACNLWA_NN_PIA_INET_NEXMATCHUPDATESESSIONSETTINGJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHUPDATESESSIONSETTINGJOB_H

#include "acnlwa/nn/pia/session/UpdateSessionSettingJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchUpdateSessionSettingJob : public ::nn::pia::session::UpdateSessionSettingJob {
public:
    virtual ~NexMatchUpdateSessionSettingJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHUPDATESESSIONSETTINGJOB_H
