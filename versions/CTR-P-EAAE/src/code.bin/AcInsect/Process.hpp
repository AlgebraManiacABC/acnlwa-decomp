#ifndef OML_FRAMEWORK_PROCESS_HPP
#define OML_FRAMEWORK_PROCESS_HPP

namespace oml { namespace framework {

// PROVEN from AcInsectFieldFlyPursue's primary vtable:
//   slots 0..14 must be introduced by Process (upper bound on introducer depth
//   is 0 at every one of those indices, see README section "Introducer bands").
// UNPROVEN: whether Process has a base class of its own. If it does, every slot
//   index below shifts and this whole file is wrong.
// UNPROVEN: all signatures. void()/void is a placeholder; real parameter types
//   change the mangled name and therefore .text ordering.
class Process
{
public:
    Process();
    virtual ~Process();     // slot 0 = D1, slot 1 = D0

    virtual void F02();
    virtual void F03();
    virtual void F04();
    virtual void F05();
    virtual void F06();
    virtual void F07();
    virtual void F08();
    virtual void F09();
    virtual void F10();
    virtual void F11();
    virtual void F12();
    virtual void F13();
    virtual void F14();     // FUN_?? - only Process-defined slot visible in the dump
};

} }

#endif
