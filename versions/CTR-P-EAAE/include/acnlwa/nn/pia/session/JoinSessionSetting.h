#ifndef ACNLWA_NN_PIA_SESSION_JOINSESSIONSETTING_H
#define ACNLWA_NN_PIA_SESSION_JOINSESSIONSETTING_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace session {

class JoinSessionSetting : public ::nn::pia::common::RootObject {
public:
    virtual ~JoinSessionSetting();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_JOINSESSIONSETTING_H
