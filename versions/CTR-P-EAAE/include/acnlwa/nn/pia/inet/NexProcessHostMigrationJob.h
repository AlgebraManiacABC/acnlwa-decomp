#ifndef ACNLWA_NN_PIA_INET_NEXPROCESSHOSTMIGRATIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXPROCESSHOSTMIGRATIONJOB_H

#include "acnlwa/nn/pia/session/ProcessHostMigrationJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexProcessHostMigrationJob : public ::nn::pia::session::ProcessHostMigrationJob {
public:
    virtual ~NexProcessHostMigrationJob();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXPROCESSHOSTMIGRATIONJOB_H
