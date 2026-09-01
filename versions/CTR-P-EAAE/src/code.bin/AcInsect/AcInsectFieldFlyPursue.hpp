#ifndef ACINSECTFIELDFLYPURSUE_HPP
#define ACINSECTFIELDFLYPURSUE_HPP

#include "AcInsectFieldFly.hpp"

// PROVEN: introduces no new virtuals in either sub-vtable (same suffix-bound
//   argument as AcInsectFieldFly).
// HYPOTHESIS: this class is ABSTRACT. Slots 18, 28 and 35 of the primary vtable
//   and slots 2..6 of the ObjectResource vtable are still __cxa_pure_virtual, so
//   no complete object of this type can be constructed. Expect further derived
//   classes (individual pursuing-fly insect species) that fill those in.
class AcInsectFieldFlyPursue : public AcInsectFieldFly
{
public:
    AcInsectFieldFlyPursue();
    virtual ~AcInsectFieldFlyPursue();   // D1_00778ccc / D0_00778ca8 in the
                                         // ObjectResource sub-vtable are almost
                                         // certainly virtual thunks, not the
                                         // dtor bodies themselves.

    virtual void F50();     // FUN_0032d0bc
    virtual void F51();     // FUN_006c5eec
};

#endif
