#ifndef ACNLWA_SEAD_DOUBLECMDGAMEFRAMEWORKCTRNW4C_H
#define ACNLWA_SEAD_DOUBLECMDGAMEFRAMEWORKCTRNW4C_H

#include "acnlwa/sead/GameFrameworkCtrNw4c.h"

namespace sead {

class DoubleCmdGameFrameworkCtrNw4c : public ::sead::GameFrameworkCtrNw4c {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~DoubleCmdGameFrameworkCtrNw4c();
    virtual void VF24();
    virtual void VF25();
    virtual void VF28();
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
    virtual void VF34();
    virtual void VF35();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DOUBLECMDGAMEFRAMEWORKCTRNW4C_H
