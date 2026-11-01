#ifndef ACNLWA_NN_PIA_SESSION_PROCESSHOSTMIGRATIONJOB_H
#define ACNLWA_NN_PIA_SESSION_PROCESSHOSTMIGRATIONJOB_H

#include "acnlwa/nn/pia/common/StepSequenceJob.h"

namespace nn {
namespace pia {
namespace session {

class ProcessHostMigrationJob : public ::nn::pia::common::StepSequenceJob {
public:
    virtual ~ProcessHostMigrationJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09() = 0;
    virtual void VF10();
    virtual void VF11() = 0;
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_PROCESSHOSTMIGRATIONJOB_H
