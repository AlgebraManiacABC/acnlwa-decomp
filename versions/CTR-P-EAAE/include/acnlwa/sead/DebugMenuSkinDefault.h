#ifndef ACNLWA_SEAD_DEBUGMENUSKINDEFAULT_H
#define ACNLWA_SEAD_DEBUGMENUSKINDEFAULT_H

#include "acnlwa/sead/DebugMenuSkinBase.h"

namespace sead {

class DebugMenuSkinDefault : public ::sead::DebugMenuSkinBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~DebugMenuSkinDefault();
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
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DEBUGMENUSKINDEFAULT_H
