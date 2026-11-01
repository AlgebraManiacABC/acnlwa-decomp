#ifndef ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERASTARFOREACHCB_H
#define ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERASTARFOREACHCB_H

#include "acnlwa/RoadSearchForeachNodeCB.h"

namespace shopfollower {

class ShopFollowerAStarForeachCB : public ::RoadSearchForeachNodeCB {
public:
    virtual void VF00();
};

}  // namespace shopfollower

#endif  // ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERASTARFOREACHCB_H
