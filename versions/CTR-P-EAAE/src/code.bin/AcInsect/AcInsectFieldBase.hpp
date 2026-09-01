#ifndef ACINSECTFIELDBASE_HPP
#define ACINSECTFIELDBASE_HPP

#include "AcInsectCommon.hpp"

class AcInsectFieldBase : public AcInsectCommon
{
public:
    AcInsectFieldBase();
    virtual ~AcInsectFieldBase();

    // Overrides in the primary (Actor) vtable
    virtual void F08();     // FUN_002c28b0
    virtual void F10();     // FUN_002c2d90
    virtual void F11();     // FUN_002c3b20
    virtual void F19();     // FUN_002d5924
    virtual void F26();     // FUN_002ac31c
    virtual void F30();     // FUN_002c3b4c
    virtual void F31();     // FUN_002c2e50
    virtual void F32();     // FUN_002c3880
    virtual void F33();     // FUN_0071ebe4
    virtual void F34();     // FUN_002c3718
    virtual void F36();     // FUN_0071eb14

    // Override of the virtual base's R07.
    //
    // FUN_00779334 is NOT a plain thunk - it adjusts `this` inline via the vcall
    // offset at ObjectResource_AP-0x24 (= R07's slot, value -0x1E4) and then runs
    // a full body. Because the body is written against the *adjusted* pointer and
    // reads the adjustment from the vtable rather than as a constant, one copy
    // serves every derived class.
    //
    // HYPOTHESIS (untested): ARMCC therefore does NOT add a primary-vtable entry
    // for a virtual-base override, unlike GCC/Itanium. That is what makes the
    // observed primary vtable 56 slots rather than 57, and it means slots 38..55
    // below are all genuinely new AcInsectFieldBase virtuals.
    // DECISIVE TEST: compile this scaffold with ARMCC 4.1 and count primary slots.
    //   56 -> hypothesis holds. 57 -> ARMCC follows GCC and one of F38..F55 is
    //   really R07's unadjusted sibling; find it by looking for a function whose
    //   body matches FUN_00779334 from `ldrb r0,[r4,#0x1cb]` onward with r4 set
    //   from r0 directly.
    virtual void R07();     // ObjectResource slot 7

    // Introduced (slots 38..55). Expected own vtable length: 56 slots.
    virtual void F38();     // FUN_002c2aa4
    virtual void F39();     // FUN_002c2cb8
    virtual void F40();     // FUN_002c3b48
    virtual void F41();     // FUN_005210a4
    virtual void F42();     // FUN_002c2970
    virtual void F43();     // FUN_002c3818
    virtual void F44();     // FUN_002c3978
    virtual void F45();     // FUN_002c34c0
    virtual void F46();     // FUN_002c3550
    virtual void F47();     // FUN_002c3948
    virtual void F48();     // FUN_002c2d74
    virtual void F49();     // FUN_002c3644
    virtual void F50();     // overridden by AcInsectFieldFlyPursue (FUN_0032d0bc)
    virtual void F51();     // overridden by AcInsectFieldFlyPursue (FUN_006c5eec)
    virtual void F52();     // FUN_002c2cb4
    virtual void F53();     // FUN_002c2d54
    virtual void F54();     // FUN_002c34cc
    virtual void F55();     // FUN_002c34c8
};

#endif
