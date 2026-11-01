#ifndef ACNLWA_ULCDFRAMEWORK_H
#define ACNLWA_ULCDFRAMEWORK_H

#include "acnlwa/sead/UlcdDoubleCmdGameFrameworkCtrNw4c.h"

class UlcdFramework : public ::sead::UlcdDoubleCmdGameFrameworkCtrNw4c {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~UlcdFramework();
    virtual void VF10();
    virtual void VF22();
    virtual void VF25();
    virtual void VF26();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
};

#endif  // ACNLWA_ULCDFRAMEWORK_H
