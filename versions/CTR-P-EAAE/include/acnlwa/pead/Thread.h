#ifndef ACNLWA_PEAD_THREAD_H
#define ACNLWA_PEAD_THREAD_H

#include "acnlwa/pead/IDisposer.h"
#include "acnlwa/pead/INamable.h"
#include "acnlwa/pead/hostio/Reflexible.h"

namespace pead {

class Thread : public ::pead::IDisposer, public ::pead::INamable, public ::pead::hostio::Reflexible {
public:
    virtual ~Thread();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15() = 0;
    virtual void VF16();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_THREAD_H
