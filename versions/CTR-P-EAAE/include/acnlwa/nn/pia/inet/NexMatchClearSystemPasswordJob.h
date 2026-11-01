#ifndef ACNLWA_NN_PIA_INET_NEXMATCHCLEARSYSTEMPASSWORDJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHCLEARSYSTEMPASSWORDJOB_H

#include "acnlwa/nn/pia/session/ClearMatchmakeSystemPasswordJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchClearSystemPasswordJob : public ::nn::pia::session::ClearMatchmakeSystemPasswordJob {
public:
    virtual ~NexMatchClearSystemPasswordJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHCLEARSYSTEMPASSWORDJOB_H
