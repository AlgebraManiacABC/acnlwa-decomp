#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMATCHJOINSESSIONJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMATCHJOINSESSIONJOB_H

#include "acnlwa/nn/pia/session/JoinSessionJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalMatchJoinSessionJob : public ::nn::pia::session::JoinSessionJob {
public:
    virtual ~LocalMatchJoinSessionJob();
    virtual void VF05();
    virtual void VF12();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMATCHJOINSESSIONJOB_H
