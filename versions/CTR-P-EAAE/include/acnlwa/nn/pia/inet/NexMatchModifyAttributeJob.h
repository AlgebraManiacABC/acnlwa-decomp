#ifndef ACNLWA_NN_PIA_INET_NEXMATCHMODIFYATTRIBUTEJOB_H
#define ACNLWA_NN_PIA_INET_NEXMATCHMODIFYATTRIBUTEJOB_H

#include "acnlwa/nn/pia/session/ModifyAttributeJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexMatchModifyAttributeJob : public ::nn::pia::session::ModifyAttributeJob {
public:
    virtual ~NexMatchModifyAttributeJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXMATCHMODIFYATTRIBUTEJOB_H
