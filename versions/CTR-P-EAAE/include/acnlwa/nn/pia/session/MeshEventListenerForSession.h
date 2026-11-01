#ifndef ACNLWA_NN_PIA_SESSION_MESHEVENTLISTENERFORSESSION_H
#define ACNLWA_NN_PIA_SESSION_MESHEVENTLISTENERFORSESSION_H

#include "acnlwa/nn/pia/session/MeshEventListener.h"

namespace nn {
namespace pia {
namespace session {

class MeshEventListenerForSession : public ::nn::pia::session::MeshEventListener {
public:
    virtual void VF00();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_MESHEVENTLISTENERFORSESSION_H
