#ifndef ACNLWA_SEAD_GAMEFRAMEWORK_H
#define ACNLWA_SEAD_GAMEFRAMEWORK_H

#include "acnlwa/sead/Framework.h"

namespace sead {

class GameFramework : public ::sead::Framework {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~GameFramework();
    virtual void VF05();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19() = 0;
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_GAMEFRAMEWORK_H
