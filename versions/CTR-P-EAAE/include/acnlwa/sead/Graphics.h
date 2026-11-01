#ifndef ACNLWA_SEAD_GRAPHICS_H
#define ACNLWA_SEAD_GRAPHICS_H

#include "acnlwa/sead/IDisposer.h"

namespace sead {

class Graphics : public ::sead::IDisposer {
public:
    virtual ~Graphics();
    virtual void VF02();
    virtual void VF03() = 0;
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
};

}  // namespace sead

#endif  // ACNLWA_SEAD_GRAPHICS_H
