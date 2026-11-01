#ifndef ACNLWA_HALLOWEENWALK_ASTARFOREACHCB_H
#define ACNLWA_HALLOWEENWALK_ASTARFOREACHCB_H

#include "acnlwa/RoadSearchForeachNodeCB.h"

namespace HalloweenWalk {

class AStarForeachCB : public ::RoadSearchForeachNodeCB {
public:
    virtual void VF00();
};

}  // namespace HalloweenWalk

#endif  // ACNLWA_HALLOWEENWALK_ASTARFOREACHCB_H
