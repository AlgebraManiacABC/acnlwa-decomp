#ifndef BASE_HPP
#define BASE_HPP

#include "Process.hpp"

// UNPROVEN: Base introduces no new virtuals and overrides nothing visible in
//   AcInsectFieldFlyPursue's vtable. That is consistent with the dump but not
//   implied by it - slots 15/16 (assigned to Actor here) could belong to Base,
//   and any Process slot could have been overridden by Base and then re-overridden
//   below. Dump Base's own vtable to settle both.
class Base : public oml::framework::Process
{
public:
    Base();
    virtual ~Base();
};

#endif
