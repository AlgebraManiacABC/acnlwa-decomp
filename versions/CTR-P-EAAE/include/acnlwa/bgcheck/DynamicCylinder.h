#ifndef ACNLWA_BGCHECK_DYNAMICCYLINDER_H
#define ACNLWA_BGCHECK_DYNAMICCYLINDER_H

#include "acnlwa/collision/World/Body.h"

namespace bgcheck {

class DynamicCylinder : public ::collision::World::Body {
public:
    virtual ~DynamicCylinder();
};

}  // namespace bgcheck

#endif  // ACNLWA_BGCHECK_DYNAMICCYLINDER_H
