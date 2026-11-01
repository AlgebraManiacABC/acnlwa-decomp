#ifndef ACNLWA_NN_PIA_INET_NEXMATCHJOINSESSIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHJOINSESSIONJOB_H

#include "acnlwa/nn/pia/session/JoinSessionJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchJoinSessionJob : public ::nn::pia::session::JoinSessionJob {
public:
    virtual ~NexMatchJoinSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHJOINSESSIONJOB_H
