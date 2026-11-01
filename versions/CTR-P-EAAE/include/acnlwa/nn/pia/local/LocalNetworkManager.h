#ifndef ACNLWA_NN_PIA_LOCAL_LOCALNETWORKMANAGER_H
#define ACNLWA_NN_PIA_LOCAL_LOCALNETWORKMANAGER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace local {

class LocalNetworkManager : public ::nn::pia::common::RootObject {
public:
    virtual ~LocalNetworkManager();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual void VF19() = 0;
    virtual void VF20() = 0;
    virtual void VF21() = 0;
    virtual void VF22() = 0;
    virtual void VF23() = 0;
    virtual void VF24() = 0;
    virtual void VF25() = 0;
    virtual void VF26() = 0;
    virtual void VF27() = 0;
    virtual void VF28() = 0;
    virtual void VF29() = 0;
    virtual void VF30() = 0;
    virtual void VF31() = 0;
    virtual void VF32();
    virtual void VF33() = 0;
    virtual void VF34() = 0;
    virtual void VF35() = 0;
    virtual void VF36() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALNETWORKMANAGER_H
