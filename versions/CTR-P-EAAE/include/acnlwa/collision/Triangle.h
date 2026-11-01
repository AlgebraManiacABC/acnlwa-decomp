#ifndef ACNLWA_COLLISION_TRIANGLE_H
#define ACNLWA_COLLISION_TRIANGLE_H

#include "acnlwa/collision/Shape.h"

namespace collision {

class Triangle : public ::collision::Shape {
public:
    virtual ~Triangle();
    virtual void VF02();
};

}  // namespace collision

#endif  // ACNLWA_COLLISION_TRIANGLE_H
