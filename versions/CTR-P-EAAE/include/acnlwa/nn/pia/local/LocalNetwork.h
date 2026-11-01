#ifndef ACNLWA_NN_PIA_LOCAL_LOCALNETWORK_H
#define ACNLWA_NN_PIA_LOCAL_LOCALNETWORK_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace local {

class LocalNetwork : public ::nn::pia::common::RootObject {
public:
    virtual ~LocalNetwork();
    virtual void VF02();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALNETWORK_H
