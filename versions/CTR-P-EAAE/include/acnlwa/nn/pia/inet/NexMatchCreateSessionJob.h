#ifndef ACNLWA_NN_PIA_INET_NEXMATCHCREATESESSIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHCREATESESSIONJOB_H

#include "acnlwa/nn/pia/session/CreateSessionJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchCreateSessionJob : public ::nn::pia::session::CreateSessionJob {
public:
    virtual ~NexMatchCreateSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHCREATESESSIONJOB_H
