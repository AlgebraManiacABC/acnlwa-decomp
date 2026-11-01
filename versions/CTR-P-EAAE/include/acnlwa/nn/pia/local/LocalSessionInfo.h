#ifndef ACNLWA_NN_PIA_LOCAL_LOCALSESSIONINFO_H
#define ACNLWA_NN_PIA_LOCAL_LOCALSESSIONINFO_H

#include "acnlwa/nn/pia/session/ISessionInfo.h"

namespace nn {
namespace pia {
namespace local {

class LocalSessionInfo : public ::nn::pia::session::ISessionInfo {
public:
    virtual ~LocalSessionInfo();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08();
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12();
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALSESSIONINFO_H
