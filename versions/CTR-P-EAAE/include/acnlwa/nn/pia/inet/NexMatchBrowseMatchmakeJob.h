#ifndef ACNLWA_NN_PIA_INET_NEXMATCHBROWSEMATCHMAKEJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHBROWSEMATCHMAKEJOB_H

#include "acnlwa/nn/pia/session/BrowseMatchmakeJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchBrowseMatchmakeJob : public ::nn::pia::session::BrowseMatchmakeJob {
public:
    virtual ~NexMatchBrowseMatchmakeJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHBROWSEMATCHMAKEJOB_H
