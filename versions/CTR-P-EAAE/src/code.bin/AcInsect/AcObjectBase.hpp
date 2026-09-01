#ifndef ACOBJECTBASE_HPP
#define ACOBJECTBASE_HPP

#include "Actor.hpp"
#include "ObjectResource.hpp"

// ObjectResource is a VIRTUAL base. Evidence (three independent sources):
//   1. A VTT (_ZTT) exists - the trailing pointer list in the dump.
//   2. Construction vtables exist for every class in the chain, in both the
//      (Actor) and (ObjectResource) components.
//   3. The ObjectResource sub-vtable is preceded by vcall offsets, not reached
//      via a _ZThn thunk.
// Base order Actor-then-ObjectResource is what the user's tree states; the vtable
// is consistent with it (Actor is the primary base, shares the vptr at +0).
class AcObjectBase : public Actor, public virtual ObjectResource
{
public:
    AcObjectBase();
    virtual ~AcObjectBase();

    // Overrides
    virtual void F03();     // FUN_001f4c9c
    virtual void F06();     // FUN_001f4e44
    virtual void F09();     // FUN_001f4dc0
    virtual void F12();     // FUN_001f4ae4

    // Introduced (slots 17..29). Upper bound is depth<=3 here; any of these may
    // in fact be introduced further up. Check AcObjectBase's own vtable length:
    // it should be exactly 30 slots if this assignment is right.
    virtual void F17();     // overridden by AcInsectCommon (FUN_0071866c)
    virtual void F18() = 0; // __cxa_pure_virtual+1 (Thumb)
    virtual void F19();     // overridden by AcInsectFieldBase (FUN_002d5924)
    virtual void F20();     // overridden by AcInsectCommon (FUN_002d5960)
    virtual void F21();     // FUN_001f3ce0
    virtual void F22();     // overridden by AcInsectCommon (FUN_0024f310)
    virtual void F23();     // overridden by AcInsectCommon (FUN_0024f3a0)
    virtual void F24();     // FUN_001f4c98
    virtual void F25();     // overridden by AcInsectFieldFly (FUN_002a8294)
    virtual void F26();     // overridden by AcInsectFieldBase (FUN_002ac31c)
    virtual void F27();     // FUN_001f4a64
    virtual void F28() = 0; // __cxa_pure_virtual+1 (Thumb)
    virtual void F29();     // FUN_001f4e94
};

#endif
