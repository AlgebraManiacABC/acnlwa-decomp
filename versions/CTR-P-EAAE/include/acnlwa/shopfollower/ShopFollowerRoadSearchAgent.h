#ifndef ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERROADSEARCHAGENT_H
#define ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERROADSEARCHAGENT_H

#include "acnlwa/RoadSearchDefaultAgent.h"

namespace shopfollower {

class ShopFollowerRoadSearchAgent : public ::RoadSearchDefaultAgent {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace shopfollower

#endif  // ACNLWA_SHOPFOLLOWER_SHOPFOLLOWERROADSEARCHAGENT_H
