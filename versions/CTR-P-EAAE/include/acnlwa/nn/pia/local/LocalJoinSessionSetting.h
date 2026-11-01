#ifndef ACNLWA_NN_PIA_LOCAL_LOCALJOINSESSIONSETTING_H
#define ACNLWA_NN_PIA_LOCAL_LOCALJOINSESSIONSETTING_H

#include "acnlwa/nn/pia/session/JoinSessionSetting.h"

namespace nn {
namespace pia {
namespace local {

class LocalJoinSessionSetting : public ::nn::pia::session::JoinSessionSetting {
public:
    virtual ~LocalJoinSessionSetting();
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALJOINSESSIONSETTING_H
