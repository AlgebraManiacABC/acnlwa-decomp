#ifndef OBJECTRESOURCE_HPP
#define OBJECTRESOURCE_HPP

// Virtual base of AcObjectBase.
// PROVEN from the secondary sub-vtable of AcInsectFieldFlyPursue:
//   - 11 slots, all introduced by ObjectResource itself (the last three are
//     ObjectResource-defined, so the suffix bound pins every slot to depth 0).
//   - 10 vcall-offset words precede offset-to-top, which is exactly one per
//     virtual *function* (destructor pair counts once) -> independent confirmation
//     of both the slot count and H-1.
class ObjectResource
{
public:
    ObjectResource();
    virtual ~ObjectResource();  // slot 0 = D1, slot 1 = D0. vcall offset -0x1E4
                                // (overridden down in the Actor branch).

    virtual void R02() = 0;     // __cxa_pure_virtual+1 (Thumb)
    virtual void R03() = 0;
    virtual void R04() = 0;
    virtual void R05() = 0;
    virtual void R06() = 0;

    virtual void R07();         // vcall offset -0x1E4 -> overridden by AcInsectFieldBase
    virtual void R08();         // FUN_00270684
    virtual void R09();         // FUN_002705fc
    virtual void R10();         // FUN_0027066c
};

#endif
