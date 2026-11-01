#ifndef ACNLWA_NN_PIA_LOCAL_LOCALLEAVEWITHHOSTMIGRATIONJOBNEW_H
#define ACNLWA_NN_PIA_LOCAL_LOCALLEAVEWITHHOSTMIGRATIONJOBNEW_H

#include "acnlwa/nn/pia/session/LeaveWithHostMigrationJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalLeaveWithHostMigrationJobNew : public ::nn::pia::session::LeaveWithHostMigrationJob {
public:
    virtual ~LocalLeaveWithHostMigrationJobNew();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALLEAVEWITHHOSTMIGRATIONJOBNEW_H
