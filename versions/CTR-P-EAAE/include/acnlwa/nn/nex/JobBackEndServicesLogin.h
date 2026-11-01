#ifndef ACNLWA_NN_NEX_JOBBACKENDSERVICESLOGIN_H
#define ACNLWA_NN_NEX_JOBBACKENDSERVICESLOGIN_H

#include "acnlwa/nn/nex/StepSequenceJob.h"

namespace nn {
namespace nex {

class JobBackEndServicesLogin : public ::nn::nex::StepSequenceJob {
public:
    virtual ~JobBackEndServicesLogin();
    virtual void VF09();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBBACKENDSERVICESLOGIN_H
