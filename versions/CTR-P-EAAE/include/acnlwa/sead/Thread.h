#ifndef ACNLWA_SEAD_THREAD_H
#define ACNLWA_SEAD_THREAD_H

#include "acnlwa/sead/IDisposer.h"
#include "acnlwa/sead/INamable.h"
#include "acnlwa/sead/hostio/Reflexible.h"

namespace sead {

class Thread : public ::sead::IDisposer, public ::sead::INamable, public ::sead::hostio::Reflexible {
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
    virtual unsigned int VF12();
    virtual void VF13();
    virtual void VF14();
    virtual unsigned int VF15();
    virtual void VF16() = 0;
    virtual unsigned int VF17();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_THREAD_H
