#ifndef ACNLWA_NN_NEX_JOBDATASTORECHECKNOTIFICATION_H
#define ACNLWA_NN_NEX_JOBDATASTORECHECKNOTIFICATION_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"
#include "acnlwa/nn/nex/HttpEventListener.h"

namespace nn {
namespace nex {

class JobDataStoreCheckNotification : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable, public ::nn::nex::HttpEventListener {
public:
    virtual ~JobDataStoreCheckNotification();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDATASTORECHECKNOTIFICATION_H
