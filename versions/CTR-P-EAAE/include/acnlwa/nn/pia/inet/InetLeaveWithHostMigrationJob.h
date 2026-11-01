#ifndef ACNLWA_NN_PIA_INET_INETLEAVEWITHHOSTMIGRATIONJOB_H
#define ACNLWA_NN_PIA_INET_INETLEAVEWITHHOSTMIGRATIONJOB_H

#include "acnlwa/nn/pia/session/LeaveWithHostMigrationJob.h"

namespace nn {
namespace pia {
namespace inet {

class InetLeaveWithHostMigrationJob : public ::nn::pia::session::LeaveWithHostMigrationJob {
public:
    virtual ~InetLeaveWithHostMigrationJob();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_INETLEAVEWITHHOSTMIGRATIONJOB_H
