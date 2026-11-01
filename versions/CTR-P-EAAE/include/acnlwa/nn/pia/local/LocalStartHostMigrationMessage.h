#ifndef ACNLWA_NN_PIA_LOCAL_LOCALSTARTHOSTMIGRATIONMESSAGE_H
#define ACNLWA_NN_PIA_LOCAL_LOCALSTARTHOSTMIGRATIONMESSAGE_H

#include "acnlwa/nn/pia/local/LocalMessage.h"

namespace nn {
namespace pia {
namespace local {

class LocalStartHostMigrationMessage : public ::nn::pia::local::LocalMessage {
public:
    virtual ~LocalStartHostMigrationMessage();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALSTARTHOSTMIGRATIONMESSAGE_H
