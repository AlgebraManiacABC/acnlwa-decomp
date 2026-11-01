#ifndef ACNLWA_NN_NEX_JOBCONNECTSECUREENDPOINT_H
#define ACNLWA_NN_NEX_JOBCONNECTSECUREENDPOINT_H

#include "acnlwa/nn/nex/Job.h"

namespace nn {
namespace nex {

class JobConnectSecureEndPoint : public ::nn::nex::Job {
public:
    virtual ~JobConnectSecureEndPoint();
    virtual void VF03();
    virtual void VF09();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBCONNECTSECUREENDPOINT_H
