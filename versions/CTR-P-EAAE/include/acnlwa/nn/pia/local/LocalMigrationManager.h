#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMIGRATIONMANAGER_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMIGRATIONMANAGER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace local {

class LocalMigrationManager : public ::nn::pia::common::RootObject {
public:
    virtual ~LocalMigrationManager();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMIGRATIONMANAGER_H
