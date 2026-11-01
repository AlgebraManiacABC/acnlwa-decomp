#ifndef ACNLWA_NN_PIA_SESSION_MESHEVENTLISTENER_H
#define ACNLWA_NN_PIA_SESSION_MESHEVENTLISTENER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace session {

class MeshEventListener : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_MESHEVENTLISTENER_H
