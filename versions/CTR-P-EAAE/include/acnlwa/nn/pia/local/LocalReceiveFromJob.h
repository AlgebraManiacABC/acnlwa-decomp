#ifndef ACNLWA_NN_PIA_LOCAL_LOCALRECEIVEFROMJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALRECEIVEFROMJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalReceiveFromJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalReceiveFromJob();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALRECEIVEFROMJOB_H
