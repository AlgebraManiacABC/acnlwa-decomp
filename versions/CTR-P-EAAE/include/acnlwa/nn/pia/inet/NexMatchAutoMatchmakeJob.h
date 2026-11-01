#ifndef ACNLWA_NN_PIA_INET_NEXMATCHAUTOMATCHMAKEJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHAUTOMATCHMAKEJOB_H

#include "acnlwa/nn/pia/session/AutoMatchmakeJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchAutoMatchmakeJob : public ::nn::pia::session::AutoMatchmakeJob {
public:
    virtual ~NexMatchAutoMatchmakeJob();
    virtual void VF05();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHAUTOMATCHMAKEJOB_H
