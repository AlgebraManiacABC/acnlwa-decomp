#ifndef ACNLWA_NN_PIA_INET_NEXCREATESESSIONSETTING_H
#define ACNLWA_NN_PIA_INET_NEXCREATESESSIONSETTING_H

#include "acnlwa/nn/pia/session/CreateSessionSetting.h"

namespace nn {
namespace pia {
namespace inet {

class NexCreateSessionSetting : public ::nn::pia::session::CreateSessionSetting {
public:
    virtual ~NexCreateSessionSetting();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXCREATESESSIONSETTING_H
