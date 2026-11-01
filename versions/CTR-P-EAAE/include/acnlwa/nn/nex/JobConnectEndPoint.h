#ifndef ACNLWA_NN_NEX_JOBCONNECTENDPOINT_H
#define ACNLWA_NN_NEX_JOBCONNECTENDPOINT_H

#include "acnlwa/nn/nex/StepSequenceJob.h"

namespace nn {
namespace nex {

class JobConnectEndPoint : public ::nn::nex::StepSequenceJob {
public:
    virtual ~JobConnectEndPoint();
    virtual void VF04();
    virtual void VF09();
    virtual void VF10();
    virtual void VF12();
    virtual void VF13();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBCONNECTENDPOINT_H
