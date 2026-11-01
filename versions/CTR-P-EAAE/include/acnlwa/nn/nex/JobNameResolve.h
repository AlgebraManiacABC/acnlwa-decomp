#ifndef ACNLWA_NN_NEX_JOBNAMERESOLVE_H
#define ACNLWA_NN_NEX_JOBNAMERESOLVE_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class JobNameResolve : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobNameResolve();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBNAMERESOLVE_H
