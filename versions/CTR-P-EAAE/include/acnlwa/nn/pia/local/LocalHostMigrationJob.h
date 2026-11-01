#ifndef ACNLWA_NN_PIA_LOCAL_LOCALHOSTMIGRATIONJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALHOSTMIGRATIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalHostMigrationJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~LocalHostMigrationJob();
    virtual void VF05();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALHOSTMIGRATIONJOB_H
