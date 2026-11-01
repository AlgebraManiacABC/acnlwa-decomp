#ifndef ACNLWA_NN_PIA_INET_NEXMATCHUPDATEAPPLICATIONDATAJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHUPDATEAPPLICATIONDATAJOB_H

#include "acnlwa/nn/pia/session/UpdateApplicationDataJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchUpdateApplicationDataJob : public ::nn::pia::session::UpdateApplicationDataJob {
public:
    virtual ~NexMatchUpdateApplicationDataJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHUPDATEAPPLICATIONDATAJOB_H
