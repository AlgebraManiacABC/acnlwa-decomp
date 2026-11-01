#ifndef ACNLWA_NN_PIA_INET_NEXJOINSESSIONSETTING_H
#define ACNLWA_NN_PIA_INET_NEXJOINSESSIONSETTING_H

#include "acnlwa/nn/pia/session/JoinSessionSetting.h"

namespace nn {
namespace pia {
namespace inet {

class NexJoinSessionSetting : public ::nn::pia::session::JoinSessionSetting {
public:
    virtual ~NexJoinSessionSetting();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXJOINSESSIONSETTING_H
