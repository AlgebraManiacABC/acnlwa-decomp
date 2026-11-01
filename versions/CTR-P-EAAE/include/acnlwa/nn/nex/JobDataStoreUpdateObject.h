#ifndef ACNLWA_NN_NEX_JOBDATASTOREUPDATEOBJECT_H
#define ACNLWA_NN_NEX_JOBDATASTOREUPDATEOBJECT_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class JobDataStoreUpdateObject : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobDataStoreUpdateObject();
    virtual void VF13();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDATASTOREUPDATEOBJECT_H
