#ifndef ACNLWA_NN_PIA_LOCAL_LOCALOUTPUTSTREAM_H
#define ACNLWA_NN_PIA_LOCAL_LOCALOUTPUTSTREAM_H

#include "acnlwa/nn/pia/local/LocalStreamBase.h"
#include "acnlwa/nn/pia/common/IPacketOutput.h"

namespace nn {
namespace pia {
namespace local {

class LocalOutputStream : public ::nn::pia::local::LocalStreamBase, public ::nn::pia::common::IPacketOutput {
public:
    virtual ~LocalOutputStream();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALOUTPUTSTREAM_H
