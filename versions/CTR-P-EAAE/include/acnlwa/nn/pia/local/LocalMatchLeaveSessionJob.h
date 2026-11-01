#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMATCHLEAVESESSIONJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMATCHLEAVESESSIONJOB_H

#include "acnlwa/nn/pia/session/LeaveSessionJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalMatchLeaveSessionJob : public ::nn::pia::session::LeaveSessionJob {
public:
    virtual ~LocalMatchLeaveSessionJob();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMATCHLEAVESESSIONJOB_H
