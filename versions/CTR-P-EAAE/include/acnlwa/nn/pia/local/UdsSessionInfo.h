#ifndef ACNLWA_NN_PIA_LOCAL_UDSSESSIONINFO_H
#define ACNLWA_NN_PIA_LOCAL_UDSSESSIONINFO_H

#include "acnlwa/nn/pia/local/LocalSessionInfo.h"

namespace nn {
namespace pia {
namespace local {

class UdsSessionInfo : public ::nn::pia::local::LocalSessionInfo {
public:
    virtual ~UdsSessionInfo();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSSESSIONINFO_H
