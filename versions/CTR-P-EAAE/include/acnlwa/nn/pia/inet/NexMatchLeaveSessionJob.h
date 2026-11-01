#ifndef ACNLWA_NN_PIA_INET_NEXMATCHLEAVESESSIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHLEAVESESSIONJOB_H

#include "acnlwa/nn/pia/session/LeaveSessionJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchLeaveSessionJob : public ::nn::pia::session::LeaveSessionJob {
public:
    virtual ~NexMatchLeaveSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF15();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHLEAVESESSIONJOB_H
