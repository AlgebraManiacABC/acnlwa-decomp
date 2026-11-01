#ifndef ACNLWA_NN_PIA_COMMON_MD5CONTEXT_H
#define ACNLWA_NN_PIA_COMMON_MD5CONTEXT_H

#include "acnlwa/nn/pia/common/HashContextBase.h"

namespace nn {
namespace pia {
namespace common {

class Md5Context : public ::nn::pia::common::HashContextBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_MD5CONTEXT_H
