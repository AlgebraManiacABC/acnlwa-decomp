#ifndef ACNLWA_NN_PIA_LOCAL_LOCALINPUTSTREAM_H
#define ACNLWA_NN_PIA_LOCAL_LOCALINPUTSTREAM_H

#include "acnlwa/nn/pia/local/LocalStreamBase.h"
#include "acnlwa/nn/pia/common/IPacketInput.h"

namespace nn {
namespace pia {
namespace local {

class LocalInputStream : public ::nn::pia::local::LocalStreamBase, public ::nn::pia::common::IPacketInput {
public:
    virtual ~LocalInputStream();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALINPUTSTREAM_H
