#ifndef ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERASTARFOREACHCBROADONLY_H
#define ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERASTARFOREACHCBROADONLY_H

#include "acnlwa/RoadSearchForeachNodeCB.h"

namespace shopfollower {

class ShopFollowerAStarForeachCBRoadOnly : public ::RoadSearchForeachNodeCB {
public:
    virtual void VF00();
};

}  // namespace shopfollower

#endif  // ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERASTARFOREACHCBROADONLY_H
