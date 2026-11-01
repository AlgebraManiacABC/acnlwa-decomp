#ifndef ACNLWA_NN_NEX_JOBDATASTOREGETRATING_H
#define ACNLWA_NN_NEX_JOBDATASTOREGETRATING_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class JobDataStoreGetRating : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobDataStoreGetRating();
    virtual void VF13();
    virtual void VF14();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDATASTOREGETRATING_H
