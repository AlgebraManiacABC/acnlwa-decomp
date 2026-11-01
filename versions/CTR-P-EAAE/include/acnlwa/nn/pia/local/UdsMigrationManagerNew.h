#ifndef ACNLWA_NN_PIA_LOCAL_UDSMIGRATIONMANAGERNEW_H
#define ACNLWA_NN_PIA_LOCAL_UDSMIGRATIONMANAGERNEW_H

#include "acnlwa/nn/pia/local/LocalMigrationManager.h"

namespace nn {
namespace pia {
namespace local {

class UdsMigrationManagerNew : public ::nn::pia::local::LocalMigrationManager {
public:
    virtual ~UdsMigrationManagerNew();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSMIGRATIONMANAGERNEW_H
