#ifndef ACNLWA_SEAD_HEAP_H
#define ACNLWA_SEAD_HEAP_H

#include "acnlwa/sead/IDisposer.h"
#include "acnlwa/sead/INamable.h"
#include "acnlwa/sead/hostio/Reflexible.h"

namespace sead {

class Heap : public ::sead::IDisposer, public ::sead::INamable, public ::sead::hostio::Reflexible {
public:
    virtual ~Heap();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10();
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
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_HEAP_H
