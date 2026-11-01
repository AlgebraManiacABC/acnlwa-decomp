#ifndef ACNLWA_NN_PIA_LOCAL_LOCALDESTROYNETWORKMESSAGE_H
#define ACNLWA_NN_PIA_LOCAL_LOCALDESTROYNETWORKMESSAGE_H

#include "acnlwa/nn/pia/local/LocalMessage.h"

namespace nn {
namespace pia {
namespace local {

class LocalDestroyNetworkMessage : public ::nn::pia::local::LocalMessage {
public:
    virtual ~LocalDestroyNetworkMessage();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALDESTROYNETWORKMESSAGE_H
