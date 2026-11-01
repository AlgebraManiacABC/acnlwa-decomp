#ifndef ACNLWA_COLLISION_SPHERE_H
#define ACNLWA_COLLISION_SPHERE_H

#include "acnlwa/collision/Shape.h"

namespace collision {

class Sphere : public ::collision::Shape {
public:
    virtual ~Sphere();
    virtual void VF02();
};

}  // namespace collision

#endif  // ACNLWA_COLLISION_SPHERE_H
