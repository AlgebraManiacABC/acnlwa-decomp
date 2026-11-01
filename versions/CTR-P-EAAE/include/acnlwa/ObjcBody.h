#ifndef ACNLWA_OBJCBODY_H
#define ACNLWA_OBJCBODY_H

#include "acnlwa/collision/World/Body.h"

class ObjcBody : public ::collision::World::Body {
public:
    class Functor {
    public:
    };

    virtual ~ObjcBody();
};

#endif  // ACNLWA_OBJCBODY_H
