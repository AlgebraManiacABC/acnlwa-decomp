#ifndef ACINSECTFIELDFLY_HPP
#define ACINSECTFIELDFLY_HPP

#include "AcInsectFieldBase.hpp"

// PROVEN: AcInsectFieldFly introduces no new virtuals in either sub-vtable.
//   The last slot of the primary vtable (55) is defined by AcInsectFieldBase, so
//   the suffix bound at every index is <= depth(AcInsectFieldBase). A newly
//   introduced virtual would have to sit at the very end and could not have a
//   base-class implementation.
class AcInsectFieldFly : public AcInsectFieldBase
{
public:
    AcInsectFieldFly();
    virtual ~AcInsectFieldFly();

    virtual void F25();     // FUN_002a8294

protected:
    // PLACEHOLDER, NOT EVIDENCE. The virtual base sits at +0x1E4 in the complete
    // object, so the non-virtual part must total 0x1E4 bytes (vptr + all members
    // across Process..AcInsectFieldFly). This block exists only to make the
    // offset come out right; redistribute it into the correct classes as members
    // are identified, and delete it entirely once they are.
    unsigned char mUnknownPadding[0x1E4 - 4];
};

#endif
