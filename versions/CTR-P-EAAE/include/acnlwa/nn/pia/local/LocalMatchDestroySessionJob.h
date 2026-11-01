#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMATCHDESTROYSESSIONJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMATCHDESTROYSESSIONJOB_H

#include "acnlwa/nn/pia/session/DestroySessionJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalMatchDestroySessionJob : public ::nn::pia::session::DestroySessionJob {
public:
    virtual ~LocalMatchDestroySessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMATCHDESTROYSESSIONJOB_H
