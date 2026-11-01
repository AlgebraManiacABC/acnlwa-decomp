#ifndef ACNLWA_NN_PIA_INET_NEXMATCHDESTROYSESSIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHDESTROYSESSIONJOB_H

#include "acnlwa/nn/pia/session/DestroySessionJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchDestroySessionJob : public ::nn::pia::session::DestroySessionJob {
public:
    virtual ~NexMatchDestroySessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHDESTROYSESSIONJOB_H
