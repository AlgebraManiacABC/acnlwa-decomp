#ifndef ACNLWA_NN_NEX_JOBDATASTORERECEIVENEWARRIVEDOBJECTS_H
#define ACNLWA_NN_NEX_JOBDATASTORERECEIVENEWARRIVEDOBJECTS_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

template <typename T0>
class JobDataStoreReceiveNewArrivedObjects : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobDataStoreReceiveNewArrivedObjects();
    virtual void VF13();
    virtual void VF14();
};

template <typename T0>
JobDataStoreReceiveNewArrivedObjects<T0>::~JobDataStoreReceiveNewArrivedObjects() {}

template <typename T0>
void JobDataStoreReceiveNewArrivedObjects<T0>::VF13() {}

template <typename T0>
void JobDataStoreReceiveNewArrivedObjects<T0>::VF14() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDATASTORERECEIVENEWARRIVEDOBJECTS_H
