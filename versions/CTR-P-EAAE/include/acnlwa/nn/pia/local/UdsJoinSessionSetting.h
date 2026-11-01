#ifndef ACNLWA_NN_PIA_LOCAL_UDSJOINSESSIONSETTING_H
#define ACNLWA_NN_PIA_LOCAL_UDSJOINSESSIONSETTING_H

#include "acnlwa/nn/pia/local/LocalJoinSessionSetting.h"

namespace nn {
namespace pia {
namespace local {

class UdsJoinSessionSetting : public ::nn::pia::local::LocalJoinSessionSetting {
public:
    virtual ~UdsJoinSessionSetting();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSJOINSESSIONSETTING_H
