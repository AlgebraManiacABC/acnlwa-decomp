#ifndef ACNLWA_NN_NEX_JOBDATASTOREPOSTOBJECT_H
#define ACNLWA_NN_NEX_JOBDATASTOREPOSTOBJECT_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

template <typename T0>
class JobDataStorePostObject : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobDataStorePostObject();
    virtual void VF13();
};

template <typename T0>
JobDataStorePostObject<T0>::~JobDataStorePostObject() {}

template <typename T0>
void JobDataStorePostObject<T0>::VF13() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDATASTOREPOSTOBJECT_H
