#ifndef ACNLWA_NN_NEX_JOBDATASTOREGETOBJECT_H
#define ACNLWA_NN_NEX_JOBDATASTOREGETOBJECT_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"
#include "acnlwa/nn/nex/HttpEventListener.h"

namespace nn {
namespace nex {

template <typename T0>
class JobDataStoreGetObject : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable, public ::nn::nex::HttpEventListener {
public:
    virtual ~JobDataStoreGetObject();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

template <typename T0>
JobDataStoreGetObject<T0>::~JobDataStoreGetObject() {}

template <typename T0>
void JobDataStoreGetObject<T0>::VF13() {}

template <typename T0>
void JobDataStoreGetObject<T0>::VF14() {}

template <typename T0>
void JobDataStoreGetObject<T0>::VF15() {}

template <typename T0>
void JobDataStoreGetObject<T0>::VF16() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDATASTOREGETOBJECT_H
