#ifndef ACNLWA_NN_PIA_LOCAL_LOCALPROCESSHOSTMIGRATIONJOBNEW_H
#define ACNLWA_NN_PIA_LOCAL_LOCALPROCESSHOSTMIGRATIONJOBNEW_H

#include "acnlwa/nn/pia/session/ProcessHostMigrationJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalProcessHostMigrationJobNew : public ::nn::pia::session::ProcessHostMigrationJob {
public:
    virtual ~LocalProcessHostMigrationJobNew();
    virtual void VF05();
    virtual void VF09();
    virtual void VF11();
    virtual void VF13();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALPROCESSHOSTMIGRATIONJOBNEW_H
