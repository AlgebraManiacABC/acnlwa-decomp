#ifndef ACNLWA_COLLISION_AABB_H
#define ACNLWA_COLLISION_AABB_H

#include "acnlwa/collision/Shape.h"

namespace collision {

class AABB : public ::collision::Shape {
public:
    virtual ~AABB();
    virtual void VF02();
};

}  // namespace collision

#endif  // ACNLWA_COLLISION_AABB_H
