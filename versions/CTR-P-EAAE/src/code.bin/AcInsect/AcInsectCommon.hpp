#ifndef ACINSECTCOMMON_HPP
#define ACINSECTCOMMON_HPP

#include "AcObjectBase.hpp"

class AcInsectCommon : public AcObjectBase
{
public:
    AcInsectCommon();
    virtual ~AcInsectCommon();

    // Overrides
    virtual void F17();     // FUN_0071866c
    virtual void F20();     // FUN_002d5960
    virtual void F22();     // FUN_0024f310
    virtual void F23();     // FUN_0024f3a0

    // Introduced (slots 30..37). Expected own vtable length: 38 slots.
    virtual void F30();     // overridden by AcInsectFieldBase (FUN_002c3b4c)
    virtual void F31();     // overridden by AcInsectFieldBase (FUN_002c2e50)
    virtual void F32();     // overridden by AcInsectFieldBase (FUN_002c3880)
    virtual void F33();     // overridden by AcInsectFieldBase (FUN_0071ebe4)
    virtual void F34();     // overridden by AcInsectFieldBase (FUN_002c3718)
    virtual void F35() = 0; // __cxa_pure_virtual+1 (Thumb)
    virtual void F36();     // overridden by AcInsectFieldBase (FUN_0071eb14)
    virtual void F37();     // FUN_00718678
};

#endif
