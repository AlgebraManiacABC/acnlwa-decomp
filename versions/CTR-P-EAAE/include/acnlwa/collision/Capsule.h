#ifndef ACNLWA_COLLISION_CAPSULE_H
#define ACNLWA_COLLISION_CAPSULE_H

#include "acnlwa/collision/Shape.h"

namespace collision {

class Capsule : public ::collision::Shape {
public:
    virtual ~Capsule();
    virtual void VF02();
};

}  // namespace collision

#endif  // ACNLWA_COLLISION_CAPSULE_H
