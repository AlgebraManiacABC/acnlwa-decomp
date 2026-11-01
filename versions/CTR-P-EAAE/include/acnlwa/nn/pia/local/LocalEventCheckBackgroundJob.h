#ifndef ACNLWA_NN_PIA_LOCAL_LOCALEVENTCHECKBACKGROUNDJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALEVENTCHECKBACKGROUNDJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalEventCheckBackgroundJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalEventCheckBackgroundJob();
    virtual void VF05();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALEVENTCHECKBACKGROUNDJOB_H
