#ifndef ACNLWA_PEAD_HEAP_H
#define ACNLWA_PEAD_HEAP_H

#include "acnlwa/pead/IDisposer.h"
#include "acnlwa/pead/INamable.h"
#include "acnlwa/pead/hostio/Reflexible.h"

namespace pead {

class Heap : public ::pead::IDisposer, public ::pead::INamable, public ::pead::hostio::Reflexible {
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
    virtual void VF20();
    virtual void VF21();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_HEAP_H
