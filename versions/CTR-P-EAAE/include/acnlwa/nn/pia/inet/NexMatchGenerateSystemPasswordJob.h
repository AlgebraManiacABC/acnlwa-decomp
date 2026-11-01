#ifndef ACNLWA_NN_PIA_INET_NEXMATCHGENERATESYSTEMPASSWORDJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHGENERATESYSTEMPASSWORDJOB_H

#include "acnlwa/nn/pia/session/GenerateMatchmakeSystemPasswordJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchGenerateSystemPasswordJob : public ::nn::pia::session::GenerateMatchmakeSystemPasswordJob {
public:
    virtual ~NexMatchGenerateSystemPasswordJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHGENERATESYSTEMPASSWORDJOB_H
