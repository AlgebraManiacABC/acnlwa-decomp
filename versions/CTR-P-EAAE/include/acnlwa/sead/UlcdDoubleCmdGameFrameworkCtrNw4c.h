#ifndef ACNLWA_SEAD_ULCDDOUBLECMDGAMEFRAMEWORKCTRNW4C_H
#define ACNLWA_SEAD_ULCDDOUBLECMDGAMEFRAMEWORKCTRNW4C_H

#include "acnlwa/sead/DoubleCmdGameFrameworkCtrNw4c.h"

namespace sead {

class UlcdDoubleCmdGameFrameworkCtrNw4c : public ::sead::DoubleCmdGameFrameworkCtrNw4c {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~UlcdDoubleCmdGameFrameworkCtrNw4c();
    virtual void VF06();
    virtual void VF12();
    virtual void VF26();
    virtual void VF30();
    virtual void VF34();
    virtual void VF36();
    virtual void VF37();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_ULCDDOUBLECMDGAMEFRAMEWORKCTRNW4C_H
