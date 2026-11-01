#ifndef ACNLWA_NN_PIA_LOCAL_LOCALCREATESESSIONSETTING_H
#define ACNLWA_NN_PIA_LOCAL_LOCALCREATESESSIONSETTING_H

#include "acnlwa/nn/pia/session/CreateSessionSetting.h"

namespace nn {
namespace pia {
namespace local {

class LocalCreateSessionSetting : public ::nn::pia::session::CreateSessionSetting {
public:
    virtual ~LocalCreateSessionSetting();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALCREATESESSIONSETTING_H
