#ifndef ACNLWA_NN_NEX_JOBINDEPENDENTSERVER_H
#define ACNLWA_NN_NEX_JOBINDEPENDENTSERVER_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class JobIndependentServer : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobIndependentServer();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBINDEPENDENTSERVER_H
