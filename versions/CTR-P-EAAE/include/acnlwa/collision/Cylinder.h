#ifndef ACNLWA_COLLISION_CYLINDER_H
#define ACNLWA_COLLISION_CYLINDER_H

#include "acnlwa/collision/Shape.h"

namespace collision {

class Cylinder : public ::collision::Shape {
public:
    virtual ~Cylinder();
    virtual void VF02();
};

}  // namespace collision

#endif  // ACNLWA_COLLISION_CYLINDER_H
