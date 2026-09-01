#ifndef ACTOR_HPP
#define ACTOR_HPP

#include "Base.hpp"

class Actor : public Base
{
public:
    Actor();
    virtual ~Actor();

    // Overrides of Process-introduced slots (definer in the dump == Actor)
    virtual void F02();     // FUN_0057ba40
    virtual void F04();     // FUN_0057b988
    virtual void F05();     // FUN_0057ba54
    virtual void F07();     // FUN_0057b98c
    virtual void F13();     // FUN_00521a38

    // Newly introduced. UNPROVEN: could belong to Base instead (bound is depth<=2).
    virtual void F15();     // FUN_007527d4
    virtual void F16();     // FUN_0057ba28
};

#endif
