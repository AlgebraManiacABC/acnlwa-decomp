#ifndef ACNLWA_BSOBJCHKMGR_ACTORBODY_H
#define ACNLWA_BSOBJCHKMGR_ACTORBODY_H

#include "acnlwa/collision/World/Body.h"

namespace bsobjchkmgr {

class ActorBody : public ::collision::World::Body {
public:
    virtual ~ActorBody();
};

}  // namespace bsobjchkmgr

#endif  // ACNLWA_BSOBJCHKMGR_ACTORBODY_H
