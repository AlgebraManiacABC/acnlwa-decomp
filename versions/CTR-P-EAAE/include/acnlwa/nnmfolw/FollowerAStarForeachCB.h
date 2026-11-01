#ifndef ACNLWA_NNMFOLW_FOLLOWERASTARFOREACHCB_H
#define ACNLWA_NNMFOLW_FOLLOWERASTARFOREACHCB_H

#include "acnlwa/RoadSearchForeachNodeCB.h"

namespace nnmfolw {

class FollowerAStarForeachCB : public ::RoadSearchForeachNodeCB {
public:
    virtual void VF00();
};

}  // namespace nnmfolw

#endif  // ACNLWA_NNMFOLW_FOLLOWERASTARFOREACHCB_H
